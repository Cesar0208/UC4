#include <stdio.h>

int main() {
    float valor, soma;
    int num = 1;

    while (1) {
        printf("Digite o valor da sua %d compra: ", num);
        scanf("%f", &valor);
        if (valor == 0) {
            printf("O valor total deu: R$%.2f", soma);
            return 0;
        }
        soma += valor;
        num++;
    }

}