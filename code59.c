#include<stdio.h>
void main()
{
    int a[5];
    printf("enter the elements of the array");
    for(int i=0;i<5;i++)
    {
        scanf("%d" ,&a[i]);
    }
    int e=0;
    int o=0;
    for(int i=0;i<5;i++)
    {
        if(a[i]%2==0)
        {
            e++;
        }
        else
        {
            o++;
        }
    }
    printf("the number of even number is %d\n the number of odd number is %d" ,e,o);
}
