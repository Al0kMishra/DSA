#include<stdio.h>
#include<stdlib.h>
struct node
{
    struct node *previous;
    int data;
    struct node *next;
};

void creation(int n,struct node *head);
void display(struct node *head);
void insertionbeginning(struct node *head);
void insertionend(struct node *head);
void insertionbefore(struct node *head);
void insertionafter(struct node *head);
void deletionbeginning(struct node *head);
void deletionend(struct node *head);
void reverse(struct node *head);

int main()
{
    int n;
    printf("Enter the number of nodes you want ");
    scanf("%d",&n);
    struct node *head;
    head=(struct node*)malloc(sizeof(struct node));
    printf("Enter the value of head  ");
    scanf("%d",&head->data);
    head->previous=NULL;
    head->next=NULL;


    creation(n,head);
    display(head);



    int choice;
    printf("Enter your choice");
    scanf("%d",&choice);


    switch(choice)
    {
        case(1):
        insertionbeginning(head);
        break;
        case(2):
        insertionend(head);
        break;
        case(3):
        insertionbefore(head);
        break;
        case(4):
        insertionafter(head);
        break;
        case(5):
        deletionbeginning(head);
        break;
        case(6):
        deletionend(head);
        break;
        case(7):
        reverse(head);
        break;
    }
}

void creation(int n,struct node *head)
{
    struct node *ptr,*newnode;
    ptr=head;
    for(int i=2;i<=n;i++)
    {
        newnode=(struct node*)malloc(sizeof(struct node));
        printf("Enter the data of node %d  ",i);
        scanf("%d",&newnode->data);
        newnode->next=NULL;
        ptr->next=newnode;
        newnode->previous=ptr;
        ptr->previous=NULL;
        ptr=newnode;

    }
   

}


void display(struct node *head)
{
    struct node *ptr;
    ptr=head;
    while(ptr!=NULL)
    {
        printf("%d\n",ptr->data);
        ptr=ptr->next;
    }
}



void insertionbeginning(struct node *head)
{
    struct node *ptr,*newnode;
    ptr=head;
    newnode=(struct node*)malloc(sizeof(struct node));
    printf("Enter data of new node");
    scanf("%d",&newnode->data);
    newnode->next=ptr->next;
    ptr->next=newnode;
    ptr->previous=newnode;
    newnode->previous=NULL;
    head=newnode;

    display(head);

}

void insertionend(struct node *head)
{
    struct node *ptr,*newnode;
    ptr=head;
    newnode=(struct node*)malloc(sizeof(struct node));
    printf("Enter data of new node");
    scanf("%d",&newnode->data);
    newnode->next=NULL;
    while(ptr->next!=NULL)
    {
        ptr=ptr->next;
    }
   
    ptr->next=newnode;
    newnode->previous=ptr;

    display(head);
}



void insertionbefore(struct node *head)
{
    struct node *ptr,*temp,*newnode;
    ptr=head;
    temp=head;
    int position;
    printf("Enter the position before you want to insert");
    scanf("%d",&position);
    newnode=(struct node*)malloc(sizeof(struct node));
    printf("Enter data of new node");
    scanf("%d",&newnode->data);
    newnode->next=NULL;
    newnode->previous=NULL;
    for(int i=0;i<position;i++)
    {
        temp=ptr;
        ptr=ptr->next;
    }
    
   newnode->next=temp->next;
   temp->next=newnode;
   ptr->previous=newnode;
   newnode->previous=temp;

   display(head);
   
}




void insertionafter(struct node *head)
{
    struct node *ptr,*temp,*newnode;
    ptr=head;
    temp=head;
    int position;
    printf("Enter the position after you want to insert");
    scanf("%d",&position);
    newnode=(struct node*)malloc(sizeof(struct node));
    printf("Enter data of new node");
    scanf("%d",&newnode->data);
    newnode->next=NULL;
    newnode->previous=NULL;
    for(int i=0;i<position;i++)
    {
        
        ptr=ptr->next;
    }
    temp=ptr->next;
  

   newnode->next=ptr->next;
   ptr->next=newnode;
   temp->previous=newnode;
   newnode->previous=ptr;
   

   display(head);
   
}


void deletionbeginning(struct node *head)
{
    struct node *ptr,*temp;
    ptr=head;
    temp=head;
    temp=ptr->next;
    ptr->next=NULL;
    temp->previous=NULL;
    head=temp;
    free(ptr);

    display(head);


}


void deletionend(struct node *head)
{
    struct node *ptr,*temp;
    ptr=head;
    temp=head;
    while(ptr->next!=NULL)
    {
        temp=ptr;
        ptr=ptr->next;
    }
    temp->next=NULL;
    ptr->previous=NULL;
    free(ptr);

    display(head);
}



void reverse(struct node *head)
{
    struct node *ptr;
    ptr=head;
}
