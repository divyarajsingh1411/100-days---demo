//Write a program to find the sum of the series: 1 + 3/4 + 5/6 + 7/8 + … up to n terms.
#include <stdio.h> 
void main()
{
    int n;
    float sum=0;
    printf("Enter the number of terms: ");
    scanf("%d",&n);
    for(int i=3;i<=n+2;i+=2)
    {
        sum += (float)i/(i+1);
    }
    float ts=sum+1;
    printf("The sum of the series up to %d terms is: %f\n", n, ts);
}
