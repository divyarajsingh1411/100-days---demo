
#include <stdio.h>
#include <math.h>
void main()
{
    int num, firstDigit, lastDigit, digits = 0, tempNum, swappedNum;

    printf("Enter a number: ");
    scanf("%d", &num);

    tempNum = num;
    lastDigit = tempNum % 10; 

    
    while (tempNum != 0) {
        firstDigit = tempNum % 10; 
        digits++;
    }

    
    if (digits == 1) {
        printf("Swapped number: %d\n", num);
        return;
    }

    // Calculate the swapped number
    swappedNum = lastDigit * pow(10, digits - 1) + (num % (int)pow(10, digits - 1)) / 10 * 10 + firstDigit;

    printf("Swapped number: %d\n" ,swappedNum);
}