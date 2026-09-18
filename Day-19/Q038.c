/*
Question 38: Find the sum of all multiples of 3 or 5 below a user-entered limit.
*/

#include <stdio.h>
int main()
{
    int limit, i, sum=0;
    printf("Enter upper limit: ");
    scanf("%d", &limit);
    for (i=1; i<limit; i++)
    {
        if (i % 3 == 0 || i % 5 == 0)
            sum = sum + i;
    }
    printf("Sum = %d\n", sum);
    return 0;
}
