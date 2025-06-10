#include <stdio.h>
#include <math.h>

int main() {
    float a, b, c, delta, r1, r2;

    printf("Equacao de segundo grau. \n");
    printf("Digite o coeficiente A: ");
    scanf("%f", &a);
    printf("Digite o coeficiente B: ");
    scanf("%f", &b);
    printf("Digite o coeficiente C: ");
    scanf("%f", &c);

    delta = (pow(b, 2) - 4 * a * c);

    if (delta < 0) {
        printf("A equacao nao tem raizes reais.");
    }
    if (delta == 0) {
        r1 = (-b + sqrt(delta))/(2 * a);
        printf("A equacao tem 1 raiz real: %.1f", r1);
    }
    if (delta > 0) {
        r1 = (-b + sqrt(delta))/(2 * a);
        printf("A equacao tem raiz real: %.1f\n", r1);
        r2 = (-b - sqrt(delta))/(2 * a);
        printf("A equacao tem raiz real: %.1f", r2);
    }
    
    return 0;
}