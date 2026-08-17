#include<stdio.h>
void main()
{
    char a;
    printf("enter a alphabet");
    scanf("%c",&a);
    if(a=='a' || a=='e' || a=='i' || a=='o' || a=='u')
    {
        printf("it is vowel");
    }
    else
    {
        printf("it is consant");
    }
}