#include <stdio.h>
#include <stdbool.h>

int main(void)
{
    int a, b;

    scanf("%d %d", &a, &b);

    bool module_ready = a;
    bool fault_state  = b;

    printf("MODULE_READY: %d\n", module_ready);
    printf("FAULT_STATE: %d\n", fault_state);
    printf("BOOL_SIZE: %zu\n", sizeof(bool)); //size_t %zu сам выбирает формат в зависимости от платформы

    printf("FLAGS_SUM: %d\n", module_ready + fault_state);

    return 0;
}
