#include<stdio.h>
int main()
{
    int arr[5][3];
    for(int i=0;i<5;i++)
    {
        for(int j=0;j<3;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    for(int i=0;i<5;i++)
    {
        for(int j=0;j<3;j++)
        {
            if(arr[i][j]>arr[i][j+1] && arr[i][j]>arr[i][j+2])
            printf("Max element is %d",arr[i][j]);
            else if(arr[i][j+1]>arr[i][j] && arr[i][j+1]>arr[i][j+2])
            printf("Max element is %d",arr[i][j+1]);
            else if(arr[i][j+2]>arr[i][j] && arr[i][j+2]>arr[i][j+1])
            printf("Max element is %d",arr[i][j+2]);

        }
    printf("\n");
    }
}