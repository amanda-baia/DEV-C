/*
 * Arquivo:     a5_pesquisa_no_vetor.c
 * Descricao:   Le 10 inteiros num vetor e pesquisa um numero (Aula 6,
 *              slide 28). Informa se foi encontrado, quantas vezes
 *              aparece e em quais posicoes (contando a partir de 0, como
 *              no exemplo do slide).
 *
 * Exemplo:     Array: 5 8 3 8 2 8 1 4 6 8 | numero 8
 *              -> encontrado 4 vezes, posicoes 1, 3, 5, 9
 *
 * Autora:      Amanda Baia
 * Disciplina:  Algoritmos e Pensamento Computacional - Profa. Joanacelle Caldas
 */

#include <stdio.h>

int main() {
    int v[10];
    int busca;
    int vezes = 0;

    for (int i = 0; i < 10; i++) {
        printf("Numero %d: ", i + 1);
        scanf("%d", &v[i]);
    }

    printf("Digite um numero para pesquisar: ");
    scanf("%d", &busca);

    /* 1a passada: conta */
    for (int i = 0; i < 10; i++) {
        if (v[i] == busca) {
            vezes++;
        }
    }

    if (vezes == 0) {
        printf("O numero %d NAO foi encontrado.\n", busca);
        return 0;
    }

    printf("O numero %d foi encontrado %d vez(es).\n", busca, vezes);

    /* 2a passada: mostra as posicoes, separadas por virgula */
    printf("Posicoes: ");
    int mostrados = 0;
    for (int i = 0; i < 10; i++) {
        if (v[i] == busca) {
            if (mostrados > 0) {
                printf(", ");
            }
            printf("%d", i);
            mostrados++;
        }
    }
    printf("\n");

    return 0;
}
