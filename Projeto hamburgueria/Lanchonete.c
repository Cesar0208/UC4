#include <stdio.h>
#include <stdlib.h>
#include <windows.h> //Para sleep (tempo de espera) e limpar tela

int main() { 
    int opcao1, opcao2, opcao3, opcao4, opcao5, opcao6, opcao7;
    float valorTotal = 0;
    char notaFiscal[1000] = "";

    while (1) { //repetir o codigo inteiro
        printf("______________________________________\n");
        printf("| Bem vindo a Lanchonete Tibias Food |\n");
        printf("______________________________________\n");
        printf("1 - Combos\n");
        printf("2 - Hamburgues\n");
        printf("3 - Batata Fritas\n");
        printf("4 - Bebidas\n");
        printf("5 - Pagar\n");
        printf("6 - Avaliacoes\n");
        printf("0 - Sair\n");
        printf("Escolha sua opcao: ");
        scanf ("%d",&opcao1);
        
        switch(opcao1){
            case 1:
                system("cls");//limpar parte de cima
                printf("Menu de Combos\n");  
    	        printf("1- Combo Avassalador ----- R$54,99\n");
                printf("2- Combo Guerreiro --------- R$24,24\n");
                printf("3- Combo Troia ----------- R$224,99\n");
                printf("4- VOLTAR\n"); 
                printf("Escolha sua opcao: ");
                scanf("%d", &opcao2);

                switch(opcao2){
                    case 1:
                        printf("Opcao escolhida. Preco: R$54,99.");
                        valorTotal += 54.90;
                        strcat(notaFiscal, "Combo Avassalador - R$54,99\n");
                        break;
                    case 2:
                        printf("Opcao escolhida. Preco: R$24,24.");
                        valorTotal += 24.24; 
                        strcat(notaFiscal, "Combo Guerreiro - R$24,24\n");
                        break;
                    case 3:
                        printf("Opcao escolhida. Preco: R$224,99.");
                        valorTotal += 224.99;
                        strcat(notaFiscal, "Combo Troia - R$224,99\n");
                        break;
                    case 4:
                        break;
                }
                Sleep(1000);
                system("cls");
                break;

            case 2:
                system("cls");
                printf("Menu de hamburgue\n");     
                printf("1- X TIBIA ----- R$24,90\n");
                printf("2- X BOMBA ----- R$18,90\n");
                printf("3- X KID ------- R$16,90\n");
                printf("4- VOLTAR\n");
                printf("Escolha sua opcao: ");
                scanf("%d", &opcao3);

                switch(opcao3){
                    case 1:
                        printf("Opcao escolhida. Preco: R$24,90."); 
                        valorTotal += 24.24; 
                        strcat(notaFiscal, "X TIBIA - R$24,90\n");
                        break;
                    case 2:
                        printf("Opcao escolhida. Preco: R$18,90.");
                        valorTotal += 18.90;
                        strcat(notaFiscal, "X BOMBA - R$18,90\n");
                        break;
                    case 3:
                        printf("Opcao escolhida. Preco: R$16,90.");
                        valorTotal += 16.90;
                        strcat(notaFiscal, "X KID - R$16,90\n");
                        break;
                    case 4:
                        break;
                }
                Sleep(1000);
                system("cls");
                break;

            case 3: 
                system("cls");
                printf("Menu de batata fritas\n");  
                printf("1- Batata frita tradicional ------------- R$26,90\n");  
                printf("2- batata frita com bacon e queijo ------ R$36,90\n");  
                printf("3- Batata frita com calabresa e queijo -- R$46,90\n");  
                printf("4- VOLTAR\n");  
                printf("Escolha sua opcao: ");
                scanf("%d", &opcao4);

                switch(opcao4){
                    case 1:
                        printf("Opcao escolhida. Preco: R$26,90.");
                        valorTotal += 26.90;
                        strcat(notaFiscal, "Batata frita tradicional - R$26,90\n");
                        break;
                    case 2:
                        printf("Opcao escolhida. Preco: R$36,90.");
                        valorTotal += 36.90;
                        strcat(notaFiscal, "Batata frita com bacon e queijo - R$36,90\n");
                        break;
                    case 3:
                        printf("Opcao escolhida. Preco: R$46,90."); 
                        valorTotal += 46.90;
                        strcat(notaFiscal, "Batata frita com calabresa e queijo - R$46,90\n");
                        break;
                    case 4:
                        break;
                }
                Sleep(1000);
                system("cls");
                break;

            case 4: 
                system("cls");
                printf("Menu de Bebidas\n");  
                printf("1- Coca KS ----------- R$30,10\n");  
                printf("2- Guarana antartida - R$6,90\n");  
                printf("3- CHOPP ------------- R$29,90\n"); 
                printf("4- VOLTAR\n");  
                printf("Escolha sua opcao: ");
                scanf("%d", &opcao5);

                switch(opcao5){
                    case 1:
                        printf("Opcao escolhida. Preco: R$30,10");
                        valorTotal += 30.10;
                        strcat(notaFiscal, "Coca KS - R$30,10\n");
                        break;
                    case 2:
                        printf("Opcao escolhida. Preco: R$6,90.");
                        valorTotal += 6.90;
                        strcat(notaFiscal, "Guarana Antartica - R$6,90\n");
                        break;
                    case 3:
                        printf("Opcao escolhida. Preco: R$29,90.");
                        valorTotal += 29.90;
                        strcat(notaFiscal, "CHOPP - R$29,90\n");
                        break;
                    case 4:
                        break;
                }
                Sleep(1000);
                system("cls");
                break;

            case 5: 
                system("cls");
                printf("Pagamentos\n"); 
                printf("%s", notaFiscal);
                printf("---------------------------------------\n");
                printf("Valor total = R$%.2f\n", valorTotal);  
                printf("1- Pix\n");  
                printf("2- Credito\n");  
                printf("3- Debito\n");  
                printf("4- VOLTAR\n"); 
                printf("Escolha sua opcao: ");
                scanf("%d", &opcao6);

                switch(opcao6){
                    case 1:
                        printf("Gerar qr code e mostrar ao cliente\n");
                        printf("Obrigado pela preferencia");
                        return 0;
                    case 2:
                        printf("Pegar a maquina e passar o cartao\n");
                        printf("Obrigado pela preferencia");
                        return 0;
                    case 3:
                        printf("Pegar a maquina e passar o cartao\n");
                        printf("Obrigado pela preferencia");
                        return 0;
                    case 4:
                        break;
                }
                Sleep(1000);
                system("cls");
                break;

            case 6: 
                system("cls");
                printf("Avaliacao\n");  
                printf("1- BOM\n");  
                printf("2- PERFEITO\n");  
                printf("3- MAGNIFICO\n");  
                printf("4- VOLTAR\n");
                printf("Escolha sua opcao: "); 
                scanf("%d", &opcao7);

                switch(opcao7){
                    case 1:
                        printf("Obrigado pela avaliacao.");
                        break;
                    case 2:
                        printf("Obrigado pela otima avaliacao.");
                        break;
                    case 3:
                        printf("Obrigado pela avaliacao maravilhosa.");
                        break;
                    case 4:
                        break;
                }
                Sleep(1000);
                system("cls");
                break;

            case 0: 
                printf("OBRIGADO!!!!!!!");        
                return 0;  

            default:
                printf("Escolha uma opcao valida.\n");
        } 
    }
}
