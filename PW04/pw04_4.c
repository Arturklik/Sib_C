#include <stdio.h>

int main(void)
{
    int n;
    int i = 1;
    double value, max;

    scanf("%d", &n);
    scanf("%lf", &max);

    // += прибавляет число к сумме, *= умножает произведение на число.
    while (i < n)
    {
        scanf("%lf", &value);

        while (value > max)
        {
            max = value;
        }

        i++;
    }

    printf("MAX: %.6f\n", max);

    return 0;
}
