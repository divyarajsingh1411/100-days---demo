#include<stdio.h>
void main()
{
    char a;
    printf("enter a character");
    scanf("%c", &a);
    if(a>=48 && a<=57)
    {
        printf("digit");
    }
    else if(a==32)
    {
        printf("whitespace");
    }
    if(a>=65 && a<=90)
    {
        printf("upper case");
    }
    else if(a<=122 && a>=97)
    {
        printf("lower case");   
    }
    else
    {
        printf("special character");
    }
}