#include <stdio.h>

int main(void)
{
    int n;
    int i = 1;
    unsigned long long value = 1;

    scanf("%d", &n);
    printf("%llu", value);

    // i++ даёт старое i, ++i — новое; в условии цикла порядок влияет на число повторений.
    while (i < n)
    {
        value *= 1000;
        printf(" %llu", value);
        i++;
    }
    printf("\n");

    return 0;
}
