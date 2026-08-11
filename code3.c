#include<stdio.h>
void main()
{
    int length,breadth;
    printf("enter the length\n");
    scanf("%d" ,&length);
    printf("enter the breadth\n");
    scanf("%d" ,&breadth);
    int area =length*breadth;
    int perimeter=2*length+2*breadth;
    printf("the area of the rectangle is =%d\n" ,area);
    printf("the perimeter of the rectangle is =%d\n" ,perimeter);
}