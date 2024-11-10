// #include<stdio.h>
// #include<stdlib.h>
// //creating a node
// struct node
// {
//     int value;
//     struct node *next;
// };

// void printinglinkedlist(struct node *ptr)
// {
//     while(ptr!=NULL)
//     {
//         printf("%d\n",ptr->value);
//         ptr=ptr->next;
//     }
// }

// int main()
// {
//     struct node *head;
//     struct node *one=NULL;
//     struct node *two=NULL;

//     //allocating space
//     one=malloc(sizeof(struct node));
//     two=malloc(sizeof(struct node));

//     //assigning values
//     one->value=1;
//     two->value=2;

//     //connecting nodes
//     one->next=two;
//     two->next=NULL;

//     //printing node values
//     head=one;
//     printinglinkedlist(head);

// }










// #include<stdio.h>
// #include<stdlib.h>

// //creating a node
// struct node
// {
//     int value;
//     struct node *next;
// };


// void printinglinkedlist(struct node *ptr)
// {
//     while(ptr!=NULL)
//     {
//         printf("%d",ptr->value);
//     }
// }

// int main()
// {
//     //creating number of nodes 
//     struct node *head;
//     struct node *one;
//     struct node *two;
//     struct node *three;

//     //allocating size
//     one=malloc(sizeof(struct node));
//     two=malloc(sizeof(struct node));
//     three=malloc(sizeof(struct node));


//     //assigning values
//     one->value=1;
//     two->value=2;
//     three->value=3;

//     //connecting nodes
//     one->next=two;
//     two->next=three;
//     three->next=NULL;

//     //printing values
//     head=one;
//     printinglinkedlist(head);

// }






//Creation using function 
// #include<stdio.h>
// #include<stdlib.h>

// struct node
// {
//     int value;
//     struct node *next;
// };

// struct node *head , *tail=NULL;

// void addnode(int data)
// {
//     struct node *newnode=(struct node*)malloc(sizeof(struct node));
//     newnode->value=data;
//     newnode->next=NULL;
    
//     if(head==NULL)
//     {
//         head=newnode;
//         tail=newnode;
//     }
//     else
//     {
//         tail->next=newnode;
//         tail=newnode;
//     }

// }

// void printlist()
// {
//     struct node *current=head;
//     if(head==NULL)
//     {
//         printf("List is empty");
//         return;
//     }
//     while(current!=NULL)
//     {
//         printf("%d",current);
//     }
// }

// int main()
// {
    
//     addnode(1);
//     addnode(2);
//     addnode(3);
//     printlist();
// }    





//Creation using for loop 

// #include<stdio.h>
// #include<stdlib.h>
// struct node 
// {
//     int data;
//     struct node *nextptr;
// } *stnode;    //Pointer to starting node

// void createnodelist(int n)
// {
//     struct node *fnnode,*tmp;
//     int num,i;
//     stnode=(struct node*)malloc(sizeof(struct node));

//     if(stnode==NULL)
//     {
//         printf("memory not allocated");
//     }
//     else{

//         //Reading data for the starting node from user input
//         printf("input data for node 1");
//         scanf("%d",&num);
//         stnode->num=num;
//         stnode->nextptr=NULL;
//         tmp=stnode;
    

//     for(int i=2;i<=n;i++)
//     {
//         fnnode=(struct node*)malloc(sizeof(struct node));

//         if(fnnode==NULL)
//         {
//             printf("Memory can not be allocated");
//             break;
//         }
//         else
//         {
//             printf("Input data for node%d",i);
//             scanf("%d",&num);

//             fnnode->num=num;
//             fnnode->nextptr=NULL;

//             tmp->nextptr=fnnode;
//             tmp=tmp->nextptr;
//         }
        
//     }
// }
// }


// void displaylist()
// {
//     struct node *tmp;
//     if(stnode==NULL)
//     {
//         printf("list is empty");

//     }
//     else
//         {
//             tmp=stnode;
    
//             while(stnode!=NULL)
//                 {

                
//                     printf("Data=%d",tmp->num);
//                     tmp=tmp->nextptr;
//                 }
//         }
// }


// int main()
// {
//   int n;
//   printf("Enter the number of nodes ");
//   scanf("%d",&n);
  

//   createnodelist(n);

//   printf("Data entered in the list\n");
//   displaylist();

//   return 0;
// }
