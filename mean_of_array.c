#include<stdio.h>
int main()
{
    int arr[5];
    int count=0;
    int sum=0;
    printf("Enter the values in array");
    for(int i=0;i<5;i++)
    {
        scanf("%d",&arr[i]);
        count++;
        sum=sum+arr[i];

    }
    printf("Sum of array is %d",sum);
    printf("Number of elements in array is %d",count);
    int mean;
    mean=sum/count;
    printf("The mean of the array is %d",mean);
    return 0;
}