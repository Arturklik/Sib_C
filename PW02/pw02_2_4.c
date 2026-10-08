#include <stdio.h>
#include <limits.h>

int main(void)
{
    printf("INT_MIN: %d\n", INT_MIN);
    printf("INT_MAX: %d\n", INT_MAX);
    printf("UINT_MAX: %u\n", UINT_MAX);

    printf("RANGE_OK: %d\n", (unsigned int)INT_MAX * 2u + 1u == UINT_MAX);

    return 0;
}
//INT_MAX * 2 = 4294967294 - не помещаеся в int, поэтому при приведении к unsigned int происходит переполнение и результат сравнения с UINT_MAX будет false.
