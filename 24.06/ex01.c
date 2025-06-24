#include <stdio.h>

int main() {
    int pontuacoes_clientes[5];
    int soma_pontuacoes = 0;
    int i;

    pontuacoes_clientes[0] = 90;
    pontuacoes_clientes[1] = 75;
    pontuacoes_clientes[2] = 100;
    pontuacoes_clientes[3] = 80;
    pontuacoes_clientes[4] = 95;

    printf("Pontuacao de Clientes:\n");
    printf("Cliente 1 (Indice 0): %d.\n", pontuacoes_clientes[0]);
    printf("Cliente 2 (Indice 1): %d.\n", pontuacoes_clientes[1]);
    printf("Cliente 3 (Indice 2): %d.\n", pontuacoes_clientes[2]);
    printf("Cliente 4 (Indice 3): %d.\n", pontuacoes_clientes[3]);
    printf("Cliente 5 (Indice 4): %d.\n", pontuacoes_clientes[4]);

    for (i = 0; i < 5; i++) {
        soma_pontuacoes += pontuacoes_clientes[i];
    }

    double media_pontuacoes = (double)soma_pontuacoes / 5;

    printf("\nMedia de pontuacoes: %.2f\n", media_pontuacoes);

    return 0;
}