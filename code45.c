#include<stdio.h>
void main()
{
    int n;
    float sum=0.0;
    float s=2.0,x=3.0;
    printf("Enter the number of terms: ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        sum +=(float)(s/x);
        s+=2.0;
        x+=4.0;
    }
    printf("The sum of the series is: %f", sum);
}
