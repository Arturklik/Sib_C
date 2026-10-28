#include <stdio.h>
#include <math.h>

double calc(double a, double b)
{
    return fabs(a - b) / (a + b);
}

int main(void)
{
    double a, b;

    while (scanf("%lf %lf", &a, &b) == 2)
    {
        printf("%.4f\n", calc(a, b));
    }

    return 0;
}
