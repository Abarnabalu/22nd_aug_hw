#include<stdio.h>
int main()
{
int a,b,c;
printf("enter the 3 numbers:\n");
scanf("%d%d%d",&a,&b,&c);
((a>b)&&(a>c))?(printf("The biggest number is:%d",a)):((b>c)?(printf("The biggest number is :%d",b)):(printf("The biggest number is :%d",c)));
return 0;
}
