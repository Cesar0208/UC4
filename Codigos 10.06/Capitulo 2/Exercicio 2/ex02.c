#include <stdio.h>

int main() {
    char letra1, letra2, letra3;

    printf("Digite a primeira letra: ");
    scanf(" %c", &letra1);
    printf("Digite a segunda letra: ");
    scanf(" %c", &letra2);
    printf("Digite a terceira letra: ");
    scanf(" %c", &letra3);

    printf("A sequencia na ordem inversa e: %c-%c-%c", letra3, letra2, letra1);
    return 0;
}