#include <stdio.h>

int main() {
    float num1, num2, num3;

    printf("Digite o primeiro numero: ");
    scanf("%f", &num1);
    printf("Digite o segundo numero: ");
    scanf("%f", &num2);
    printf("Digite o terceiro numero: ");
    scanf("%f", &num3);

    if (num1 >= num2 && num1 >= num3) {
        printf("O primeiro numero e o maior.");
    }
    else if (num2 >= num1 && num2 >= num3) {
        printf("O segundo numero e maior");
    }
    else {
        printf("O terceiro numero e maior.");
    }
}