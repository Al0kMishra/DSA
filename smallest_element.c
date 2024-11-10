#include<stdio.h>
int main()
{
    int arr[6];
    int small=0;
        for(int i=0;i<6;i++)
        {
            scanf("%d",&arr[i]);
            if(arr[i]>arr[i+1])
            small=arr[i+1];
            
        }
            
    printf("%d",small);
}