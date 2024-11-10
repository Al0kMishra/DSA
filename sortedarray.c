#include<stdio.h>
int main()
{
    int arr[]={10,11,12,13,14,15};
    int n = 6;
   
    int index;
    printf("Array is\n");
    for(int j=0;j<6;j++)
    {
        printf("%d\n",arr[j]);

    }
    printf("Enter the element you want to insert");
    int element,count=0;
    scanf("%d",&element);
    for(int j=0;j<n;j++)
    {
        count++;
        if(element<arr[j])
        break;
    }
    index=count;
    for(int j=n;j>=index;j--)
    {
        arr[j+1]=arr[j];
    }
    n=n+1;
    arr[index]=element;
    printf("Array is :\n");
    for(int j=0;j<n;j++)
    {
        printf("%d\n",arr[j]);
    }

}