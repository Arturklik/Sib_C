#include <stdio.h>
#include <math.h>

int main(void)
{
    int i = 1;
    double x;

    printf("N\tX\tY\n");

    for (x = 0.1; x <= 1.4; x += 0.2)
    {
        printf("%d\t%.4f\t%.4f\n", i, x, tan(x));
        i++;
    }

    return 0;
}
