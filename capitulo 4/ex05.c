#include <stdio.h>

int main() {
    int idade, maiorIdade = 0, mulheres = 0, salarioPequeno = 0;
    char sexo;
    float salario, somaSalario = 0, quantidadeSalario;

    while (1) {
        printf("Bem vindo a coleta de informacoes.\n");
        printf("Digite sua idade (0 para finalizar o sistema): ");
        scanf(" %d", &idade);

        if (idade != 0) {
            if (idade > maiorIdade) {
                maiorIdade = idade;
            }
        } else {
            break;
        }
        
        printf("Digite o seu sexo (M/F): ");
        scanf(" %c", &sexo);
        if(sexo == 'f' || sexo == 'F'){
            mulheres++; 
        }

        printf("Digite o seu salario: R$");
        scanf(" %f", &salario);
        somaSalario += salario;
        quantidadeSalario++;
        if (salario < 500) {
            salarioPequeno++;
        }
    }

    printf("=====================================");
    printf("Mostrando os dados relevantes.\n");
    printf("A maior idade digitada foi: %d.\n", maiorIdade);
    printf("A media salarial digitada foi: %.2f.\n", somaSalario / quantidadeSalario);
    printf("A quantidade de mulheres foi: %d.\n", mulheres);
    printf("A quantidade de salarios menor que R$500 foi: %d.", salarioPequeno);
}