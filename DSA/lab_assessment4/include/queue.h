typedef struct Queue
{
    int capacity;
    int front;
    int rear;
    int *array;
} queue;

int createqueue(queue *q, int size);
int enqueue(queue *q, int data);
int dequeue(queue *q);
void isempty(queue *q);