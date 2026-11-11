#include <stdio.h>

void sort_numbers(double *a, double *b, double *c)
{
    double temp;

    if (*a > *b)
    {
        temp = *a;
        *a = *b;
        *b = temp;
    }

    if (*a > *c)
    {
        temp = *a;
        *a = *c;
        *c = temp;
    }

    if (*b > *c)
    {
        temp = *b;
        *b = *c;
        *c = temp;
    }
}

int main(void)
{
    double a, b, c;

    if (scanf("%lf %lf %lf", &a, &b, &c) != 3)
    {
        printf("Invalid input\n");
        return 0;
    }

    printf("BEFORE: %.4f %.4f %.4f\n", a, b, c);
    sort_numbers(&a, &b, &c);
    printf("AFTER: %.4f %.4f %.4f\n", a, b, c);

    return 0;
}
