#include<stdio.h>
void main()
{
    int n;
    int x=1, y=0;
    printf("enter a binary number");
    scanf("%d",&n);
    for(int i=0;n>=0;i++)
    {
        int a=n%10;
        n=n/10;
        if(a==1)
        {
            printf("%d",y);
        }
        if(a==0)
        {
            printf("%d",x);
        }
        if(n==0)
        {
            break;
        }
    }

}