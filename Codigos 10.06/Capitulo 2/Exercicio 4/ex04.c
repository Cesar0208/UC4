#include <stdio.h>

int main() {
    int a = 1;
    int b = 3;
    int aux;

    printf("A = %d\n", a);
    printf("B = %d\n", b);

    aux = a;
    a = b;
    b = aux;

    printf("A = %d\n", a);
    printf("B = %d", b);

    return 0;
}