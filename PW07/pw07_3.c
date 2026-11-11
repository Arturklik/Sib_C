#include <stdio.h>

double cube_sum(double a, double b)
{
    double sum = a + b;

    return sum * sum * sum;
}

int main(void)
{
    double a, b;

    while (scanf("%lf %lf", &a, &b) == 2)
        printf("RESULT: %.4f\n", cube_sum(a, b));

    return 0;
}
