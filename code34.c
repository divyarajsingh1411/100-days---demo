#include<stdio.h>
void main()
{
    int n; int c=0;
    printf("enter a number");
    scanf("%d" ,&n);
    for(int i=1;i<=n;i++)
    {
        if(n%i==0)
        {
            c++;
        }
    }
    if(c==2)
    {
        printf("the number is prime");
    }
    else
    {
        printf("the number is not prime");
    }
}