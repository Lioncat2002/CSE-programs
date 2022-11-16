#include "stdio.h"
#include "stdlib.h"
char vertices[6] = {'A', 'B', 'C', 'D', 'E', 'F'};
int adj_mat[36] = {
 // A  B  C  D  E  F
    0, 1, 1, 1, 0, 0, // A
    1, 0, 1, 0, 1, 0, // B
    1, 1, 0, 0, 0, 0, // C
    1, 0, 0, 0, 1, 1, // D
    0, 1, 0, 1, 0, 0, // E
    0, 0, 0, 1, 0, 0, // F
};
typedef struct Queue
{
    int capacity;
    int front;
    int rear;
    int *array;
} queue;
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

int isempty(queue *q)
{
    return (q->front == -1 && q->rear == -1);
}
int solve(int root)
{
    int visited[6] = {0};
    queue q;
    createqueue(&q, 7);
    int i;
    int j;
    int count = 0;
    enqueue(&q, root);
    rear++;
    while (!isempty(&q))
    {
        i = dequeue(&q);
        printf("%c ", vertices[i]);
        if (visited[i] == 0)
        {
            visited[i] = 1;
            count++;
            for (j = 0; j < 6; j++)
            {
                if (adj_mat[i * 6 + j] == 1 && visited[j] == 0)
                {
                    enqueue(&q, j);
                }
            }
        }
    }
    return count;
}

int main()
{

    int count = solve(4);
    printf("\n%d\n", count);
}