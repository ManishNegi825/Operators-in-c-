#include<stdio.h>
int main()
{
   int num;
   printf("enter a number ");
   scanf("%d",&num);
   num & 1 == 1 && printf("odd")||printf("even");
    return 0;
}