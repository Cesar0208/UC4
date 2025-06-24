#include <stdio.h>

int main() {
    int num, i;

    printf("Digite um numero para ver sua tabela: ");
    scanf("%d", &num);
    for (i = 0; i <= 10; i++) {
        printf("%d * %d = %d\n", num, i, num * i);
    }
}