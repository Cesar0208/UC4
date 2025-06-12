#include <stdio.h>

int main() {
    int opcao;
    float precoP, precoF;

    printf("Digite o preco do produto internacional: ");
    scanf("%f", &precoP);
    printf("Qual o tipo do produto?\n");
    printf("0 - Eletronico\n");
    printf("1 - Comida\n");
    printf("2 - Roupa\n");
    scanf("%d", &opcao);

    switch (opcao) {
    case 0:
        precoF = precoP * 1.1;
        printf("Com 10%% de aumento o valor ficara: %.2f.", precoF);
        break;
    
    default:
        precoF = precoP * 1.2;
        printf("Com 20%% de aumento o valor ficara: %.2f.", precoF);
        break;
    }
}