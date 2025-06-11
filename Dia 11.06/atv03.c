#include<stdio.h>

int main(){
    int idade = 45;
    float altura = 1.95;
    char genero = 'F';
    double preco = 15.49;

    printf("Idade: %d\n", idade);
    printf("Altura: %.2f\n", altura);
    printf("Genero: %c\n", genero);
    printf("Preco:%.2lf\n", preco);

    return 0;
}