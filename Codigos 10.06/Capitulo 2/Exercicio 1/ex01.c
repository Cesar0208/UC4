#include <stdio.h>

int main() {
    float velocidade, distancia, tempo; 

    printf("Bem vindo ao calculo de velocidade\n");
    printf("Digite a distancia em Km: ");
    scanf("%f", &distancia);
    printf("Digite o tempo em horas: ");
    scanf("%f", &tempo);

    velocidade = distancia / tempo;

    printf("A velocidade media vale: %.2f.", velocidade);

    return 0;
}