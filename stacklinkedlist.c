#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *link;
    
};
struct node *top=0;

void push(int x);
void display();
void peek();
void pop();



int main()
{

    push(2);
    push(3);
    push(10);
    display();
    peek();
    pop();
}



void push(int x)
{
    struct node *newnode=(struct node*)malloc(sizeof(struct node));
    newnode->data=x;
    newnode->link=top;
    top=newnode;
}

void display()
{
    struct node *ptr;
    ptr=top;
    if(top==0)
    {
        printf("List is empty");
    }
    while(ptr->link!=NULL)
    {
        printf("%d\n",ptr->data);
        ptr=ptr->link;
    }
}

void peek()
{
    if(top==NULL)
    {
        printf("Stack is empty");
    }
    else
    {
        printf("Top element is %d\n",top->data);
    }

}

void pop()
{
    struct node *ptr=top;
    struct node *temp;
  


    if(top==NULL)
    {
        printf("Underflow");

    }
    else
    {
        
        temp=ptr;
        printf("Popped element is %d\n",ptr->data);
        ptr=ptr->link;
        free(temp);
    }
    
}