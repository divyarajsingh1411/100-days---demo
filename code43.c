#include<stdio.h>
void main()
{
    int n;int sum=0,s=1;;
    printf("enter a number");
    scanf("%d",&n);
    int c=n;
    while(n!=0)
    {
        int r=n%10;
        n=n/10;
        for(int i=1;i<=r;i++)
        {
            s=s*i;
        }
        sum=sum+s;
        s=1;
    }
    if(sum==c)
    {
        printf("strong number");
    }
    else
    {
        printf("not a strong number");
    }
}