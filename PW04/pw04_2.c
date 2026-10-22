#include <stdio.h>
#include <stdint.h>

int main(void)
{
    int16_t x1, x2, y1, y2; //Соответствует short на mac, весит 16 бит 
    int32_t dx, dy;
    long long result;

    scanf("%hd %hd %hd %hd", &x1, &x2, &y1, &y2);

    dx = (int32_t)x2 - x1;//(приведение к int32_t) по условию
    dy = (int32_t)y2 - y1;
    result = (long long)dx * dx + (long long)dy * dy;//Максимум `int32_t` равен 2147483647

    printf("RESULT: %lld\n", result);
    printf("INT16_T: %llu\n", (unsigned long long)sizeof(int16_t));
    printf("INT32_T: %llu\n", (unsigned long long)sizeof(int32_t));
    printf("LONG_LONG: %llu\n", (unsigned long long)sizeof(long long));
    printf("UNSIGNED_LONG_LONG: %llu\n", (unsigned long long)sizeof(unsigned long long));

    return 0;
}
