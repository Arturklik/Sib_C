#include <stdio.h>
#include <ctype.h>
#include <locale.h>

int main(void)
{
    int c, letter;

    setlocale(LC_CTYPE, "ru_RU.CP1251");

    while ((c = getchar()) != EOF)
    {
        letter = tolower(c);

        if (isalpha(c) && letter != 'a' && letter != 'e' &&
            letter != 'i' && letter != 'o' && letter != 'u' &&
            letter != 'а' && letter != 'е' && letter != 'ё' &&
            letter != 'и' && letter != 'о' && letter != 'у' &&
            letter != 'ы' && letter != 'э' && letter != 'ю' &&
            letter != 'я' && letter != 'ь' && letter != 'ъ')
            putchar('#');
        else
            putchar(c);
    }

    return 0;
}
//если обяективно была задача "Заменить все согласные буквы на символ '#'" а про то что там с гласными будет никто ничего не сказал.