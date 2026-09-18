/*
Question 22: Print numbers from n to 1 using a while loop.
*/

#include <stdio.h>
int main()
{
    int n;
    printf("Enter n: ");
    scanf("%d", &n);
    while (n >= 1)
    {
        printf("%d ", n);
        n--;
    }
    printf("\n");
    return 0;
}
