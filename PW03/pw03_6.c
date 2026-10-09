#include <stdio.h>

int main(void)
{
    char text[100];
    int width;

    if (scanf("%99s %d", text, &width) != 2)
        return 0;

    printf("%*s\n", width, text);
    printf("%-*s\n", width + 5, text);

    return 0;
}
