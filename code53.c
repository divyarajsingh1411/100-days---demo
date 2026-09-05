#include<stdio.h>
void main()
{
    for(int i=1;i<=9;i++)
    {
        if(i%2==0)
        {
            continue;
        }
        for(int j=1;j<=i;j++)
        {
           
            printf("*");
        }
        printf(" \n");
        if(i==9)
        {
            for(int k=8;k>=1;k--)
            {
                if(k%2==0)
                {
                    continue;
                }
                for(int l=1;l<=k;l++)
                {
                    printf("*");
                }
                printf(" \n");
            }
        }
    }
}
