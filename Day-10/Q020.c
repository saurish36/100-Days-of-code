/*
Question 20: Use relational and logical operators to check whether a number is between 10 and 50.
*/

#include <stdio.h>
int main()
{
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);
    if (number >= 10 && number <= 50)
        printf("Number is between 10 and 50.\n");
    else
        printf("Number is outside the range.\n");
    return 0;
}
