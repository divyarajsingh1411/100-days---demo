#include<stdio.h>
void main()
{
    int n,c=0;
    printf("enter a number");
    scanf("%d",&n);
    for(int i=1;i<n;i++)
    {
        if(n%i==0)
        {
            c=i;
        }
    }
    printf("highest common divisor is %d",c);
}