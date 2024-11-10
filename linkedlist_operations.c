#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *link;
};



void createlist(int size,struct node *head);
void display(struct node *head);
void addatbeginning(struct node*head);
void addatend(int n,struct node *head);
void addafter(struct node *head);
void addbefore(struct node *head);
void deletebeginning(struct node *head);
void deleteend(struct node *head);
void deletegivennode(struct node *head);
void deleteafter(struct node *head);
void deleteentirelist(struct node *head);
void reverselist(struct node *head);
void middleelement(struct node *head);
void countinlist(struct node *head);
int main()
{
    

    int n;
    printf("Enter the number of nodes");
    scanf("%d",&n);
    struct node *head;
    head=(struct node*)malloc(sizeof(struct node));
    printf("Enter the data in head\n ");
    scanf("%d",&head->data);
    head->link=NULL;
    createlist(n,head);

    printf("Enter your choice");
    int choice;
    scanf("%d",&choice);

    
    
    
    
    
    
    
    
    
    switch (choice)
    {
    case(1):
        printf("You have already created a list\nTHANK YOU  !!");
        break;
    case(2):
            display(head);
        break;
    case(3):
        addatbeginning(head);
        break;
    case(4):
        addatend(n,head);
        break;
    case(5):
        addbefore(head);
        break;
    case(6):
        addafter(head);
        break;
    case(7):
        deletebeginning(head);
        break;
    case(8):
        deleteend(head);
        break;
    case(9):
        deletegivennode(head);
        break;
    case(10):
        deleteafter(head);
        break;
    case(11):
        deleteentirelist(head);
        break;
    case(12):
        reverselist(head);
        break;
    case(13):
        middleelement(head);
        break;
    case(14):
        countinlist(head);
        break;
    default:
        printf("You Entered wrong choice");
        break;
    }
    return 0;
}








void createlist(int size,struct node*head)
{
    
    struct node *ptr,*newnode;
    ptr=head;
    for(int i=2;i<=size;i++)
    {
        newnode=(struct node*)malloc(sizeof(struct node));
        printf("Enter the value of node %d\n",i);
        scanf("%d",&newnode->data);
        newnode->link=NULL;
        ptr->link=newnode;
        ptr=newnode;
    }

}


void display(struct node*head)
{
    struct node *ptr;
    ptr=head;
    while(ptr!=NULL)
    {
        printf("%d\n",ptr->data);
        ptr=ptr->link;
    }
}


void addatbeginning(struct node*head)
{
    struct node *ptr,*newnode;
    if (newnode==NULL)
    printf("Unable to allocate memory");

    else
    ptr=head;
    newnode=(struct node*)malloc(sizeof(struct node));
    printf("Enter the value of new node");
    scanf("%d",&newnode->data);
    newnode->link=ptr;
    head=newnode;
    display(head);
}


void addatend(int size,struct node *head)
{
   
    struct node *ptr,*newnode;
    ptr=head;
    newnode=(struct node*)malloc(sizeof(struct node));
   
    printf("Enter the value of newnode");
    scanf("%d", &newnode->data);
    newnode->link=NULL;
    while(ptr->link!= NULL)
    {
        ptr=ptr->link;
    }
    ptr->link=newnode;
    display(head);

}



void addafter(struct node *head)
{
    int position;
    printf("Enter a position after which you want to add node\n");
    scanf("%d",&position);
    
    struct node *ptr,*newnode;
    ptr=head;
    newnode=(struct node*)malloc(sizeof(struct node));
    newnode->link=NULL;
    printf("Enter the data in node");
    scanf("%d",&newnode->data);
    int i=0;
    while(i!=position)
    {
        ptr=ptr->link;
        i++;
    }
    newnode->link=ptr->link;
    ptr->link=newnode;
    display(head);

}


void addbefore(struct node *head)
{
    int position;
    printf("Enter the position before which you want to delete a node");
    scanf("%d",&position);

    struct node *ptr,*newnode;
    ptr=head;
    newnode=(struct node*)malloc(sizeof(struct node));
    printf("Enter the value at node");
    scanf("%d",&newnode->data);
    newnode->link=NULL;
    int i =0;
    position=position-1;
    while(i<position)
    {
        ptr=ptr->link;
        i++;
    }
    newnode->link=ptr->link;
    ptr->link=newnode;
    display(head);
 }



 void deletebeginning(struct node *head)
 {
    struct node *ptr;
    ptr=head;
    head=ptr->link;
    ptr->link=NULL;
    free(ptr);
    display(head);
 }
 
 void deleteend(struct node *head)
 {
    struct node *ptr,*temp;
    ptr=head;
    while(ptr->link!=NULL)
    {
        temp=ptr;
        ptr=ptr->link;
    }
    temp->link=NULL;
    free(ptr);
    display(head);
   
 }



void deletegivennode(struct node *head)
{
    int position;
    printf("Enter the node no you want to delete ");
    scanf("%d",&position);
    
    struct node *ptr,*temp;
    ptr=head;
    int i=0;
    while(i!=position)
    {
        temp=ptr;
        ptr=ptr->link;
        i++;
    }
    temp->link=ptr->link;
    ptr->link=NULL;
    free(ptr);
    display(head);

}



void deleteafter(struct node *head)
{
    struct node *ptr,*temp;
    ptr=head;
    int position;
    printf("Enter a position after which you want to delete a node\n");
    scanf("%d",&position);

    int i=0;
    position=position+1;
    while(i<position)
    {
        temp=ptr;
        ptr=ptr->link;
        i++;
    }
    temp->link=ptr->link;
    ptr->link=NULL;
    free(ptr);
    display(head);
}


void deleteentirelist(struct node *head)
{
    struct node *ptr,*temp;
    ptr=head;
    while(ptr->link!=NULL)
    {
        temp=ptr;
        ptr=ptr->link;
        temp->link=NULL;
        free(temp);
    }
    display(head);

}

void reverselist(struct node *head)
{
    struct node *ptr;
    ptr=head;
    if(ptr)
    { 
    reverselist(ptr->link);
    printf("%d ",ptr->data);
    }
}

void middleelement(struct node *head)
{
    struct node *ptr,*temp;
    ptr=head;
    temp=head;
    int count=0;
    while(ptr->link!=NULL)
    {
        ptr=ptr->link;
        count++;
    }
    if(count%2==0)
    {
        count=(count+1)%2;
    }
    else
    {
        count=count%2;
    }
    for(int i=0;i<=count;i++)
    {
        temp=temp->link;
    }
    printf("The value of middle element is %d",temp->data);
}


void countinlist(struct node *head)
{
    struct node *ptr;
    ptr=head;
    int count=0;
    while(ptr->link!=NULL)
    {
        ptr=ptr->link;
        count++;
    }
    printf("The count of list is %d",count);
}
