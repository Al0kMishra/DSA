#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct node
{
    int id;
    char bookname[100];
    char author[100];
    struct node *next;
};

struct node *createBook(int id, char bookname[], char author[]);
void insertbook(struct node **head, int id, char bookname[], char author[]);
void display(struct node *head);
void searchbook(struct node *head);
void deletebook(struct node *head);

int main()
{
    struct node *head = NULL;
    int id;
    char bookname[100];
    char author[100];
    
    printf("\nBook Management System\n");
    printf("1. Add a book\n");
    printf("2. Display all books\n");
    printf("3. Search for a book\n");
    printf("4. Delete a book\n");
    printf("5. Exit\n");


    int n=4;
    for(int i=0;i<4;i++)
    {
        printf("Enter ID: ");
        scanf("%d", &id);
        printf("Enter bookname: ");
        scanf(" %[^\n]", bookname);
        printf("Enter author: ");
        scanf(" %[^\n]", author);
        insertbook(&head, id, bookname, author);
    }
    
    int choice;
    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch (choice)
    {
        case 1:
            printf("Enter ID: ");
            scanf("%d", &id);
            printf("Enter bookname: ");
            scanf(" %[^\n]", bookname);
            printf("Enter author: ");
            scanf(" %[^\n]", author);
            insertbook(&head, id, bookname, author);
        case 2:
            display(head);
        case 3:
            searchbook(head);
        case 4:
            deletebook(head);
            display(head);
        case 5:
            printf("You have exitted ");
            break;
        default:
            printf("Invalid choice\n");
            break;
    }

    return 0;
}

struct node *createBook(int id, char bookname[], char author[]) 
{
    struct node *newBook = (struct node*)malloc(sizeof(struct node));
    if(newBook == NULL)
    {
        printf("Memory allocation failed\n");
        exit(1);
    }
    newBook->id = id;
    strcpy(newBook->bookname, bookname);
    strcpy(newBook->author, author);
    newBook->next = NULL;
    return newBook;
}

void insertbook(struct node **head, int id , char bookname[], char author[]) 
{
    struct node *newBook = createBook(id, bookname, author);
    if (*head == NULL) 
    {
        *head = newBook;
    } 
    else 
    {
        struct node *current = *head;
        while (current->next != NULL) 
        {
            current = current->next;
        }
        current->next = newBook;
    }
}

void display(struct node *head)
{
    struct node *ptr = head;
    if(ptr == NULL)
    {
        printf("No books in the list\n");
        return;
    }
    printf("List of books:\n");
    while (ptr != NULL)
    {
        printf("ID: %d\n", ptr->id);
        printf("Bookname: %s\n", ptr->bookname);
        printf("Author: %s\n", ptr->author);
        printf("\n");
        ptr = ptr->next;
    }
}


void searchbook(struct node *head)
{
    struct node *ptr=head;
    int title;
    printf("Eter the book ID of the book you want to search");
    scanf(" %d", &title);
    while(ptr->id != title)
    {
        ptr=ptr->next;
    }
    printf("Searched book is %s\n",ptr->bookname);
    printf("Searched book is %s\n",ptr->author);
    printf("Searched book is %d\n",ptr->id);
}

void deletebook(struct node *head)
{
    struct node *ptr=head;
     struct node *temp=NULL;
    int title;
    printf("Eter the book ID of the book you want to delete");
    scanf(" %d", &title);
    if (temp == NULL) 
    {
        printf("Book not found\n");
        return;
    }
    
    while(ptr->id!=title)
    {
        temp=ptr;
        ptr=ptr->next;
        free(ptr);
        printf("Book Deleted successfully");
        display(head);
    }

}