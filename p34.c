#include<stdio.h>
int main()
{
float c,f,c_f,f_c;
printf("Enter the celcius value\n");
scanf("%f",&c);
c_f=(c*1.8)+32;
printf("the respective farenheit value is :%.3f \n",c_f);
printf("Enter the farenheit value\n");
scanf("%f",&f);
f_c=((f-32)/1.8);
printf("the respective celcius value is :%.3f \n",f_c);
return 0;
}
