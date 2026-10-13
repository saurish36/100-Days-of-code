#include <stdio.h>

int main()
{
    int n, a[100], target;
    int index = -1;

    scanf("%d", &n);

    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);

    scanf("%d", &target);

    for (int i = 0; i < n; i++)
    {
        if (a[i] == target)
        {
            index = i;
            break;
        }
    }

    if (index == -1)
        printf("-1");
    else
        printf("Found at index %d", index);

    return 0;
}
