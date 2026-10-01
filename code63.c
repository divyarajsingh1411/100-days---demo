// Q63: Merge two arrays.

/*
Sample Test Cases:
Input 1:
3
1 2 3
2
4 5
Output 1:
1 2 3 4 5

*/
#include <stdio.h>
void main()
{
    printf("enter the number of elements of first array");
    int n1;
    scanf("%d",&n1);
    printf("enter the elements of the first array\n");
    int a[n1];
    int c[100];
    for(int i=0;i<n1;i++)
    {
        scanf("%d",&a[i]);
        c[i]=a[i];
    }
    printf("enter the number of elements of second array");
    int n2;
    scanf("%d",&n2);
    int b[n2];
    printf("enter the elements of second array\n");
    for(int i=0;i<n2;i++)
    {
        scanf("%d",&b[i]);
        c[i+n1]=b[i];
    }
    int x=n1+n2;
    printf("the array after merging \n");
    for(int i=0;i<x;i++)
    {
        printf("%d " ,c[i]);
    }
}