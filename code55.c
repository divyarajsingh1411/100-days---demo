#include<stdio.h>
void main()
{
    int n;
    printf("enter a number");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        int x=0;
        for(int j=1;j<=i;j++)
        {
            if(i%j==0)
            {
                x++;
            }
        }
        if(x==2)
        {
            printf("%d\n",i);
        }
    }
}