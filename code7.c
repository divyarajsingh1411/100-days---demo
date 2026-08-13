#include<stdio.h>
void main()
{
    int a,b,c;
    printf("enter two numbers");
    scanf("%d  %d" ,&a ,&b);
    printf("the numbers you enter are %d and %d\n" ,a,b);
    c=a;
    a=b;
    b=c;
    printf("the number after swaping are %d and %d" ,a,b);
}