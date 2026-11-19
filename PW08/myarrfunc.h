#ifndef MYARRFUNC_H
#define MYARRFUNC_H

#include <stddef.h>

int read_choice(char *choice);
int read_int(int *value);
int read_range(int *k, int *m);

int fill_array(int *arrptr, size_t n);
void print_array(const int *arrptr, size_t n);
void print_indices(const size_t *indices, size_t count);

int sum_in_index_range(const int *arrptr, size_t n, int k, int m, long long *sum);
size_t indices_in_value_range(const int *arrptr, size_t n, int k, int m, size_t *indices);
size_t indices_above_average(const int *arrptr, size_t n, size_t *indices);

#endif
