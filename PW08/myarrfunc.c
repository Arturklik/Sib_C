#include "myarrfunc.h"
#include <ctype.h>
#include <errno.h>
#include <limits.h>
#include <stdio.h>
#include <stdlib.h>

static int read_line(char *line, size_t capacity)
{
    size_t length = 0;
    int c;
    int valid = 1;

    while ((c = getchar()) != '\n' && c != EOF)
    {
        if (length + 1 < capacity && c != '\0')
        {
            line[length] = (char)c;
            length++;
        }
        else
            valid = 0;
    }

    if (c == EOF && length == 0 && valid)
        return EOF;

    line[length] = '\0';
    return valid;
}

int read_choice(char *choice)
{
    char line[128], extra;
    int status = read_line(line, sizeof line);

    if (status != 1)
        return status;

    return sscanf(line, " %c %c", choice, &extra) == 1;
}

int read_int(int *value)
{
    char line[128];
    char *end;
    long number;
    int status = read_line(line, sizeof line);

    if (status != 1)
        return status;

    errno = 0;
    number = strtol(line, &end, 10);
    if (end == line || errno == ERANGE || number < INT_MIN || number > INT_MAX)
        return 0;

    while (isspace((unsigned char)*end))
        end++;

    if (*end != '\0')
        return 0;

    *value = (int)number;
    return 1;
}

int read_range(int *k, int *m)
{
    int status;

    printf("k: ");
    status = read_int(k);
    if (status != 1)
        return status;

    printf("m: ");
    return read_int(m);
}

int fill_array(int *arrptr, size_t n)
{
    int status;

    for (size_t i = 0; i < n; i++)
    {
        printf("a[%zu]: ", i);
        while ((status = read_int(arrptr + i)) == 0)
            printf("Введите целое число для a[%zu]: ", i);

        if (status == EOF)
            return EOF;
    }

    return 1;
}

void print_array(const int *arrptr, size_t n)
{
    for (size_t i = 0; i < n; i++)
        printf("a[%zu] = %d, адрес = %p\n", i, *(arrptr + i), (void *)(arrptr + i));
}

void print_indices(const size_t *indices, size_t count)
{
    if (count == 0)
    {
        puts("Подходящих элементов нет.");
        return;
    }

    printf("Индексы:");
    for (size_t i = 0; i < count; i++)
        printf(" %zu", *(indices + i));
    puts("");
}

int sum_in_index_range(const int *arrptr, size_t n, int k, int m, long long *sum)
{
    if (k < 0 || m < k || (size_t)m >= n)
        return 0;

    *sum = 0;
    for (size_t i = (size_t)k; i <= (size_t)m; i++)
        *sum += *(arrptr + i);

    return 1;
}

size_t indices_in_value_range(const int *arrptr, size_t n, int k, int m, size_t *indices)
{
    size_t count = 0;

    for (size_t i = 0; i < n; i++)
    {
        if (*(arrptr + i) >= k && *(arrptr + i) <= m)
        {
            *(indices + count) = i;
            count++;
        }
    }

    return count;
}

size_t indices_above_average(const int *arrptr, size_t n, size_t *indices)
{
    long long sum = 0;
    double average;
    size_t count = 0;

    if (n == 0)
        return 0;

    for (size_t i = 0; i < n; i++)
        sum += *(arrptr + i);
    average = (double)sum / n;

    for (size_t i = 0; i < n; i++)
    {
        if (*(arrptr + i) > average)
        {
            *(indices + count) = i;
            count++;
        }
    }

    return count;
}
