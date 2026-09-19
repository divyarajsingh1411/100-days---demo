#include<stdio.h>
void main()
{
    int a[5];
    printf("enter the elements of the array");
    for(int i=0;i<5;i++)
    {
        scanf("%d" ,&a[i]);
    }
    int max=a[0];
    int min=a[0];
    for(int i=0;i<5;i++)
    {
        if(a[i]>max)
        {
            max= a[i];
        }
        if(a[i]<min)
        {
            min = a[i];
        }
    }
    printf("max =%d\n min =%d" ,max,min);
}
