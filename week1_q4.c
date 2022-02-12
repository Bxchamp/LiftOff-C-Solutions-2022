#include<stdio.h>

int main()
{
int a,b,c,sum,sub,mul,div;
printf("enter 1st number\n");
scanf("%d",&a);
printf("enter 2nd number\n");
scanf("%d",&b);
printf("choose your choice \n");
printf("1.add\n");
printf("2.sub\n");
printf("3.muliply\n");
printf("4.divide\n");
printf("enter your choice\n");
scanf("%d",&c);
switch(c){
case 1:
sum=a+b;
printf("sum is %d",sum);
break;
case 2:
 sub=a-b;
printf("difference is %d",sub);
break;
case 3:
 mul=a*b;
printf("product is %d",mul);
break;
case 4:
div=a/b;
printf("quotient is %d",div);
break;
 }
    return 0;
}