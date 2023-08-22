#include<stdio.h>
#define PI 3.14
int main()
{
float a;
printf("enter the side of square:\n");
scanf("%f",&a);
float r=a/2,area;
area=PI*r*r;
printf("The required area of circle is:%.7f",area);

return 0;
}
