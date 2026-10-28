#include <stdio.h>

int main(void)
{
    int n, i;
    double sum, term;

    while (scanf("%d", &n) == 1 && n > 0)
    {
        sum = 0.0;
        term = 1.0;

        for (i = 1; i <= n; i++)
        {
            term *= 3.0 / i;
            sum += term;
        }

        printf("SUM: %.6f\n", sum);
    }

    return 0;
}
