#include <am.h>
#include <nemu.h>
#include <stdio.h>

#define AUDIO_FREQ_ADDR      (AUDIO_ADDR + 0x00)
#define AUDIO_CHANNELS_ADDR  (AUDIO_ADDR + 0x04)
#define AUDIO_SAMPLES_ADDR   (AUDIO_ADDR + 0x08)
#define AUDIO_SBUF_SIZE_ADDR (AUDIO_ADDR + 0x0c)
#define AUDIO_INIT_ADDR      (AUDIO_ADDR + 0x10)
#define AUDIO_COUNT_ADDR     (AUDIO_ADDR + 0x14)

/*freq, channels和samples这三个寄存器可写入相应的初始化参数
init寄存器用于初始化, 写入后将根据设置好的freq, channels和
samples来对SDL的音频子系统进行初始化
流缓冲区STREAM_BUF是一段MMIO空间, 用于存放来自程序的音频数据, 
这些音频数据会在将来写入到SDL库中
sbuf_size寄存器可读出流缓冲区的大小
count寄存器可以读出当前流缓冲区已经使用的大小*/

void __am_audio_init() {
  int freq = inl(AUDIO_FREQ_ADDR);
  int channels = inl(AUDIO_CHANNELS_ADDR);
  int samples = inl(AUDIO_SAMPLES_ADDR);

  printf("%d %d %d\n",freq,channels,samples);
}

void __am_audio_config(AM_AUDIO_CONFIG_T *cfg) {
  cfg->present = true;
  cfg->bufsize = 0;
}

void __am_audio_ctrl(AM_AUDIO_CTRL_T *ctrl) {
  outl(AUDIO_FREQ_ADDR, ctrl->freq);
  outl(AUDIO_CHANNELS_ADDR, ctrl->channels);
  outl(AUDIO_SAMPLES_ADDR, ctrl->samples);
  outl(AUDIO_INIT_ADDR, 1);    //将init写入1，音频子系统进入初始化
}


void __am_audio_status(AM_AUDIO_STATUS_T *stat) {
  stat->count = 0;
}

void __am_audio_play(AM_AUDIO_PLAY_T *ctl) {

}
