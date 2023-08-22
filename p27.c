#include<stdio.h>
int main()
{
int a,inc1,dec1;
printf("enter the number:\n");
scanf("%d",&a);
inc1=a++;
dec1=a--;
printf("The incremented value is:%d and decremented value is:%d",inc1,dec1);
return 0;
}
