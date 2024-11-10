#include<stdio.h>
int main()
{
    int arr[]={10,11,12,13,14,15};
    int n=6;
    printf("Array is :\n");
    for(int j=0;j<6;j++)
    {
        printf("%d\n",arr[j]);
    }
    printf("Enter the element you want to delete\n");
    int element,count=0;
    scanf("%d",&element);
    for(int j=0;j<n;j++)
    {
        count=count+1;
        if(element==arr[j])
        {
            break;
        } 
    }
    printf("%d",count);
    int index=count-1;
    for(int j=index;j<n;j++)
    {
        arr[j]=arr[j+1];

    }
    n=n-1;
    printf("new array is \n");
    for(int j=0;j<n;j++)
    {
        printf("%d\n",arr[j]);
    }
    
}