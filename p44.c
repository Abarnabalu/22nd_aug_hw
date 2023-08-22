#include<stdio.h>
int main()
{
int a,b,or,and,exor,ls,rs;
printf("print the values\n");
scanf("%d%d",&a,&b);
or=a|b;
and=a&b;
exor=a^b;
ls=a<<b;
rs=a>>1;
printf("1.a or b=%d\n 2.a&b=%d\n 3.a^b=%d\n 4.a<<b=%d\n 5.a>>b=%d",or,and,exor,ls,rs);
return 0;
}
