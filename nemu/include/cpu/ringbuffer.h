#ifndef __RINGBUFFER_H__
#define __RINGBUFFER_H__

#include "common.h"

typedef struct {
    int *buffer;  // 缓冲区数组
    int head;     // 读取位置
    int tail;     // 写入位置
    int size;     // 缓冲区容量
} CircularBuffer;

void initBuffer(CircularBuffer *cb, int size);

bool isEmpty(CircularBuffer *cb);

bool isFull(CircularBuffer *cb);

bool enqueue(CircularBuffer *cb, int value);

bool dequeue(CircularBuffer *cb, int *value);

void printBuffer(CircularBuffer *cb);

void freeBuffer(CircularBuffer *cb);

#endif