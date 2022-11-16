#include "stdio.h"
#include "stdlib.h"
#include "include/queue.h"

int createqueue(queue *q, int size)
{
    if (size < 1)
    {
        printf("Queue size is too small!!\n");
        return -1;
    }
    q->front = -1;
    q->rear = -1;
    q->capacity = size;
    q->array = (int *)malloc(sizeof(int) * size);
}

int enqueue(queue *q, int data)
{
    if (q->rear == q->capacity - 1)
    {
        printf("overflow\n");
        return -1;
    }
    if (q->front == -1 && q->rear == -1)
    {
        q->front++;
        q->rear++;
        *(q->array + q->rear) = data;
        return 0;
    }
    q->rear++;
    *(q->array + q->rear) = data;
}

int dequeue(queue *q)
{
    if (q->front == -1 && q->rear == -1)
    {
        printf("The queue is empty!!\n");
        return -1;
    }
    else if (q->front == q->rear)
    {
        int data = *(q->array + q->front);
        q->front = -1;
        q->rear = -1;
        return data;
    }
    int data = *(q->array + q->front);
    q->front++;
    return data;
}

void isempty(queue *q)
{
    if (q->front == -1 && q->rear == -1)
    {
        printf("The queue is empty");
    }
}