#include <stdio.h>

int main(void)
{
    int n;
    int i = 0;
    unsigned long long value = 1;

    if (scanf("%d", &n) != 1)
        return 0;

    if (n < 1 || n > 7)
    {
        printf("N must be from 1 to 7\n");
        return 0;
    }

    // i++ даёт старое i, ++i — новое; при i = 0 условие i++ < n даёт n повторений.
    while (i++ < n)
    {
        printf("%llu", value);
        if (i < n)
        {
            printf(" ");
            value *= 1000;
        }
    }
    printf("\n");

    return 0;
}
