#include <stdio.h>

int main() {
    float precos_produtos[3] = {19.99, 45.50, 9.75};

    printf("Preco dos Produtos:\n");

    for (int i = 0; i < 3; i++) {
        printf("Produto %d: R$%.2f\n", i + 1, precos_produtos[i]);
    }

    precos_produtos[0] = precos_produtos[0] * 1.10;
    printf("\nNovo preco do produto 1 (10%% de aumento): R$%.2f", precos_produtos[0]);

    return 0;
}