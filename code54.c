#include<stdio.h>
void main()
{
    int a,b;
    for(int i=1;i<=4;i++)
        {

            for(int j=3;j>=i;j--)
            {
                printf(" ");
            }
            for(int k=1;k<=i;k++)
            {
                printf("*");
            }
            for(int k=1;k<=i-1;k++)
            {
                printf("*");
            }
            printf("\n");
            if(i==4)
            {
                break;
            }
        }
    for(int i=1;i<=4;i++)
        {
            if(i==1)
            {
                continue;
            }
            for(int j=1;j<=i-1;j++)
            {
                printf(" ");
            }
            for(int k=3;k>=i-1;k--)
            {
                printf("*");
            }
            for(int k=2;k>=i-1;k--)
            {
                printf("*");
            }
            printf("\n");
        }
    }

    


