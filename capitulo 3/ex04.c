#include <stdio.h>

int main() {
    int opcao;

    printf("Escolha um numero entre 1 e 4: ");
    scanf("%d", &opcao);

    switch (opcao) {
    case 1:
        printf("Voce e uma pessoa legal.");
        break;

    case 2:
        printf("Voce deve estudar bastante.");
        break;

    case 3:
        printf("Voce consegue, confie no seu potencial.");
        break;

    case 4:
        printf("Seja sempre feliz.");
        break;
    
    default:
    printf("Escolha uma opcao valida");
        break;
    }
}