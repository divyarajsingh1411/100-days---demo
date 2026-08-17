#include<stdio.h>
void main()
{
    int a;
    printf("enter a number\n");
    scanf("%d" ,&a);
    if(a>0)
    {
        printf("the number is postive");
        
    }
    else if(a<0)
    {
        printf("the number is negative");
    }
    else
    {
        printf("the number is zero");
    }

}