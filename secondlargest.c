#include<stdio.h>
int main()
{
   int arr[7];
   printf("Enter elements in an array\n");
   for(int i=0;i<7;i++)
   {
    scanf("%d",&arr[i]);
   }
   int max=arr[0];
   int second=0;
   
   for(int i=0;i<7;i++)
   {
    if(max<arr[i])
    {
        second=max;
        max=arr[i];
        
    }
    
   }
    printf("Second max is %d",second);
   
  
}