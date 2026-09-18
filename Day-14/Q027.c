/*
Question 27: Find the sum of digits of an integer using a while loop.
*/

#include <stdio.h>
int main()
{
    int number, digit, sum=0;
    printf("Enter a positive integer: ");
    scanf("%d", &number);
    while (number != 0)
    {
        digit = number % 10;
        sum = sum + digit;
        number = number / 10;
    }
    printf("Sum of digits = %d\n", sum);
    return 0;
}
