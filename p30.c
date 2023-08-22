#include<stdio.h>
int main()
{
int a=1,b=2,c;
c=b;
b=a;
a=c;
printf("the original values are:a=1\n b=2");
printf("the swapped values are : a=%d\n b=%d",a,b);
return 0;
}
