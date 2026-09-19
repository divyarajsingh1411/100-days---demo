#include<stdio.h>
void main()
{
    int arr[5]={2,4,66,4,8};
    int sum=0;
    for(int i=0;i<5;i++)
    {
        sum+=arr[i];
    }
    printf("sum = %d" ,sum);
}