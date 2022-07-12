#include<stdio.h>
int main()
{
int num,a,b,c,swap;
printf("enter a three digit number only ");
scanf("%d",&num);
c=num%10;
b=num/10%10;
swap=c;
c=b;
b=swap;
a=num/100;
printf("The right rotated number is %d%d%d",a,b,c);
return 0;
}