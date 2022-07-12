#include<stdio.h>
int main()
{
    int a,b,c,number,sum;
    printf("enter a three digit number only ");
    scanf("%d",&number);
    a=number%10;
    b=(number/10)%10;
    c=number/100;
    sum=a+b+c;
    printf("The sum is %d",sum);
    return 0;
}