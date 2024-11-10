#include<stdio.h>
int findSum(int A[], int N) 
{ 
    if (N <= 0) 
        return 0; 
    return (findSum(A, N - 1) + A[N - 1]); 
} 
int main()
{
    int arr[5]={1,23,43,5,67};
    int sum=0;
    int n=5;
    
    sum=findSum(arr[5],n);
    printf("%d",sum);
    return 0;
}
