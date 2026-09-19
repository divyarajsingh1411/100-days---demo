//Q61: Search for an element in an array using linear search.

/*
Sample Test Cases:
Input 1:
5
1 2 3 4 5
3
Output 1:
Found at index 2

Input 2:
4
10 20 30 40
25
Output 2:
-1

*/
#include<stdio.h>
void main()
{
    int a[5];
    printf("enter the elements of array\n");
    for(int i=0;i<5;i++)
    {
        scanf("%d" ,&a[i]);
    }
    printf("enter the elements to be found");
    int b;int c=0;
    scanf("%d" ,&b);
    for(int i=0;i<5;i++)
    {
        if(a[i]==b)
        {
            printf("found at %d postion",i+1);
        }
    }
}