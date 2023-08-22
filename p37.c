#include<stdio.h>
int main()
{
int a;
printf("enter the  number:\n");
scanf("%d",&a);
((a%3==0)||(a%7==0))?(printf("This number is multiple of 3 or 7")):(printf("This number is multiple of neither 3 nor 7"));
return 0;
}
