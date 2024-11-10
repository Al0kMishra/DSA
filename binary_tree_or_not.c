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

void preOrder(struct node *p);

int checkbinary(struct node *p);

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
    p->right = p2;                                              //2
    p2->right = p3;                                   //     1        3       
    p3->right = p4;                                   //                 4
    p3->left = p5;                                     //             6     25
    
    preOrder(p);

    checkbinary(p);
    

    return 0;
}

void preOrder(struct node *p)
{
    if(p != NULL)
    {
        printf("%d ", p->data);  
        preOrder(p->left);
        preOrder(p->right);
    }
}


int checkbinary(struct node *p)
{
    if(p==NULL)
    {
        return 1;
    }
    else{
        if(p->left==NULL&&p->right==NULL)
        {
            return 1;
        }
        else{
            if(p->left!=NULL&&p->right!=NULL)
            return(checkbinary(p->left)&&checkbinary(p->right));

            else
            return 0;
        }
    }
}