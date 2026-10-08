#include <stdio.h>
#include <stdint.h>

int main(void)
{
    int input;
    scanf("%d", &input);

    uint8_t x = (uint8_t)input;

    uint8_t add  = x + 10; //чтобы при входе 250 получилось ADD: 4, нужно 250 + 10 = 260.
    uint8_t mul2 = x * 2;
    uint8_t sqr  = x * x;

    printf("ADD: %u\n", (unsigned int)add);
    printf("MUL2: %u\n", (unsigned int)mul2);
    printf("SQR: %u\n", (unsigned int)sqr);

    return 0;
}
