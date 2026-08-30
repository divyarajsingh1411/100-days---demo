#include<stdio.h>
void main()
{
    int a,b;
    printf("enter two numbers");
    scanf("%d%d",&a,&b);
    for(int i=1;i<=1000;i++)
    {
        if(i%a==0 && i%b==0)
        {
            printf("the lcm of %d and %d is %d",a,b,i);
            break;
        }
    }
}

