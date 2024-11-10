//armstrong
#include < stdio.h>
int main()
int count = 1, rem, num, sum;
printf("Armstrong numbers between 1 to 500 are:- \n");
while（count <=500）
{
num = count;
sum = 0;
while (num)
{
rem = num % 10;
sum = sum + (rem * rem
* rem);
num = num / 10;
｝
if
(sum == count)
｛
printf("%d\n", count);
｝
count++;
｝
return