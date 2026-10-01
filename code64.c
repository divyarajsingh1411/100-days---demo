// Q64: Find the digit that occurs the most times in an integer number.

/*
Sample Test Cases:
Input 1:
112233
Output 1:
1

Input 2:
887799
Output 2:
7

*/
#include<stdio.h>
void main()
{
    printf("enter the number of elements of arrays");
    int n;
    scanf("%d",&n);
    printf("enter the elements of array");
    int a[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int m=0;
    int c=0;
    for(int i=0;i<n;i++)
    { 
        for(int j=0;j<n;i++)
        {
            if(a[j]>=m)
            {
                m=a[i];
                c++;
            }
        }
        printf("%d is maximam with %d times",m,c);
    }
}
