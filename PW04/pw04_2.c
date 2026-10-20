#include <stdio.h>
#include <stdint.h>

int main(void)
{
    int16_t x1, x2, y1, y2;
    int32_t dx, dy;
    long long result;

    if (scanf("%hd %hd %hd %hd", &x1, &x2, &y1, &y2) != 4)
        return 0;

    dx = (int32_t)x2 - x1;
    dy = (int32_t)y2 - y1;
    result = (long long)dx * dx + (long long)dy * dy;

    printf("RESULT: %lld\n", result);
    printf("INT16_T: %llu\n", (unsigned long long)sizeof(int16_t));
    printf("INT32_T: %llu\n", (unsigned long long)sizeof(int32_t));
    printf("LONG_LONG: %llu\n", (unsigned long long)sizeof(long long));
    printf("UNSIGNED_LONG_LONG: %llu\n",
           (unsigned long long)sizeof(unsigned long long));

    return 0;
}
