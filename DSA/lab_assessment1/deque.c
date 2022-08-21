#include "stdio.h"

typedef struct
{
    int deque[200];
    int front;
    int rear;
    int size;
} Deque;

int new (Deque *deque, int size)
{
    deque->front = -1;
    deque->rear = -1;
    deque->size = size;
}

int enqueue_rear(Deque *deque, int val)
{
    if ((deque->front == 0 && deque->rear == deque->size - 1) || deque->front == deque->rear + 1)
    {
        printf("Deque Overflow");
    }
    if (deque->front == -1 && deque->rear == -1)
    {
        deque->front = 0;
        deque->rear = 0;
        deque->deque[deque->rear] = val;
        return 0;
    }
    else if (deque->rear == deque->size - 1 && deque->front != 0)
    {
        deque->rear = 0;
        deque->deque[deque->rear] = val;
        return 0;
    }
    deque->rear++;
    deque->deque[deque->rear] = val;
}

int enqueue_front(Deque *deque, int val)
{
    if ((deque->front == 0 && deque->rear == deque->size - 1) || deque->front == deque->rear + 1)
    {
        printf("Deque Overflow");
    }
    if (deque->front == -1 && deque->rear == -1)
    {
        deque->front = 0;
        deque->rear = 0;
        deque->deque[deque->rear] = val;
        return 0;
    }
    else if (deque->rear != deque->size - 1 && deque->front == 0)
    {
        deque->front = deque->size - 1;
        deque->deque[deque->front] = val;
        return 0;
    }
    deque->front--;
    deque->deque[deque->front] = val;
}

int deque_front(Deque *deque)
{
    if (deque->front == deque->rear)
    {
        if (deque->front == -1)
        {
            printf("Deque Underflow");
            return 0;
        }
        printf("%d\n", deque->deque[deque->front]);
        deque->front = -1;
        deque->rear = -1;
        return 0;
    }
    else if (deque->front == deque->rear - 1)
    {
        printf("%d\n", deque->deque[deque->front]);
        deque->front = 0;
        return 0;
    }
    printf("%d\n", deque->deque[deque->front]);
    deque->front++;
}
int deque_rear(Deque *deque)
{
    if (deque->front == deque->rear)
    {
        if (deque->front == -1)
        {
            printf("Deque Underflow");
            return 0;
        }
        printf("%d\n", deque->deque[deque->rear]);
        deque->front = -1;
        deque->rear = -1;
        return 0;
    }
    else if (deque->rear == 0)
    {
        printf("%d\n", deque->deque[deque->rear]);
        deque->rear = deque->size - 1;
        return 0;
    }
    printf("%d\n", deque->deque[deque->rear]);
    deque->rear--;
}
int display(Deque *deque){
    printf("\n");
    for(int i=0;i<=deque->rear;i++){
        printf("%d ",deque->deque[i]);
    }
    printf("\n");
}
int main()
{
    Deque deque;
    new(&deque, 37);
    enqueue_rear(&deque, 34);
    deque_front(&deque);
    enqueue_front(&deque, 35);
    enqueue_rear(&deque, 36);
    enqueue_rear(&deque, 37);
    display(&deque);
}
