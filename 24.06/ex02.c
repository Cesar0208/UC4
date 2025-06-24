#include <stdio.h>

int main() {
    int vendas_filiais[3][4] = {
        {10000, 12000, 11000, 13000},
        {8000, 9500, 10500, 11000},
        {15000, 14000, 16000, 17000}
    };

    printf("Vendas mensais por filial:\n");

    for (int i = 0; i < 3; i++) {
        printf("Filial %d:\n", i + 1);

        for (int j = 0; j < 4; j++) {
            printf("    Mes %d: %d\n", j + 1, vendas_filiais[i][j]);
        }
    }

    int total_vendas_filial2 = 0;
    for (int j = 0; j < 4; j++) {
        total_vendas_filial2 += vendas_filiais [1][j]; 
    }
    printf("\nTotal de vendas da Filial 2: %d\n", total_vendas_filial2);

    int total_vendas_mes3 = 0;
    for (int i = 0; i < 3; i++) {
        total_vendas_mes3 += vendas_filiais[i][2];
    }
    printf("Total de vendas do Mes 3 (todas as filiais): %d\n", total_vendas_mes3);
    
    return 0;
}