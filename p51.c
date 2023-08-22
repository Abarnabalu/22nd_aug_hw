#include<stdio.h>
int main()
{
float a,sa,vl;
printf("enter the side of a cube\n");
scanf("%f",&a);
sa=6*a*a;
vl=a*a*a;
printf("the surface area:%.5f\n volume:%.5f",sa,vl);
return 0;
}
