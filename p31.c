#include<stdio.h>
int main()
{
int a=1,b=2;
a=a+b;
b=a-b;
a=a-b;
printf("the original values are:a=1\n b=2");
printf("the swapped values are : a=%d\n b=%d",a,b);
return 0;
}
