#include<stdio.h>
int main()
{
int p,n,r;
float si;
printf("print the values of principal amount, no.of years,rate of interest\n");
scanf("%d%d%d",&p,&n,&r);
si=(p*n*r)/100;
printf("the simple interest is: %.4f",si);
return 0;
}
