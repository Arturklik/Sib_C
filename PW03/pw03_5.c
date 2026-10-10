#include <stdio.h>

int main(void)
{
    char letter;

    scanf(" %c", &letter); 
    // &letter передаёт адресс переменной дл записи. 

    char upper = letter - 'a' + 'A';
    char next = letter + 1;
    char prev = letter - 1;

    printf("CODE_DEC: %d\n", letter);
    printf("CODE_HEX: %x\n", (unsigned int)letter);
    printf("CODE_OCT: %o\n", (unsigned int)letter);
    printf("UPPER: %c\n", upper);
    printf("NEXT: %c\n", next);
    printf("PREV: %c\n", prev);

    return 0;
}
