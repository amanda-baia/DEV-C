/*
 * Arquivo:     a2_trinta_alunos.c
 * Descricao:   Usando vetores, le o nome e a media de 30 alunos e depois
 *              mostra a lista com nomes e medias (Aula 6, slides 20 e 21).
 *
 * Logica:      dois vetores "paralelos": nome[i] e media[i] sao do mesmo
 *              aluno (mesma posicao i). Para testar com menos alunos,
 *              basta mudar QTD.
 *
 * Autora:      Amanda Baia
 * Disciplina:  Algoritmos e Pensamento Computacional - Profa. Joanacelle Caldas
 */

#include <stdio.h>

#define QTD 30

int main() {
    char nome[QTD][50];     /* 30 nomes de ate 49 letras */
    float media[QTD];

    for (int i = 0; i < QTD; i++) {
        printf("Nome do aluno %d: ", i + 1);
        scanf(" %49[^\n]", nome[i]);
        printf("Media de %s: ", nome[i]);
        scanf("%f", &media[i]);
    }

    printf("\n===== LISTA DE ALUNOS =====\n");
    for (int i = 0; i < QTD; i++) {
        printf("%2d. %-20s %.2f\n", i + 1, nome[i], media[i]);
    }

    return 0;
}
