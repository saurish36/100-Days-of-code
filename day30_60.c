#include <stdio.h>

int main()
{
    int n, a[100];
    int positive = 0;
    int negative = 0;
    int zero = 0;

    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    for (int i = 0; i < n; i++)
    {
        if (a[i] > 0)
            positive++;
        else if (a[i] < 0)
            negative++;
        else
            zero++;
    }

    printf("Positive=%d, Negative=%d, Zero=%d",
           positive, negative, zero);

    return 0;
}
