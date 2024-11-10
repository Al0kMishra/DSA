#include<stdio.h>
int main()
{
    int arr[5][3];
    int sum=0;
    printf("Enter the sales done bt salesman ");
    for(int i=0;i<5;i++)
    {
        for(int j=0;j<3;j++)
        {
            scanf("%d\n ",&arr[i][j]);
        }
    }
    printf("Total sales done are:\n");
     for(int i=0;i<5;i++)
    {
        for(int j=0;j<3;j++)
        {
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    for(int i=0;i<5;i++)
    {
        for(int j=0;j<3;j++)
        {
            // printf("Total sales done by each salesman %d%d is: %d  ",i,j,arr[i][j]);
            sum=sum+arr[i][j];
        }
    printf("Sum by %d saleman is %d",i+1,sum);
    sum=0;
    printf("\n");
    }
}