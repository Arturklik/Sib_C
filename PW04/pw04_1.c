#include <stdio.h>

#define MM_PER_CM 10

int main(void)
{
    int mm;

    while (scanf("%d", &mm) == 1 && mm > 0)
    {
        // При делении двух целых дробная часть отбрасывается по правилам C.
        printf("%d cm %d mm\n", mm / MM_PER_CM, mm % MM_PER_CM);
    }

    return 0;
}
