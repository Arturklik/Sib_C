#include <stdio.h>
#include <ctype.h>

int main(void)
{
    int c;
    int count = 0;

    while ((c = getchar()) != '#' && c != EOF)
    {
        if (c > 100 && (isprint(c) || iscntrl(c)))
            count++;
    }

    printf("ASCII_ABOVE_100: %d\n", count);

    return 0;
}
