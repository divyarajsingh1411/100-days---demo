#include<stdio.h>
void main()
{
    float ci,si,profit,loss;
    printf("enter the cost and selling price");
    scanf("%f %f" , &ci,&si);
    if(si>ci)
    {
        profit =(si-ci)*100.0/ci;
        printf("the profit percentage is %f%" , profit);
    }
    if(ci>si)
    {
        loss = (ci-si)*100.0/ci;
        printf("the loss percentage is %f %" , loss);
    }
    if(ci==si)
    {
        printf("neither profit nor loss ");
    }
}