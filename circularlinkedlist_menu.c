#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
};

void creation(int n,struct node *head);
void display(struct node *head);
void addnodebeginning(struct node *head);

int main()
{
    int n;
    printf("Enter the number of nodes you want\n");
    scanf("%d",&n);
    struct node *head;
    head=(struct node*)malloc(sizeof(struct node));
    printf("Enter the data of head");
    scanf("%d",&head->data);
    head->next=NULL;

    creation(n,head);
    

    
    
    printf("Enter your choice\n");
    int choice;
    scanf("%d",&choice);
    switch(choice)
    {
        case(1):
        printf("YOU HAVE CREATED ALREADY");
        break;
        case(2):
        display(head);
        break;
        case(3):
        addnodebeginning(head);
        break;
        case(4):
        break;
        case(5):
        break;
        case(6):
        break;
        case(7):
        break;
        case(8):
        break;

    }



}



void creation(int n,struct node *head)
{
    struct node *newnode,*ptr;
    ptr=head;
    
    for(int i=2;i<=n;i++)
    {
        newnode=(struct node*)malloc(sizeof(struct node));
        printf("Enter the value of node%d ",i);
        scanf("%d",&newnode->data);
        newnode->next=NULL;
        ptr->next=newnode;
        ptr=newnode;
       
    }
    ptr->next=head;
    display(head);

}



void display(struct node *head)
{
    struct node *ptr;
    ptr=head;
    ptr=ptr->next;
    while(ptr->next!=head)
    {
       
        printf("%d\n",ptr->data);
        ptr=ptr->next;
       
    }
}



void addnodebeginning(struct node *head)
{
    struct node *ptr,*newnode;
    ptr=head;
    newnode=(struct node*)malloc(sizeof(struct node));
    printf("Enter the data of newnode");
    scanf("%d",&newnode->data);
    while(ptr->next!=head)
    {
        ptr=ptr->next;
    }
    newnode->next=ptr;
    head=newnode;

    display(head);


}