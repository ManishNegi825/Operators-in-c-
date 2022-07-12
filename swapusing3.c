#include<stdio.h>
int main()
{
 int a,b,c;
 printf("enter the value of a & b ");
 scanf("%d %d",&a,&b);
 c=a;
 a=b;
 b=c;
 printf("The swaped value of a is %d""\n""The swaped value of b is %d",a,b);
    return 0;
}