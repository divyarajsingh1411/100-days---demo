#include<stdio.h>
int main()
{
    int a,n,s,b; int sum=0;
    printf("enter a three digit number");
    scanf("%d" ,&a);
    if(a>99 && a<1000)
    { 
            n=a%10;
            a=a/10;
            s=a%10;
            a=a/10;
            b=a%10;
            a=a/10;
            sum = n*100+s*10+b;
        printf("the reverse of the number is %d" ,sum);
    }
    else
    {
        printf("wrong input");
    }
}