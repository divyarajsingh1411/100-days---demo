#include<stdio.h>
#include<math.h>
void main()
{
    float a,b,c,r1,r2;
    printf("enter the value of a,b,and c\n");
    scanf("%f %f %f" ,&a,&b,&c);
    float d=b*b -4*a*c;
    if(d==0)
    {
         r1=-b/(2*a);
         r2=r1;
         printf("the roots are real and equal\n %f %f" ,r1 ,r2);
    }
    else if(d>0)
    {
         r1=(-b+sqrt(d))/2*a;
         r2=(-b-sqrt(d))/2*a;
         printf("the roots are real and different\n %f %f" ,r1,r2);
    }
    if(d<0)
    {
        printf("the roots are imaginary");
    }
}