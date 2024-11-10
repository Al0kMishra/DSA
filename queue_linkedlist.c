#include<stdio.h>
#include<stdlib.h>

struct node 
{
    int data;
    struct node *next;
};

struct  node *f=NULL;
struct  node *r=NULL;

void linkedlisttraversal(struct node *f);
void enqueue(int value);

int main()
{
    
    enqueue(34);
    enqueue(343);
    enqueue(3);
    enqueue(314);
    linkedlisttraversal(f);
}




void linkedlisttraversal(struct node *f)
{
    struct node *ptr=f;
    while(ptr!=NULL)
    {
        printf("Element id %d\n",ptr->data);
        ptr=ptr->next;
    }
}



void enqueue(int value)
{
    struct node *n=(struct node*)malloc(sizeof(struct node));
    if(n==NULL)
    {
        printf("Queue is full");

    }
    else{
        n->data=value;
        n->next=NULL;
        if(f==NULL)
        {

            f=r=n;
        }
        else
        {
            r->next=n;
            r=n;
        }
    }
}