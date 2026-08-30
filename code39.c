#include<stdio.h>
void main()
{
    int a,n;int sum=1;
    printf("enter a number");
    scanf("%d",&n);
    while(n>0)
    {
        a=n%10;
        n=n/10;
        if(a%2!=0)
        {
            sum=sum*a;
        }
    }
    printf("the product of odd digits is %d",sum);