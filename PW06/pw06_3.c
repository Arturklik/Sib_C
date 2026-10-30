#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int n, tens, units;
    int count1 = 0, count2 = 0;
    double sum1 = 0.0, sum2 = 0.0;

    while (scanf("%d", &n) == 1 && n != 0)
    {
        tens = abs(n / 10 % 10);
        units = abs(n % 10);

        if (tens > units)
        {
            count1++;
            sum1 += n;
        }
        else if (units > tens)
        {
            count2++;
            sum2 += n;
        }
    }

    printf("TENS_GREATER_COUNT: %d\n", count1);
    if (count1 > 0)
        printf("TENS_GREATER_AVERAGE: %.6f\n", sum1 / count1);
    else
        printf("TENS_GREATER_AVERAGE: no data\n");

    printf("UNITS_GREATER_COUNT: %d\n", count2);
    if (count2 > 0)
        printf("UNITS_GREATER_AVERAGE: %.6f\n", sum2 / count2);
    else
        printf("UNITS_GREATER_AVERAGE: no data\n");

    return 0;
}
