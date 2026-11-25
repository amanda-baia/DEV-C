/*
 * Arquivo:     q2_cofrinho_digital.c
 * Descricao:   Questao 2 (Aula 5, slide 26). Cofrinho digital: o usuario
 *              adiciona moedas de R$ 0,50, R$ 1,00 ou R$ 2,00 quantas
 *              vezes quiser. Ao parar, mostra o total acumulado.
 *
 * Autora:      Amanda Baia
 * Disciplina:  Algoritmos e Pensamento Computacional - Profa. Joanacelle Caldas
 */

#include <stdio.h>

int main() {
    int opcao;
    float total = 0;

    do {
        printf("\n1 - R$ 0,50 | 2 - R$ 1,00 | 3 - R$ 2,00 | 0 - Parar\n");
        printf("Moeda: ");
        scanf("%d", &opcao);

        if (opcao == 1) {
            total = total + 0.50;
        } else if (opcao == 2) {
            total = total + 1.00;
        } else if (opcao == 3) {
            total = total + 2.00;
        } else if (opcao != 0) {
            printf("Opcao invalida!\n");
        }

        if (opcao != 0) {
            printf("Saldo atual: R$ %.2f\n", total);
        }
    } while (opcao != 0);

    printf("\nTotal acumulado no cofrinho: R$ %.2f\n", total);
    return 0;
}
