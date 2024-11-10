  #include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *link;
};

void insertionbeginning (struct node *head);
void creation(int n,struct node *head);
void display(struct node *head);
int main()
{
    int n;
    printf("Enter the number of nodes");
    scanf("%d",&n);

    struct node *head;
    head=(struct node*)malloc(sizeof(struct node));
    printf("Enter the value of head");
    scanf("%d",&head->data);
    head->link=NULL;

    creation(n,head);
    insertionbeginning(head);
    return 0;
}




void creation(int n,struct node *head)
{
    struct node *ptr,*newnode;
    ptr=head;
    for(int i=2;i<=n;i++)
    {
        newnode=(struct node*)malloc(sizeof(struct node));
        printf("Enter the data of the node%d\n",i);
        scanf("%d",&newnode->data);
        newnode->link=NULL;
        ptr->link=newnode;
        ptr=newnode;
    }
}

void insertionbeginning (struct node *head)
{
    struct node *ptr,*newnode;
    ptr=head;
    newnode=(struct node*)malloc(sizeof(struct node));
    printf("Enter the dta of new node\n");
    scanf("%d",&newnode->data);
    newnode->link=ptr;
    head=newnode;
    
    
    display(head);

}


void display(struct node *head)
{
    struct node *ptr;
    ptr=head;
    while(ptr->link!=NULL)
    {
        printf("%d\n",ptr->data);
        ptr=ptr->link;
    }
}