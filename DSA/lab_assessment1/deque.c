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
        return 0;
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
        if (deque->rear == -1)
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
    printf("Meow");
}
int display(Deque *deque){
    printf("\n");
    for(int i=deque->front;i<=deque->rear;i++){
        printf("%d ",deque->deque[i]);
    }
    printf("\n");
}
int main()
{
    Deque deque;
    int val,choice;
    new(&deque, 37);
    do
    {
        printf("1. For enque rear\n");
        printf("2. For enque front\n");
        printf("3. For deque front\n");
        printf("4. For deque rear\n");
        printf("5. For display\n");
        printf("6. For exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            printf("Enter value to insert at rear: ");
            scanf("%d", &val);
            enqueue_rear(&deque, val);
            break;
        case 2:
            printf("Enter value to insert at front: ");
            scanf("%d", &val);
            enqueue_front(&deque, val);
            break;
        case 3:
            deque_front(&deque);
            break;
        case 4:
            deque_rear(&deque);
            break;
        case 5:
             display(&deque);
            break;
        case 6:
            break;
        default:
            printf("Invalid command");
        }
    } while (choice != 6);
   
}
