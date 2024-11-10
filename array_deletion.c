#include<stdio.h>
int main()
{
    int arr[]={10,11,12,13,14,15};
    int position=3;
    int n=6; 
    int i;
    printf("Array before is\n");
    for(int j=0;j<n;j++)
    {
        printf("%d\n",arr[j]);
    }
    for(i=position;i<=n-1;i++)
    {
       arr[i]=arr[i+1];
    }
    n=n-1;
    printf("Array is \n");
    for(int j=0;j<n;j++)
    {
        printf("%d\n",arr[j]);
    }

}