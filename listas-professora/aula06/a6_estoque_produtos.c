/*
 * Arquivo:     a6_estoque_produtos.c
 * Descricao:   Estoque de 10 produtos num vetor (Aula 6, slide 29).
 *              Mostra a quantidade de cada produto, os de estoque baixo
 *              (menos de 5), os esgotados (0), quantos tem mais de 20
 *              unidades e qual tem a maior quantidade.
 *
 * Obs.:        os produtos sao numerados de 1 a 10 (posicao + 1).
 *              Um produto esgotado (0) tambem e estoque baixo; aqui ele
 *              aparece so na lista de esgotados, para nao repetir.
 *
 * Autora:      Amanda Baia
 * Disciplina:  Algoritmos e Pensamento Computacional - Profa. Joanacelle Caldas
 */

#include <stdio.h>

int main() {
    int qtd[10];

    for (int i = 0; i < 10; i++) {
        do {
            printf("Quantidade do produto %d: ", i + 1);
            scanf("%d", &qtd[i]);
        } while (qtd[i] < 0);
    }

    printf("\n--- Quantidades ---\n");
    for (int i = 0; i < 10; i++) {
        printf("Produto %d: %d unidade(s)\n", i + 1, qtd[i]);
    }

    printf("\nEstoque baixo (menos de 5): ");
    for (int i = 0; i < 10; i++) {
        if (qtd[i] > 0 && qtd[i] < 5) {
            printf("%d ", i + 1);
        }
    }

    printf("\nEsgotados: ");
    for (int i = 0; i < 10; i++) {
        if (qtd[i] == 0) {
            printf("%d ", i + 1);
        }
    }

    int maisDe20 = 0;
    int posMaior = 0;                  /* comeca achando que o 1o e o maior */
    for (int i = 0; i < 10; i++) {
        if (qtd[i] > 20) {
            maisDe20++;
        }
        if (qtd[i] > qtd[posMaior]) {
            posMaior = i;
        }
    }

    printf("\nProdutos com mais de 20 unidades: %d\n", maisDe20);
    printf("Maior estoque: produto %d (%d unidades)\n", posMaior + 1, qtd[posMaior]);

    return 0;
}
