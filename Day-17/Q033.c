/*
Question 33: Use break to stop printing when the number reaches 6.
*/

#include <stdio.h>
int main()
{
    int i;
    for (i=1; i<=10; i++)
    {
        if (i == 6) break;
        printf("%d ", i);
    }
    printf("\n");
    return 0;
}
