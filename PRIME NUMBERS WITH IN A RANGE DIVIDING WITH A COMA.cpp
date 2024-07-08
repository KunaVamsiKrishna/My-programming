#include <stdio.h>

int main()
{
    int u, l;
    // upper range and lower range
    scanf("%d%d", &u, &l);

    int a[1000], k = 0;

    for (int i = u; i <= l; i++)
    {
        int fact = 0;
        for (int j = 2; j <= i / 2; j++)
        {
            if (i % j == 0)
            {
                fact++;
                break;
            }
        }
        if (fact == 0 && i != 1)
        {
            a[k] = i;
            k++;
        }
    }

    if (k > 0)
    {
        printf("%d", a[0]);
        for (int i = 1; i < k; i++)
        {
            printf(",%d", a[i]);
        }
    }
    else
    {
        printf("No prime numbers in the given range");
    }

    return 0;
}

