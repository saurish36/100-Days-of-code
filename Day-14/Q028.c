/*
Question 28: Reverse the digits of an integer using a while loop.
*/

#include <stdio.h>
int main()
{
    int number, digit, reverse=0;
    printf("Enter an integer: ");
    scanf("%d", &number);
    while (number != 0)
    {
        digit = number % 10;
        reverse = reverse * 10 + digit;
        number = number / 10;
    }
    printf("Reverse = %d\n", reverse);
    return 0;
}
