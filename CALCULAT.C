#include<stdio.h>
int main()
{
int a,b;
char op;
printf("enter a=%d\n");
scanf("%d",&a);
printf("enter operator=%c\n",op);
scanf(" %c",&op);
printf("enter b=%d",b);
scanf("%d",&b);
switch(op)
{
 case '+':
 printf("%d",a+b);
 break;
 case '-':
 printf("%d",a-b);
 break;
 default:
 printf("invalid operator");
}
clrscr();
return 0;
}