#include "stdio.h"

typedef struct
{
    int queue[200];
    int front;
    int rear;
} Queue;

int new (Queue *queue)
{
    queue->front = -1;
    queue->rear = -1;
}

int enqueue(Queue *queue, int val)
{
    if (queue->front > queue->rear)
    {
        printf("Queue Overflow");
    }
    if (queue->front == -1 && queue->rear == -1)
    {
        queue->front = 0;
        queue->rear = 0;
        queue->queue[queue->rear] = val;
        return 0;
    }
    queue->rear++;
    queue->queue[queue->rear] = val;
}

int dequeue(Queue *queue)
{
    if (queue->front == queue->rear)
    {
        if (queue->front == -1)
        {
            printf("Queue Underflow");
            return 0;
        }
        printf("%d\n", queue->queue[queue->front]);
        queue->front = -1;
        queue->rear = -1;
        return 0;
    }
    printf("%d\n", queue->queue[queue->front]);
    queue->front++;
}

int display(Queue *queue)
{
    for (int i = queue->front; i <= queue->rear; i++)
    {
        printf("%d ", queue->queue[i]);
    }
    printf("\n");
}

int main()
{

    Queue queue;
    int choice;
    int val;
    new (&queue);
    do
    {
        printf("1. For insert\n");
        printf("2. For delete\n");
        printf("3. For display\n");
        printf("4. For exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            printf("Enter value to insert: ");
            scanf("%d", &val);
            enqueue(&queue, val);
            break;
        case 2:
            dequeue(&queue);
            break;
        case 3:
            display(&queue);
            break;
        case 4:
            break;
        default:
            printf("Invalid command");
        }
    } while (choice != 4);
}