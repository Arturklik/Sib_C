#include <stdio.h>
#include <string.h>

int main(void)
{
    // Коды \x задают буквы Hello и World (у нас же выходные данные известны), \t — табуляцию.
    char text[] = "\x48\x65\x6C\x6C\x6F\t\x57\x6F\x72\x6C\x64\n";

    printf("%s", text);
    printf("STRLEN: %zu\n", strlen(text));
    printf("SIZEOF: %zu\n", sizeof(text));

    return 0;
}
