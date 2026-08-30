#include<stdio.h>
void main()
{
    int a,n;int sum=0;
    printf("enter a number");
    scanf("%d",&n);
    while(n>0)
    {
        a=n%10;
        sum=sum+a;
        n=n/10;
    }
    printf("the sum of digits is %d",sum);
}