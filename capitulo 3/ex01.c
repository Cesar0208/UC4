#include <stdio.h>

int main() {
    int num;

    printf("Digite um numero: ");
    scanf("%d", &num);

    if (num == 0){
        printf("Esse numero e nulo.");
    }
    else if (num > 0) {
        printf("Esse numero e positivo.");
    }
    else {
        printf("Esse numero e negativo");
    }
}