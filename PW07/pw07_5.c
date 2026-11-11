#include <stdio.h>

int prime_recursive(int n, int divisor)
{
    if (n < 2)
        return 0;

    if (divisor > n / divisor)
        return 1;

    if (n % divisor == 0)
        return 0;

    return prime_recursive(n, divisor + 1);
}

int prime_iterative(int n)
{
    int i;

    if (n < 2)
        return 0;

    for (i = 2; i <= n / i; i++)
    {
        if (n % i == 0)
            return 0;
    }

    return 1;
}

int main(void)
{
    int n;

    if (scanf("%d", &n) != 1)
    {
        printf("Invalid input\n");
        return 0;
    }

    if (prime_recursive(n, 2))
        printf("RECURSIVE: prime\n");
    else
        printf("RECURSIVE: not prime\n");

    if (prime_iterative(n))
        printf("ITERATIVE: prime\n");
    else
        printf("ITERATIVE: not prime\n");

    return 0;
}
