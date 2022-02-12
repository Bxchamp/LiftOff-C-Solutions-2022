#include<stdio.h>

int main()
{
char name[30];
char branch[20];
char hob[100];
int reg;
printf("enter your name \n");
gets(name);
printf("enter your branch\n");
gets(branch);
printf("enter your hobbies\n");
gets(hob);
printf("enter your registration number\n");
scanf("%d",&reg);
printf("your name is %s \n",name);
printf("your branch is %s \n",branch);
printf("your hobbies are %s \n",hob);
printf("your registration number is %d\n",reg);
    return 0;
}