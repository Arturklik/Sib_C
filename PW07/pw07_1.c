#include <stdio.h>
#include <locale.h>
#include <wchar.h>
#include <wctype.h>

int main(void)
{
    wint_t c, letter;

    setlocale(LC_ALL, "");

    while ((c = getwchar()) != WEOF)
    {
        letter = towlower(c);

        if (iswalpha(c) && letter != L'a' && letter != L'e' &&
            letter != L'i' && letter != L'o' && letter != L'u' &&
            letter != L'а' && letter != L'е' && letter != L'ё' &&
            letter != L'и' && letter != L'о' && letter != L'у' &&
            letter != L'ы' && letter != L'э' && letter != L'ю' &&
            letter != L'я' && letter != L'ь' && letter != L'ъ')
            putwchar(L'#');
        else
            putwchar(c);
    }

    return 0;
}
