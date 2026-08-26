#include<stdio.h>
void main()
{
    int n,a,b; int sum=0;
    printf("enter a number");
    scanf("%d" ,&n);
    a=n;
    while(n>0)
    {
        b=n%10;
        n=n/10;
        sum= sum +b*b*b;
    }
    if (a==sum)
    {
        printf("the number is armstrong");
    }
    else
    {
        printf("the number is not armstrong");
    }
}
