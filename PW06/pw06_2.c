#include <stdio.h>
#include <wchar.h>
#include <locale.h>

int main(void)
{
    wint_t c;
    wint_t previous = 0;
    int count = 0;

    setlocale(LC_ALL, "");

    //getwchar() — широкий символ с учётом локали.
    while ((c = getwchar()) != L'#')
    {
        if (previous == L'е' && c == L'й')
            count++;

        previous = c;
    }

    wprintf(L"EY_COUNT: %d\n", count);

    return 0;
}
