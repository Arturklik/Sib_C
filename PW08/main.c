#include <stdio.h>
#include "myarrfunc.h"

#define MAX_SIZE 100

int main(void)
{
    int array[MAX_SIZE];
    size_t indices[MAX_SIZE];
    size_t n = 0, count;
    int filled = 0;
    int size, k, m, status;
    long long sum;
    char choice;

    while (1)
    {
        puts("\na Задать размер массива\n"
             "b Заполнить массив\n"
             "c Показать значения и адреса\n"
             "d Найти сумму элементов с индексами от k до m\n"
             "e Найти индексы элементов со значениями от k до m\n"
             "f Найти индексы элементов выше среднего\n"
             "g Выход");
        printf("Выберите пункт: ");

        status = read_choice(&choice);
        if (status == EOF)
            break;
        if (status != 1)
        {
            puts("Неверный пункт меню.");
            continue;
        }

        if (choice == 'g')
            break;

        if (choice >= 'b' && choice <= 'f' && n == 0)
        {
            puts("Сначала задайте размер массива.");
            continue;
        }
        if (choice >= 'c' && choice <= 'f' && !filled)
        {
            puts("Сначала заполните массив.");
            continue;
        }

        switch (choice)
        {
            case 'a':
                printf("Размер массива (1-%d): ", MAX_SIZE);
                status = read_int(&size);
                if (status == EOF)
                    break;
                if (status != 1 || size < 1 || size > MAX_SIZE)
                    puts("Неверный размер.");
                else
                {
                    n = (size_t)size;
                    filled = 0;
                }
                break;

            case 'b':
                status = fill_array(array, n);
                if (status == 1)
                    filled = 1;
                break;

            case 'c':
                print_array(array, n);
                break;

            case 'd':
                puts("Введите границы индексов по одной на строку.");
                status = read_range(&k, &m);
                if (status == EOF)
                    break;
                if (status != 1 || !sum_in_index_range(array, n, k, m, &sum))
                    puts("Неверный диапазон индексов.");
                else
                    printf("Сумма: %lld\n", sum);
                break;

            case 'e':
                puts("Введите границы значений по одной на строку.");
                status = read_range(&k, &m);
                if (status == EOF)
                    break;
                if (status != 1 || k > m)
                    puts("Неверный диапазон значений.");
                else
                {
                    count = indices_in_value_range(array, n, k, m, indices);
                    print_indices(indices, count);
                }
                break;

            case 'f':
                count = indices_above_average(array, n, indices);
                print_indices(indices, count);
                break;

            default:
                puts("Неверный пункт меню.");
        }

        if (status == EOF)
            break;
    }

    return 0;
}
