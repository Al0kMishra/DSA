#include<stdio.h>
int main()
{
    int arr1[5];
    int arr2[5];
    printf("Enter the values of array 1\n1");
for(int i=0;i<5;i++)
    {
        scanf("%d",&arr1[i]);
    }
    printf("Values of arr2 are");
for(int j=0;j<5;j++)
    {
        arr2[j]=arr1[j];
        printf(" %d ",arr2[j]);
    }

}