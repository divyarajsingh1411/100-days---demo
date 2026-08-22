#include<stdio.h>
void main()
{
    int a,b;
    char ch;
    printf("enter the two numbers");
    scanf("%d %d",&a,&b);
    printf("enter the operation you want to perform");
    scanf(" %c",&ch);
    switch(ch)
    {
        case '+':
            printf("the sum of two numbers is %d",a+b);
            break;
        case '-':
            printf("the difference of two numbers is %d",a-b);
            break;
        case '*':
            printf("the product of two numbers is %d",a*b);
            break;
        case '/':
            printf("the division of two numbers is %d",a/b);
            break;
        default:
            printf("invalid operation");
    }
}