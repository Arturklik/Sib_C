#include <stdio.h>

int main(void)
{
    printf("START\b\b\bOP \b"); //\b только двигает курсор влево, не стирает.
    printf("\a\n");

    return 0;
}
