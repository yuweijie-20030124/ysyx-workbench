#include <am.h>
#include <NDL.h>
#include <stdio.h>
#include <string.h>
#include <sys/time.h>

static int screen_w = 0;
static int screen_h = 0;
static bool ioe_inited = false;

#define KEY_NAME(key) [AM_KEY_##key] = #key,
static const char *key_names[] = {
  [AM_KEY_NONE] = "NONE",
  AM_KEYS(KEY_NAME)
};

static int parse_key(const char *name) {
  for (int i = 0; i < (int)(sizeof(key_names) / sizeof(key_names[0])); i++) {
    if (key_names[i] && strcmp(name, key_names[i]) == 0) {
      return i;
    }
  }
  return AM_KEY_NONE;
}

static void ensure_ioe_init(void) {
  if (!ioe_inited) {
    ioe_init();
  }
}

bool ioe_init() {
  if (!ioe_inited) {
    NDL_Init(0);
    screen_w = 0;
    screen_h = 0;
    NDL_OpenCanvas(&screen_w, &screen_h);
    ioe_inited = true;
  }
  return true;
}

void ioe_read(int reg, void *buf) {
  ensure_ioe_init();

  switch (reg) {
    case AM_UART_CONFIG: {
      AM_UART_CONFIG_T *cfg = buf;
      cfg->present = true;
      break;
    }
    case AM_UART_RX: {
      AM_UART_RX_T *rx = buf;
      rx->data = 0;
      break;
    }
    case AM_TIMER_CONFIG: {
      AM_TIMER_CONFIG_T *cfg = buf;
      cfg->present = true;
      cfg->has_rtc = true;
      break;
    }
    case AM_TIMER_UPTIME: {
      AM_TIMER_UPTIME_T *uptime = buf;
      struct timeval tv;
      gettimeofday(&tv, NULL);
      uptime->us = (uint64_t)tv.tv_sec * 1000000 + tv.tv_usec;
      break;
    }
    case AM_TIMER_RTC: {
      AM_TIMER_RTC_T *rtc = buf;
      memset(rtc, 0, sizeof(*rtc));
      break;
    }
    case AM_INPUT_CONFIG: {
      AM_INPUT_CONFIG_T *cfg = buf;
      cfg->present = true;
      break;
    }
    case AM_INPUT_KEYBRD: {
      AM_INPUT_KEYBRD_T *kbd = buf;
      char ev[64] = {};
      kbd->keydown = false;
      kbd->keycode = AM_KEY_NONE;
      if (NDL_PollEvent(ev, sizeof(ev))) {
        char type[3] = {};
        char name[32] = {};
        if (sscanf(ev, "%2s %31s", type, name) == 2) {
          kbd->keydown = (strcmp(type, "kd") == 0);
          kbd->keycode = parse_key(name);
        }
      }
      break;
    }
    case AM_GPU_CONFIG: {
      AM_GPU_CONFIG_T *cfg = buf;
      cfg->present = true;
      cfg->has_accel = false;
      cfg->width = screen_w;
      cfg->height = screen_h;
      cfg->vmemsz = screen_w * screen_h * (int)sizeof(uint32_t);
      break;
    }
    case AM_GPU_STATUS: {
      AM_GPU_STATUS_T *status = buf;
      status->ready = true;
      break;
    }
    case AM_AUDIO_CONFIG: {
      AM_AUDIO_CONFIG_T *cfg = buf;
      cfg->present = false;
      cfg->bufsize = 0;
      break;
    }
    case AM_AUDIO_STATUS: {
      AM_AUDIO_STATUS_T *status = buf;
      status->count = 0;
      break;
    }
    case AM_DISK_CONFIG: {
      AM_DISK_CONFIG_T *cfg = buf;
      cfg->present = false;
      cfg->blksz = 0;
      cfg->blkcnt = 0;
      break;
    }
    case AM_DISK_STATUS: {
      AM_DISK_STATUS_T *status = buf;
      status->ready = false;
      break;
    }
    case AM_NET_CONFIG: {
      AM_NET_CONFIG_T *cfg = buf;
      cfg->present = false;
      break;
    }
    case AM_NET_STATUS: {
      AM_NET_STATUS_T *status = buf;
      status->rx_len = 0;
      status->tx_len = 0;
      break;
    }
    default:
      break;
  }
}

void ioe_write(int reg, void *buf) {
  ensure_ioe_init();

  switch (reg) {
    case AM_UART_TX: {
      AM_UART_TX_T *tx = buf;
      putch(tx->data);
      break;
    }
    case AM_GPU_FBDRAW: {
      AM_GPU_FBDRAW_T *ctl = buf;
      if (ctl->pixels && ctl->w > 0 && ctl->h > 0) {
        NDL_DrawRect((uint32_t *)ctl->pixels, ctl->x, ctl->y, ctl->w, ctl->h);
      }
      break;
    }
    default:
      break;
  }
}
