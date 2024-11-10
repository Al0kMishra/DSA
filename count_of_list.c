#include<stdio.h>
#include<stdlib.h>

struct node 
{
    int data;
    struct node *link;
};


void createlist(int size,struct node *head);
void displaylist(struct node* head);

int main()
{
    int n;
    struct node*head;
    printf("Enter the number of nodes you want");
    scanf("%d",&n);
    head=(struct node*)malloc(sizeof(struct node));
    printf("Enter the data in head");
    scanf("%d",&head->data);
    head->link=NULL;
    createlist(n,head);

    printf("The values of list are\n");
    displaylist(head);

}



void createlist(int size,struct node *head){
    struct node *ptr,*newnode;
    ptr=head;
    for(int i=2;i<=size;i++)
    {
        newnode=(struct node*)malloc(sizeof(struct node));
        printf("Enter the values in %d node",i);
        scanf("%d",&newnode->data);
        newnode->link=NULL;
        ptr->link=newnode;
        ptr = newnode;

    }
    
}

void displaylist(struct node * head)
{
    int count=0;
    struct node *ptr;
    ptr=head;
    while(ptr!=NULL)
    {
       count=count+1;
      ptr=ptr->link;
    }
    printf("The count of list is %d",count);
   
   
}