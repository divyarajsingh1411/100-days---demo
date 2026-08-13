#include<stdio.h>
void main()
{
    int n; int sum=0;
    printf("enter the value of n");
    scanf("%d",&n);
    for(int i=0;i<=n;i++)
    {
        sum+=i;
    }
    printf("the sum of n numbers is %d" ,sum);
}