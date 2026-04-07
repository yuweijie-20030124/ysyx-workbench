#include <stdint.h>
#include <assert.h>
#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/time.h>
#include <unistd.h>

static int evtdev = -1;
static int fbdev = -1;
static int screen_w = 0, screen_h = 0;
static int canvas_w = 0, canvas_h = 0;
static int canvas_x = 0, canvas_y = 0;

uint32_t NDL_GetTicks() {
  struct timeval tv = {};
  gettimeofday(&tv, NULL);
  return (uint32_t)(tv.tv_sec * 1000 + tv.tv_usec / 1000);
}

int NDL_PollEvent(char *buf, int len) {
  if (evtdev < 0) {
    return 0;
  }
  int nread = read(evtdev, buf, len);
  return nread > 0 ? 1 : 0;
}

void NDL_OpenCanvas(int *w, int *h) {
  if (screen_w == 0 || screen_h == 0) {
    int fd = open("/proc/dispinfo", 0);
    assert(fd >= 0);
    char buf[64] = {};
    int nread = read(fd, buf, sizeof(buf) - 1);
    close(fd);
    assert(nread > 0);
    buf[nread] = '\0';
    assert(sscanf(buf, "WIDTH%*[^0-9]%d%*[^0-9]%d", &screen_w, &screen_h) == 2);
  }

  if (*w == 0 && *h == 0) {
    *w = screen_w;
    *h = screen_h;
  }

  assert(*w <= screen_w && *h <= screen_h);
  canvas_w = *w;
  canvas_h = *h;
  canvas_x = (screen_w - canvas_w) / 2;
  canvas_y = (screen_h - canvas_h) / 2;

  if (getenv("NWM_APP")) {
    int fbctl = 4;
    fbdev = 5;
    screen_w = *w; screen_h = *h;
    char buf[64];
    int len = sprintf(buf, "%d %d", screen_w, screen_h);
    // let NWM resize the window and create the frame buffer
    write(fbctl, buf, len);
    while (1) {
      // 3 = evtdev
      int nread = read(3, buf, sizeof(buf) - 1);
      if (nread <= 0) continue;
      buf[nread] = '\0';
      if (strcmp(buf, "mmap ok") == 0) break;
    }
    close(fbctl);
  }
}

void NDL_DrawRect(uint32_t *pixels, int x, int y, int w, int h) {
  for (int i = 0; i < h; i++) {
    off_t offset = ((canvas_y + y + i) * screen_w + canvas_x + x) * sizeof(uint32_t);
    lseek(fbdev, offset, SEEK_SET);
    write(fbdev, pixels + i * w, w * sizeof(uint32_t));
  }
}

void NDL_OpenAudio(int freq, int channels, int samples) {
}

void NDL_CloseAudio() {
}

int NDL_PlayAudio(void *buf, int len) {
  return 0;
}

int NDL_QueryAudio() {
  return 0;
}

int NDL_Init(uint32_t flags) {
  (void)flags;
  evtdev = open("/dev/events", 0);
  fbdev = open("/dev/fb", 0);
  if (getenv("NWM_APP")) {
    evtdev = 3;
  }
  return 0;
}

void NDL_Quit() {
  if (evtdev >= 0 && !getenv("NWM_APP")) {
    close(evtdev);
  }
  if (fbdev >= 0 && !getenv("NWM_APP")) {
    close(fbdev);
  }
}
