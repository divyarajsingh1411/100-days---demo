// Q62: Reverse an array without taking extra space.

/*
Sample Test Cases:
Input 1:
4
1 2 3 4
Output 1:
4 3 2 1

*/
#include<stdio.h>
void main()
{
    int a[5];
    printf("enter the elements of the array");
    for(int i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
    }
    int b[5];
    int x=4;
    for(int i=0;i<5;i++)
    {
        b[i]=a[x];
        x--;
    }
    printf("the reverse of the arrays is = ");
    for(int i=0;i<5;i++)
    {
        printf("%d",b[i]);
    }
}