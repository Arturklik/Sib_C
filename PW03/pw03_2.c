#include <stdio.h>
#include <string.h>

int main(void)
{
    char word1[15];
    char word2[15];

    scanf("%s %s", word1, word2);
//(Незабыть) нам важно условие "считывает два слова" я понимаю что если вписать 3 то они просто будет проигнорированны но всёже ?

    printf("%s-%s\n", word1, word2);
    printf("TOTAL_LEN: %zu\n", strlen(word1) + strlen(word2));

    return 0;
}
