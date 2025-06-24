#include <stdio.h>

int main() {
    int num;

    do {
        printf("\nDigite um numero (negativo para sair): ");
        scanf("%d", &num);
        printf("\nNumero digitado = %d", num);
    } while (num > 0);
}