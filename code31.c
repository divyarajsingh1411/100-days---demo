#include<stdio.h>
int main()
{
    int n,x,s=0; int b=1;
    printf("enter a number");
    scanf("%d" ,&n);
    while(n>0)
    {
        x=n%2;
        s=s+b*x;
        n=n/2;
        b=b*10;
    }
    printf("Binary representation: %d", s);
}