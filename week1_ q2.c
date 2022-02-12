#include<stdio.h>

int main()
{
int a,b;
printf("enter 1st number\n");
scanf("%d",&a);
printf("enter 2nd number\n");
scanf("%d",&b);
if(a>b)
printf("maximum number is %d",a);
else
printf("maximum number is %d",b);
    return 0;
}