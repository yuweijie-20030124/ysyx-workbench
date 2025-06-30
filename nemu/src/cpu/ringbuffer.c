#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
 
// 定义环形缓冲区结构体
typedef struct {
    int *buffer;  // 缓冲区数组
    int head;     // 读取位置
    int tail;     // 写入位置
    int size;     // 缓冲区容量
} CircularBuffer;
 
// 初始化环形缓冲区
void initBuffer(CircularBuffer *cb, int size) {
    cb->buffer = (int *)malloc(size * sizeof(int));
    cb->size = size;
    cb->head = 0;
    cb->tail = 0;
}
 
// 判断缓冲区是否为空
bool isEmpty(CircularBuffer *cb) {
    return cb->head == cb->tail;
}
 
// 判断缓冲区是否已满
bool isFull(CircularBuffer *cb) {
    return (cb->tail + 1) % cb->size == cb->head;
}
 
// 向缓冲区写入数据
bool enqueue(CircularBuffer *cb, int value) {
    if (isFull(cb)) {
        printf("缓冲区已满，无法写入 %d\n", value);
        return false;
    }
    cb->buffer[cb->tail] = value;
    cb->tail = (cb->tail + 1) % cb->size; // 循环移动 tail 指针
    return true;
}
 
// 从缓冲区读取数据
bool dequeue(CircularBuffer *cb, int *value) {
    if (isEmpty(cb)) {
        printf("缓冲区为空，无法读取数据\n");
        return false;
    }
    *value = cb->buffer[cb->head];
    cb->head = (cb->head + 1) % cb->size; // 循环移动 head 指针
    return true;
}
 
// 打印缓冲区内容
void printBuffer(CircularBuffer *cb) {
    if (isEmpty(cb)) {
        printf("缓冲区为空\n");
        return;
    }
    printf("缓冲区内容: ");
    int i = cb->head;
    while (i != cb->tail) {
        printf("%d ", cb->buffer[i]);
        i = (i + 1) % cb->size;
    }
    printf("\n");
}
 
// 释放缓冲区
void freeBuffer(CircularBuffer *cb) {
    free(cb->buffer);
}
