#include<stdio.h>
#include<stdlib.h>

struct queue
{
    int size;
    int f;
    int r;
    int *arr;
};

void enqueue(struct queue *q,int value);
int dequeue(struct queue *q);

int main()
{
    struct queue q;
    q.size=10;
    q.f=q.r=-1;
    q.arr=(int*)malloc(q.size*sizeof(int));

    enqueue(&q,12);
    printf("Dequeue element is %d",dequeue(&q));
}

void enqueue(struct queue *q,int value)
{
    q->r++;
    q->arr[q->r]=value;
}

int dequeue(struct queue *q)
{
    int a = -1;
    q->f++;
    return q->arr[q->f];
}