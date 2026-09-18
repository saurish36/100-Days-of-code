/*
Question 25: Print even numbers from 100 to 200.
*/

#include <stdio.h>
int main()
{
    int i;
    printf("Even numbers from 100 to 200 are:\n");
    for (i=100; i<=200; i++)
    {
        if (i % 2 == 0)
            printf("%d ", i);
    }
    printf("\n");
    return 0;
}
