/*2 - Um jovem quer juntar dinheiro e acompanhar o
saldo do seu cofrinho. Faça um programa que
simule um cofrinho digital. O usuário pode
adicionar moedas de R$0,50, R$1,00 ou R$2,00
quantas vezes quiser. Quando decidir parar, o
programa deve mostrar o total acumulado.

18/09/2026
*/

#include <stdio.h>

int main() {
    float total = 0.0;
    int opcao;

    do {
    	//Organizar o cofrinho e suas moedas.
    	
        printf("\n--- Cofrinho Digital ---\n");
        printf("1 - Adicionar moeda de R$0,50\n");
        printf("2 - Adicionar moeda de R$1,00\n");
        printf("3 - Adicionar moeda de R$2,00\n");
        printf("0 - Parar e ver o saldo\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);

        if (opcao == 1) {
            total = total + 0.50;
            printf("Moeda de R$0,50 adicionada!\n");

        } else if (opcao == 2) {
            total = total + 1.00;
            printf("Moeda de R$1,00 adicionada!\n");

        } else if (opcao == 3) {
            total = total + 2.00;
            printf("Moeda de R$2,00 adicionada!\n");

        } else if (opcao == 4) {
            printf("Encerrando o cofrinho...\n");

        } else {
            printf("Opcao nao valida! Tente novamente.\n");
        }


//A verificacao de continuacao vai continuar aparecendo ate a opcao 4 ser selecionada:
    } while (opcao != 4);

//Para colocar 2 valores após a vírgula, utilizar %.2f (f de float, pontos flutuantes)

    printf("\n Valor total acumulado no cofrinho: R$ %.2f\n", total);

    return 0;
}
