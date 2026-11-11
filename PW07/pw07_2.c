#include <stdio.h>
#include <ctype.h>

int main(void)
{
    int c;
    int count = 0, total = 0;

    while ((c = getchar()) != EOF)
    {
        total++;

        if (isxdigit(c))
            count++;
    }

    printf("HEX_DIGITS: %d\n", count);
    printf("TOTAL: %d\n", total);

    return 0;
}
