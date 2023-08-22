#include<stdio.h>
int main()
{
float l,b,peri,area;
printf("enter the length and breadth of rectangle\n");
scanf("%f%f",&l,&b);
peri=2*(l+b);
area=l*b;
printf("The perimeter of rectangle is : %.4f\n area is :%.4f ",peri,area);
return 0;
}
