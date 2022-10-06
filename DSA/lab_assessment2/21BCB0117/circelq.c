#include <stdio.h>
#include <stdlib.h>
#define size 100

int circleq[size],rear=-1,front=-1;

int is_full()
{
    return front==(rear+1)%size?1:0;
}

int is_empty()
{
    return front==-1?1:0;
}

void enqueue(int x)
{
    if(is_full())
    {
        printf("Queue overflow!!!");
    }
    else
    {
        rear=(rear+1)%size;
        circleq[rear]=x;
        if(front==-1)
        {
            front=0;
        }
    }
}

void dequeue()
{
    int x;
    if(is_empty())
    {
        printf("Queue underflow!!!");
    }
    else
    {
        if(front==rear)
        {
            x=circleq[front];
            front=-1;
            rear=-1;
        }
        else if(front==size-1)
        {
            x=circleq[front];
            front=0;
        }
        else
        {
            x=circleq[front];
            front=(front+1)%size;
        }
        printf("The deleted element is %d",x);
    }
}

void display()
{
    if(is_empty())
    {
        printf("Queue underflow!!!\nFirst enter some elements to display");
    }
    else
    {
        int a=front>rear?front:rear;
        int b=front<rear?front:rear;
        for(int i=b;i<=a;i++)
        {
            printf("%d\t",circleq[i]);
        }
    }
}

int main()
{
    int n,x=1;

    while(x)
    {
        printf("What do you want to do?\n");
        printf("1. Enqueue element\n");
        printf("2. Dequeue element\n");
        printf("3. Display the elements on the queue\n");
        printf("4. Exit\n");

        printf("Enter your choice(1-4):");
        scanf("%d",&n);

        switch(n)
        {
        case 1:
            printf("Enter an integer you want to enter:");
            scanf("%d",&n);
            enqueue(n);
            break;
        case 2:
            dequeue();
            break;
        case 3:
            display();
            break;
        case 4:
            x=0;
            break;
        default:
            printf("Wrong choice!!!\nEnter correct choice:");
        }
        printf("\n\n");
    }

    return 0;
}