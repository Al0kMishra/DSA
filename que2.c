//division obtained #include ‹stdio.h>
int main()
int m1, m2, m3, m4, m5;
printf("Enter your 5 subject marks (each out of 100)= ");
scanf ("%d%d%d%d%d", &m1, &m2, &m3, &m4, &m5);
float t;
t = (m1+m2+m3+m4+m5)/500.0*100.0;
if (t>=60)
printf("1st division");
else
{
if (t<60 && t>=50)
printf ("2nd division");
else
if(t<50
&& t>=40)
printf("3rd division");
else printf ("Fail");
}
return 0;