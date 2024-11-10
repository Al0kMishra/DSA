# include <stdio.h>
# include <stdlib.h>
# include <limits.h>
# include <string.h>

struct Stack {
    int top;
    unsigned capacity;
    char *array;
};

# define MAX_SIZE 100

struct Stack *CreateStack(unsigned);
int IsFull(struct Stack *);
int IsEmpty(struct Stack *);
void Push(struct Stack *, char);
char Pop (struct Stack *);
void reverse(char *);

// creating Stack
struct Stack * CreateStack(unsigned capacity)
{
    struct Stack* stack = (struct Stack*)malloc(sizeof(struct Stack));
    stack->capacity = capacity;
    stack->top = -1;
    // array of that size storing characters
    stack->array = (char *)malloc(stack->capacity * sizeof(char));

    return stack;
}

int IsFull(struct Stack *stack)
{
    return stack->top == stack->capacity - 1;
}

int IsEmpty(struct Stack *stack)
{
    return stack->top == -1;
}

void Push(struct Stack *stack, char item)
{
    // is full condition
    if (IsFull(stack)){
        return;
    }
    stack->array[++stack->top] = item;
}

char Pop(struct Stack *stack)
{
    // is empty condition
    if (IsEmpty(stack)){
        return '\0';
    }

    // returning elements one by one
    return stack->array[stack->top--];

}

void reverse(char str[])
{
    int n = strlen(str);
    struct Stack *stack = CreateStack(n);

    for(int i=0; i<n; i++){
        Push(stack, str[i]);
    }

    for (int i = 0; i<n; i++){
        str[i] = Pop(stack);
    }

}

int main()
{
    char str[MAX_SIZE];
    printf("Enter any string: \n");
    scanf(" %[^\n]", str);
    // char str[] = "Anirudh";

    reverse(str);
    printf("Reversed string is %s", str);
    return 0;
}
