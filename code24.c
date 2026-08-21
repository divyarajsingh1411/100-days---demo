#include<stdio.h>
void main()
{
    int a,c=0;
    printf("enter the days");
    scanf("%d" ,&a);
    if(a>0)
    {
        if(a<=100)
        {
            c=a*5;
        }
        if(a<=200 && a>100)
        {
            c=100*5 + (a-100)*7;
        }
        if(a<=300 && a>200)
        {
            c=5*100 + 7*100 + (a-200)*10;
        }
        if(a>300)
        {
            c=5*100 +7*100 + 100*10 + (a-300)*12;
        }
    }
     printf("fine = %d" ,c);
}
