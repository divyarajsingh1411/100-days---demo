#include<stdio.h>
void main()
{
    int a,b,c;
    printf("enter the three side of a triangle");
    scanf("%d %d %d " ,&a,&b,&c);
    if(a==b && b==c)
    {
        printf("the triangle is equitorial");
    }
    if (a==b && a!=c && b!=c)
    {
         printf("the triangle is isosceles");
    }
    if(a!=b && b!=c && c!=a)
    {
        printf("the triangle is scalene");
    }
}