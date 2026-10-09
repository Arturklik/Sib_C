#include <stdio.h>
#include <string.h>

int main(void)
{
    char text1[20] = "SibSUTIS";
    char text2[20] = "СибГУТИ";

    printf("SIZEOF: %zu\n", sizeof(text1));
    printf("STRLEN: %zu\n", strlen(text1));
    printf("FREE_BYTES: %zu\n", sizeof(text1) - strlen(text1) - 1);

    printf("SIZEOF: %zu\n", sizeof(text2));
    printf("STRLEN: %zu\n", strlen(text2));
    printf("FREE_BYTES: %zu\n", sizeof(text2) - strlen(text2) - 1);

    return 0;
}
