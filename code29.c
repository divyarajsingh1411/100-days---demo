#include<stdio.h>
void main()
{
    int n,sum=1;    
    printf("enter the number of points");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        sum =sum*i;
    }
    printf("the factorial of %d is %d",n,sum);
}