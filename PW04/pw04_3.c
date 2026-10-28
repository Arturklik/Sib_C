#include <stdio.h>

int main(void)
{
    int n;
    int i = 1;
    unsigned long long value = 1;

    scanf("%d", &n);
    printf("%llu", value);
    printf("\n");

    // i++ даёт старое i, ++i — новое; в условии цикла порядок влияет на число повторений.
    // Восьмой равен 10^21 и уже превышает максимум 64-битного беззнакового целого.
    while (i < n)
    {
        value *= 1000;
        printf("%llu", value);
        i++;
        printf("\n");
    }
    return 0;
}
