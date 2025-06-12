#include <stdio.h>

int main() {
    int opcao;
    float raio, base, altura, area;

    printf("Escolha uma forma geometrica para saber sua area\n");
    printf("1 - Circulo\n");
    printf("2 - Retangulo\n");
    printf("Escolha sua opcao: ");
    scanf("%d", &opcao);

    switch (opcao){
        case 1:
            printf("Informe o raio do circulo: ");
            scanf("%f", &raio);
            area = 3.1415 * (raio * raio);
            printf("Area vale: %.2f.", area);

            break;
        
        case 2:
            printf("Informe a base: ");
            scanf("%f", &base);
            printf("Informe a altura: ");
            scanf("%f", &altura);
            area = base * altura;
            printf("A area vale: %.2f", area);

            break;

        default:
            printf("Digite uma opcao valida.");
    }
}