#include <stdio.h>
#include <string.h>
#include <wchar.h>
#include <locale.h>

int main(void)
{
    const char text[] = "Сбой матрицы";
    const wchar_t wide_text[] = L"Сбой матрицы";

    setlocale(LC_ALL, "");

    printf("char -> sizeof: %zu bytes, strlen: %zu chars\n",
           sizeof(text), strlen(text));
    printf("wchar -> sizeof: %zu bytes, wcslen: %zu chars\n",
           sizeof(wide_text), wcslen(wide_text));

    return 0;
}
