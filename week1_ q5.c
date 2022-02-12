#include<stdio.h>

int main()
{
float r,d,cir,area;
printf("enter radius \n");
scanf("%f",&r);
d=2*r;
cir=2*3.14*r;
area=3.14*r*r;
printf("diameter =%f\n",d);
printf("circumference=%f\n",cir);
printf("area=%f\n",area);
    return 0;
}