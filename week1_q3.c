#include<stdio.h>

int main()
{
int a;
int b;
printf("enter a number \n");
scanf("%d",&a);
b=a%2;
switch(b){
case 0:
    printf("it's a even number");
    break;
    case 1:
    printf("it's an odd number ");
    break;
    }
    return 0;
}