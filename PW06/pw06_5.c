#include <stdio.h>

int main(void)
{
    int choice, status, c, i;
    int bits[32];
    unsigned int number;

    while (1)
    {
        printf("1. dec -> hex\n"
               "2. dec -> oct\n"
               "3. dec -> bin\n"
               "4. hex -> dec\n"
               "0. Exit\n");

        status = scanf("%d", &choice);
        if (status == EOF)
            break;

        if (status != 1 || choice < 0 || choice > 4)
        {
            printf("Invalid choice\n");
            while ((c = getchar()) != '\n' && c != EOF)
                ;
            continue;
        }

        if (choice == 0)
            break;

        printf("NUMBER: ");
        if (choice == 4)
            status = scanf("%x", &number);
        else
            status = scanf("%u", &number);
        if (status == EOF)
            break;

        if (status != 1)
        {
            printf("Invalid number\n");
            while ((c = getchar()) != '\n')
                ;
            continue;
        }

        switch (choice)
        {
            case 1:
                printf("HEX: %X\n", number);
                break;
            case 2:
                printf("OCT: %o\n", number);
                break;
            case 3:
                i = 0;
                do
                {
                    bits[i] = number % 2;
                    number /= 2;
                    i++;
                }
                while (number > 0);

                printf("BIN: ");
                while (i > 0)
                {
                    i--;
                    printf("%d", bits[i]);
                }
                printf("\n");
                break;
            case 4:
                printf("DEC: %u\n", number);
                break;
        }
    }

    return 0;
}
