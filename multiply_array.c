#include<stdio.h>
int main()
{
    int m,n;
    int arr1[3][2];
    int arr2[2][3];
    int mul_arr[3][3];
    
   
    printf("Enter the elements of array 1:\n");
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<2;j++)
        {
            scanf("%d",&arr1[i][j]);

        }
        printf("\n");
    }
    printf("Enter the elements of second array\n");
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<3;j++)
        {
            scanf("%d",&arr2[i][j]);

        }
    printf("\n");
    }
    
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            mul_arr[i][j]=arr1[i][j]*arr2[i][j];
        }
    }
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            printf("%d ",mul_arr[i][j]);
        }
    printf("\n");
    }

}