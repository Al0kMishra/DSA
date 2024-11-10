#include<stdio.h>
int swap(int *i,int *j)
{
    *i=*i+*j;
    *j=*i-*j;
    *i=*i-*j;

    return *i,*j; 
}
int main()
{
    int a,b;
    printf("Enter the values of a and b");
    scanf("%d\n%d",&a,&b);
    int*x,*y;
    x=&a,y=&b;
    swap(&a,&b);
    printf("%d %d",a,b);
    
      

}