#include<stdio.h>
int main()
{
    int a,b;
    printf("enter two numbers");
    scanf("%d\n%d",&a,&b);
    int*x,*y;
    x=&a;
    y=&b;
    *x=*x+*y;
    *y=*x-*y;
    *x=*x-*y;
    printf("modifies values of a and b are %d and %d",*x,*y);
}