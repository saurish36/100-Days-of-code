#include <stdio.h>

int main()
{
    long long n;
    int freq[10] = {0};

    scanf("%lld", &n);

    if (n < 0)
        n = -n;

    if (n == 0)
        freq[0] = 1;

    while (n > 0)
    {
        int digit = n % 10;

        freq[digit]++;

        n = n / 10;
    }

    int most = 0;

    for (int i = 1; i < 10; i++)
    {
        if (freq[i] > freq[most])
        {
            most = i;
        }
    }

    printf("%d", most);

    return 0;
}
