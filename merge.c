#include<stdio.h>
int main() 
{
    printf("Enter size of arrays ");
    int n1,n2;
    scanf("%d,%d\n",&n1,&n2);
    int arr1[n1];
    int arr2[n2];
    int ar;
    for(int i=0;i<n1;i++)
    {
        scanf("%d",&arr1[i]);

    }
    for(int i=0;i<n2;i++)
    {
        scanf("%d",&arr2[i]);
    }

    printf("Merged array is:");
    for(int i=0;i<n1;i++)
    {
        printf("%d\n",arr1[i+n2]);
        
    }
}