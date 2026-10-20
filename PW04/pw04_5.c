#include <stdio.h>

double v_to_mv(double v)
{
    const double factor = 1000.0;

    return v * factor;
}

int main(void)
{
    double value;

    while (scanf("%lf", &value) == 1)
    {
        printf("%.2f mV\n", v_to_mv(value));
    }

    return 0;
}
