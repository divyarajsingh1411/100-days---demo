#include<stdio.h>
void main()
{
    int n;
    printf("enter the number of points");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        if(i%2!=0)
        {
            printf("%d  ",i);;
        }
    }
}