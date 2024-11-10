#include<stdio.h>
int main()
{
    int arr[5];
    printf("Enter your array");
    for(int i=0;i<5;i++)
    {
        scanf("%d",&arr[i]);

    }
    printf("enter element you want to search");
    int element;
    int count=0;
    scanf("%d",&element);
    for(int i=0;i<5;i++)
    {
        if(element==arr[i])
        count++;
    }
    if(count>1)
    printf("Element is duplicate");
    else
    printf("Element is not duplicate");
}