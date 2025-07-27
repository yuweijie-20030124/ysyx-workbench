#include <am.h>
#include <nemu.h>

#define AUDIO_FREQ_ADDR      (AUDIO_ADDR + 0x00)
#define AUDIO_CHANNELS_ADDR  (AUDIO_ADDR + 0x04)
#define AUDIO_SAMPLES_ADDR   (AUDIO_ADDR + 0x08)
#define AUDIO_SBUF_SIZE_ADDR (AUDIO_ADDR + 0x0c)
#define AUDIO_INIT_ADDR      (AUDIO_ADDR + 0x10)
#define AUDIO_COUNT_ADDR     (AUDIO_ADDR + 0x14)

static uint32_t sbuf_pos = 0; 

void __am_audio_init() {
}

void __am_audio_config(AM_AUDIO_CONFIG_T *cfg) {
  cfg->present = true;
}

void __am_audio_ctrl(AM_AUDIO_CTRL_T *ctrl) {
  outl(AUDIO_FREQ_ADDR, ctrl->freq);
  outl(AUDIO_CHANNELS_ADDR, ctrl->channels);
  outl(AUDIO_SAMPLES_ADDR, ctrl->samples);
  outl(AUDIO_INIT_ADDR, 1); 
}

void __am_audio_status(AM_AUDIO_STATUS_T *stat) {
  stat->count = inl(AUDIO_COUNT_ADDR);
}

void __am_audio_play(AM_AUDIO_PLAY_T *ctl) {
  uint8_t *audio_data = (ctl->buf).start;   //音频数据起始地址
  uint32_t sbuf_size = inl(AUDIO_SBUF_SIZE_ADDR);  //环形缓冲区大小
  uint32_t len = (ctl->buf).end - (ctl->buf).start;   //数据长度
  uint8_t *ab = (uint8_t *)(uintptr_t)AUDIO_SBUF_ADDR;  //环形缓冲区地址
  for(int i = 0; i < len; i++){
    ab[sbuf_pos] = audio_data[i];   //拷贝数据
    sbuf_pos = (sbuf_pos + 1) % sbuf_size;    //更新地址
  }
  outl(AUDIO_COUNT_ADDR, inl(AUDIO_COUNT_ADDR) + len); //更新count
}

