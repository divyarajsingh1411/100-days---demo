#include<stdio.h>
#include<math.h>
void main()
{
    float p,r,t;
    float si,ci;
    printf("enter principle,rate,and time\n");
    scanf("%f %f %f" ,&p,&r,&t);
    si=(p*r*t)/100.0;
    ci=p*(pow(1.0+r/100.0,t)-1);
    printf("the simple interest is %f and compound interest is %f" ,si,ci);
}