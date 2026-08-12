#include<stdio.h>
int main()
{
    double f,c;
    printf("enter the temperature in celsius");
    scanf("%f" ,&c);
    f=(c*9/5)+32;
    printf("the temperature in farenheit is %f" ,f);
    return 0;
}