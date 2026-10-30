#include <stdio.h>

int main(void)
{
    double volume;
    double cost1 = 0.0, cost2 = 0.0, cost3 = 0.0;

    printf("STORAGE_GB: ");
    if (scanf("%lf", &volume) != 1 || volume < 0)
    {
        printf("Invalid volume\n");
        return 0;
    }

    if (volume <= 10)
    {
        cost1 = volume;
    }
    else if (volume <= 60)
    {
        cost1 = 10;
        cost2 = (volume - 10) * 0.8;
    }
    else
    {
        cost1 = 10;
        cost2 = 50 * 0.8;
        cost3 = (volume - 60) * 0.5;
    }

    printf("STORAGE_GB: %.2f\n", volume);
    printf("0-10 GB (1.00/GB): %.2f\n", cost1);
    printf("10-60 GB (0.80/GB): %.2f\n", cost2);
    printf("ABOVE 60 GB (0.50/GB): %.2f\n", cost3);
    printf("TOTAL_COST: %.2f\n", cost1 + cost2 + cost3);

    return 0;
}
