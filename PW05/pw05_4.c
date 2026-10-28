#include <stdio.h>

#define SIZE 8

int main(void)
{
    double arr[SIZE];
    int i;

    arr[0] = 1.0;

    for (i = 1; i < SIZE; i++)
    {
        arr[i] = arr[i - 1] * 2.0;
    }

    for (i = 0; i < SIZE; i++)
    {
        printf("%.2f ", arr[i]);
    }
    printf("\n");

    for (i = 1; i < SIZE; i++)
    {
        arr[i] += arr[i - 1];
    }

    for (i = 0; i < SIZE; i++)
    {
        printf("%.2f ", arr[i]);
    }
    printf("\n");

    return 0;
}
