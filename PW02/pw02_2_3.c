#include <stdio.h>

int main(void)
{
    int dec = 10;
    int oct = 010;
    int hex = 0x10;
    float f = 0.1f;
    double d = 0.1;

    printf("DEC_10: %d\n", dec);
    printf("OCT_10: %d\n", oct);
    printf("HEX_10: %d\n", hex);

    printf("INT_SUFFIX: %zu %zu %zu %zu\n",
           sizeof(10), sizeof(10u), sizeof(10LL), sizeof(10ULL));

    printf("FLOAT_SUFFIX: %zu %zu %zu\n",
           sizeof(0.1f), sizeof(0.1), sizeof(0.1L));

    printf("FLOAT_EQ: %d\n", f == d);

    char ch = 'A';
    printf("CHAR_FORMS: %d %d %d\n", 'A', '\x41', '\101');
    printf("CHAR_LIT_VAR_STR: %zu %zu %zu\n",
           sizeof('A'), sizeof(ch), sizeof("A"));

    return 0;
}
