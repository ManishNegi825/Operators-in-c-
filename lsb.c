#include<stdio.h>
int main()
{
    int num,count=0,a=0;
    printf("enter a num ");
    scanf("%d",&num);
   while(num !=0)
   {
    a = num & 1;
    printf("%d",a);
    count++;
    if(a==1)
    {
        printf("%d",count);
        break;
    }
    num=num>>1;
   }
    return 0;
}