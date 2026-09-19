#include<stdio.h>
void main()
{
    int a[5];
    printf("enter the elements of the array");
    for(int i=0;i<5;i++)
    {
        scanf("%d" ,&a[i]);
    }
    int p=0;
    int z=0;
    int n=0;
    for(int i=0;i<5;i++)
    {
        if(a[i]>0)
        {
            p++;
        }
        else if(a[i]<0)
        {
            n++;
        }
        else
        {
            z++;
        }
    }
    printf("the number of postive elements is %d \n the number of negative elements is %d \n the number of zeros %d" ,p,n,z);
}