#include<stdio.h>
void main()
{
    int n; int sum=0;
    printf("enter a number");
    scanf("%d",&n);
    for(int i=1;i<n;i++)
    {
        if(n%i==0)
        {
            sum=sum+i;
        }
    }
    if(sum==n)
    {
        printf("perfect number");
    }
    else
    {
        printf("not a perfect number");
    }
}