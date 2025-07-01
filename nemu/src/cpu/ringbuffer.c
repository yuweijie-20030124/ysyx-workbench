#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#define IRINGBUF_SIZE 16
#define LOGBUF_SIZE 128

// 定义环形缓冲区结构体
typedef struct {
    char buffer[IRINGBUF_SIZE][LOGBUF_SIZE]; // 每条指令一个字符串
    int head;
    int count;
} CircularBuffer;
 
void initBuffer(CircularBuffer *cb){
    //strcpy(cb->buffer , (char *)malloc(sizeof(char) * IRINGBUF_SIZE * LOGBUF_SIZE));
    cb->head = 0;
    cb->count = 0;
}

void enqueue(CircularBuffer *cb, const char *logbuf)
{
    //cb->buffer[cb->head] = logbuf; // 将指令的值写入环形缓冲区
    cb -> head ++;
    strcpy(cb->buffer[cb->head] , logbuf);


}

void printBuffer(CircularBuffer *cb)
{
    //printf();
}

/*
// 初始化环形缓冲区
void initBuffer(CircularBuffer *cb, int size) {
    cb->buffer = (char *)malloc(size * sizeof(char));
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
bool enqueue(CircularBuffer *cb, char value) {
    if (isFull(cb)) {
        printf("缓冲区已满，无法写入 %s\n", value);
        return false;
    }
    cb->buffer[cb->tail] = value;
    cb->tail = (cb->tail + 1) % cb->size; // 循环移动 tail 指针
    return true;
}
 
// 从缓冲区读取数据
bool dequeue(CircularBuffer *cb, char *value) {
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
        printf("%s ", cb->buffer[i]);
        i = (i + 1) % cb->size;
    }
    printf("\n");
}
 
// 释放缓冲区
void freeBuffer(CircularBuffer *cb) {
    free(cb->buffer);
}
*/
