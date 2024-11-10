#include<stdio.h>
#include<stdlib.h>
#define size 4
int arr[size];
int top=-1;


void push();
void display();
void pop();
void peek();

int main()
{
    int choice;
    printf("Ebter your choice ");
    scanf("%d",&choice);
   
    switch (choice)
    {
    case(1):
        push();
        break;
        case(2):
        pop();
        break;
        case(3):
        peek();
        break;
        case(4):
        break;
        default:
    printf("You entered wrong choice");
        break;
    }
}


void push()
{
    int value;
    for(int i=0;i<size;i++)
    {
        printf("Enter the value of %d  ",i);
        scanf("%d",&value);
        
    }
    if(top==size-1)
    {
        printf("Stack overflow");

    }

    else
    {
        top=top+1;
        arr[top]=value;
    
    }
    display();
}

void display()
{
    for(int i=0;i<=top;i++)
    {
        printf("Elements of stack are %d=%d\n",i,arr[i]);
    }
}

void pop()
{
    int popped;
    if(top==-1)
    {
        printf("Underdlow");

    }
    else
    {
        popped=arr[top];
        top--; 
    }
    printf("Popped item is %d",popped);
}

void peek()                     //check the top element of stack
{
    if(top==-1)
    {
        printf("Stack is empty");

    }
    else
    {
        printf("Top most elemnt if %d",arr[top]);
    }
}

