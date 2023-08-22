#include<stdio.h>
int main()
{
int p,n,r;
float ci;
printf("print the values of principal amount, no.of years,rate of interest\n");
scanf("%d%d%d",&p,&n,&r);
ci=p*(1+(r/100))^n;
printf("the compound interest is: %.4f",ci);
return 0;
}
