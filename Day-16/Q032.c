/*
Question 32: Use a do-while loop to print numbers from 1 to n.
*/

#include <stdio.h>
int main()
{
    int n, i=1;
    printf("Enter n: ");
    scanf("%d", &n);
    if (n >= 1)
    {
        do
        {
            printf("%d ", i);
            i++;
        } while (i <= n);
    }
    printf("\n");
    return 0;
}
