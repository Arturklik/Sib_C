#include <stdio.h>

int main(void)
{
    char text[100];
    int width;

    scanf("%99s %d", text, &width);


    printf("%*s\n", width, text);
    printf("%-*s\n", width + 5, text);

    return 0;
}
