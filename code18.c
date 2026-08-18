#include<stdio.h>
void main()
{
        int a;
        printf("enter the percentages");
        scanf("%d",&a);
        if(a>=0 && a<=100)
        {
            if(a>=90)
            {
            printf("grade A");
            }
            if(a>=80 && a<90)
            {
              printf("grade B");
            }
            if(a>=70 && a<80)
            {
                  printf("grade C");
            }
            if(a>=60 && a<70)
            {
                  printf("grade D");
            }
            if(a<60)
            {
                  printf("grade F");
            }
        }
        else
        {
              printf("wrong input");
        }
    }
    


        
