/*
 * Arquivo:     a3_matriz_3x3.c
 * Descricao:   Gera uma matriz 3x3 de inteiros e mostra os elementos da
 *              mesma linha separados por "-" e as linhas separadas por
 *              nova linha (Aula 6, slides 22 e 23). Usa os valores do
 *              exemplo do slide.
 *
 * Saida:       300 - 5 - 3
 *              4 - 10 - 3
 *              12 - 337 - 5
 *
 * Autora:      Amanda Baia
 * Disciplina:  Algoritmos e Pensamento Computacional - Profa. Joanacelle Caldas
 */

#include <stdio.h>

int main() {
    int tabela[3][3] = {
        {300, 5, 3},
        {4, 10, 3},
        {12, 337, 5}
    };

    for (int i = 0; i < 3; i++) {            /* linhas */
        for (int j = 0; j < 3; j++) {        /* colunas */
            printf("%d", tabela[i][j]);
            if (j < 2) {
                printf(" - ");               /* traco so ENTRE os elementos */
            }
        }
        printf("\n");                        /* fim da linha */
    }

    return 0;
}
