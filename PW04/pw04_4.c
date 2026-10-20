#include <stdio.h>

int main(void)
{
    int n;
    int i = 1;
    double value, max;

    if (scanf("%d", &n) != 1 || n <= 0)
        return 0;

    if (scanf("%lf", &value) != 1)
        return 0;

    max = value;

    // += прибавляет число к сумме, *= умножает произведение на число.
    while (i < n)
    {
        if (scanf("%lf", &value) != 1)
            return 0;

        if (value > max)
            max = value;

        i++;
    }

    printf("MAX: %.6f\n", max);

    return 0;
}
