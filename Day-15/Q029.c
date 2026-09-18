/*
Question 29: Check whether a number is a palindrome.
*/

#include <stdio.h>
int main()
{
    int number, original, digit, reverse=0;
    printf("Enter a number: ");
    scanf("%d", &number);
    original = number;
    while (number != 0)
    {
        digit = number % 10;
        reverse = reverse * 10 + digit;
        number = number / 10;
    }
    if (original == reverse) printf("Palindrome number\n");
    else printf("Not a palindrome number\n");
    return 0;
}
