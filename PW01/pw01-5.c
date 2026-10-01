#include <stdio.h>

int main(void) {
    int reactor_core = 12;
    int doubled = reactor_core * 2;
    int squared = reactor_core * reactor_core;

    printf("[");
    printf("%d", reactor_core);
    printf(", ");
    printf("%d", doubled);
    printf(", ");
    printf("%d", squared);
    printf("]\n");

    return 0;
}
