#include<stdio.h>
int main()
{
    int arr[]={11,12,13,14,15};
    int n=5;
    n=n+1;
    int i;
    int position=3;
    int value=69;
   
    printf("Earlier array is\n");
    for(int j=0;j<5;j++)
    {
        printf("%d\n",arr[j]);
    }
    for(i=n;i>=position;i--)
    {
        arr[i+1]=arr[i];
    }
   
    arr[position]=32;
    printf("New array\n");
    for(int j=0;j<n;j++)
    {
        printf("%d\n",arr[j]);
    }
}