#include<stdio.h>
int main()
{
    int n;
    printf("Enter the size of array al :\n ");
    scanf("%d ",&n);
    int al[n];
    printf("Enter the elements of array \n");
    for(int a=0;a<n;a++)
    {
        scanf("%d\n",&al[a]);
    }
    printf("Array before insertion is:\n");
    for(int a=0;a<n;a++)
    {
        printf("%d \n",al[a]);
    } 

    // inserting an element 
    int index;
    printf("Enter the index where you want to insert element :\n");
    scanf("%d",&index);
    int value;
    printf("Enter the value of that index:\n");
    scanf("%d",&value);
    for(int i=n;i>=index;i--)
    {
        al[i+1]=al[i];
    }
    n=n+1;
    al[index]=value;
    printf("Array after insertion is:\n");
    for(int a=0;a<n;a++)
    {
        printf("%d \n",al[a]);
    } 
}