#include<stdio.h>
#include<stdlib.h>

struct node 
{
    struct node *left;  
    int data;
    struct node *right;
};

struct node *creation(int value)
{
    struct node *n = (struct node*)malloc(sizeof(struct node));
    n->data = value;
    n->left = NULL;
    n->right = NULL;
    return n;
}

void inOrder(struct node *p);

int main()
{
    //creation of tree
    struct node *p = creation(2);
    struct node *p1 = creation(1);
    struct node *p2 = creation(3);
    struct node *p3 = creation(4);
    struct node *p4 = creation(25);
    struct node *p5 = creation(6);

    //linking in tree
    p->left = p1;
    p->right = p2;
    p1->left = p3;
    p1->right = p4;
    p2->left = p5;

    inOrder(p);

    
}

void inOrder(struct node *p)
{
    if(p != NULL)
    {
        inOrder(p->left);
        printf("%d ", p->data);  
        inOrder(p->right);
    }
}
