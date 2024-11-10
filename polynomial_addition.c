#include<stdio.h>
#include<stdlib.h>

struct node
{
    int coefficient;
    int expo;
    struct node *next;
};

void addition(struct node *head1, struct node *head2);
void print(struct node *head);
struct node* insert(struct node *head, int coefficient, int expo);
struct node* create(struct node *head);

int main()
{
    struct node *head1 = NULL;
    struct node *head2 = NULL;
    printf("Enter first polynomial \n");
    head1 = create(head1);
    printf("Enter second polynomial \n");
    head2 = create(head2);

    addition(head1, head2);
}

void addition(struct node *head1, struct node *head2)
{
    struct node *ptr1 = head1;
    struct node *ptr2 = head2;
    struct node *result = NULL;

    while (ptr1 != NULL && ptr2 != NULL)
    {
        if (ptr1->expo > ptr2->expo)
        {
            result = insert(result, ptr1->coefficient, ptr1->expo);
            ptr1 = ptr1->next;
        }
        else if (ptr1->expo < ptr2->expo)
        {
            result = insert(result, ptr2->coefficient, ptr2->expo);
            ptr2 = ptr2->next;
        }
        else
        {
            int sum_coeff = ptr1->coefficient + ptr2->coefficient;
            if (sum_coeff != 0)
            {
                result = insert(result, sum_coeff, ptr1->expo);
            }
            ptr1 = ptr1->next;
            ptr2 = ptr2->next;
        }
    }

    while (ptr1 != NULL)
    {
        result = insert(result, ptr1->coefficient, ptr1->expo);
        ptr1 = ptr1->next;
    }

    while (ptr2 != NULL)
    {
        result = insert(result, ptr2->coefficient, ptr2->expo);
        ptr2 = ptr2->next;
    }

    printf("Resultant polynomial after addition: \n");
    print(result);
}

struct node* insert(struct node *head, int coefficient, int expo)
{
    struct node *temp;
    struct node *newP = (struct node*)malloc(sizeof(struct node));
    newP->coefficient = coefficient;
    newP->expo = expo;
    newP->next = NULL;

    if (head == NULL || expo > head->expo)
    {
        newP->next = head;
        head = newP;
    }
    else
    {
        temp = head;
        while (temp->next != NULL && temp->next->expo >= expo)
        {
            temp = temp->next;
        }
        newP->next = temp->next;
        temp->next = newP;
    }
    return head;
}

struct node* create(struct node *head)
{
    int n, i;
    int coeff;
    int expo;

    printf("Enter the number of terms: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        printf("Enter the coefficient for term %d: ", i + 1);
        scanf("%d", &coeff);

        printf("Enter the exponent for term %d: ", i + 1);
        scanf("%d", &expo);

        head = insert(head, coeff, expo);
    }
    return head;
}

void print(struct node *head)
{
    if (head == NULL)
        printf("No Polynomial.");

    else
    {
        struct node *temp = head;
        while (temp != NULL)
        {
            printf(" %dx^%d", temp->coefficient, temp->expo);
            temp = temp->next;
            if (temp != NULL)
                printf(" + ");
        }
        printf("\n");
    }
}
