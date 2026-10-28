#include <stdio.h>

#define HEIGHT 5

int main(void)
{
    int i, j;

    for (i = 1; i <= HEIGHT / 2; i++)
    {
        for (j = 0; j < HEIGHT / 2; j++)
            printf(" ");

        for (j = 0; j < i; j++)
            printf(">");

        printf("\n");
    }

    for (j = 0; j < HEIGHT; j++)
        printf(">");

    printf("\n");

    for (i = HEIGHT / 2; i >= 1; i--)
    {
        for (j = 0; j < HEIGHT / 2; j++)
            printf(" ");

        for (j = 0; j < i; j++)
            printf(">");

        printf("\n");
    }

    return 0;
}
