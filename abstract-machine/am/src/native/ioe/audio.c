//读懂native就知道riscv-32nemu如何实现
#define _GNU_SOURCE
#include <fcntl.h>
#include <unistd.h>
#include <klib.h>
#include <SDL.h>

static int rfd = -1, wfd = -1;
static volatile int count = 0;

//实现audio初始化需要
void __am_audio_init() {
  int fds[2];     //存储管道两端文件描述符的数组
  int ret = pipe2(fds, O_NONBLOCK); //nonblock确保读写操作不会阻塞进程
  assert(ret == 0); //确保管道创建成功
  rfd = fds[0]; // 保存读端描述符到全局变量
  wfd = fds[1]; // 保存写端描述符到全局变量
}
/*这段代码实现了一个音频数据回调函数，主要用于将管道中的音频数据填充到音频设备的播放缓冲区。*/

static void audio_play(void *userdata, uint8_t *stream, int len) {
  int nread = len;
  if (count < len) nread = count;//count是剩余播放数据量
  //从管道中循环读取数据
  int b = 0;
  while (b < nread) {
/*read()会把参数rfd所指的文件传送nread个字节到stream指针所指的内存中. 若参数
nread为0, 则read()不会有作用并返回0. 返回值为实际读取到的字节数, 如果返回0
, 表示已到达文件尾或是无可读取的数据,此外文件读写位置会随读取到的字节移动.*/
//从frd中读取音频数据，将数据放到stream中，数据不够长的时候做静音处理。·
    int n = read(rfd, stream, nread);
    if (n > 0) b += n;
  }
  //更新剩余数据计数器
  count -= nread;
  if (len > nread) {
    //数据不足时进行静音
    memset(stream + nread, 0, len - nread);
  }
}

static void audio_write(uint8_t *buf, int len) {
  int nwrite = 0;
  while (nwrite < len) {
    int n = write(wfd, buf, len);
    if (n == -1) n = 0;
    count += n;
    nwrite += n;
  }
}

void __am_audio_ctrl(AM_AUDIO_CTRL_T *ctrl) {
  SDL_AudioSpec s = {}; //初始化一个audiospec结构体s
  s.freq = ctrl->freq;
  s.format = AUDIO_S16SYS;
  s.channels = ctrl->channels;
  s.samples = ctrl->samples;
  s.callback = audio_play;
  s.userdata = NULL;

  count = 0;
  int ret = SDL_InitSubSystem(SDL_INIT_AUDIO);
  if (ret == 0) {
    SDL_OpenAudio(&s, NULL); //初始化音频子系统
    SDL_PauseAudio(0);
  }
}

void __am_audio_status(AM_AUDIO_STATUS_T *stat) {
  stat->count = count;
}

void __am_audio_play(AM_AUDIO_PLAY_T *ctl) {
  int len = ctl->buf.end - ctl->buf.start;
  audio_write(ctl->buf.start, len);
}

void __am_audio_config(AM_AUDIO_CONFIG_T *cfg) {
  cfg->present = true;
  cfg->bufsize = fcntl(rfd, F_GETPIPE_SZ);
}
