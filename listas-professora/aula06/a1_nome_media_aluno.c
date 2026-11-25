/*
 * Arquivo:     a1_nome_media_aluno.c
 * Descricao:   Le o nome e a media de UM aluno e mostra os valores lidos
 *              (Aula 6, slide 14). O nome e um vetor de char.
 *
 * Autora:      Amanda Baia
 * Disciplina:  Algoritmos e Pensamento Computacional - Profa. Joanacelle Caldas
 */

#include <stdio.h>

int main() {
    char nome[50];       /* vetor de char: cada posicao guarda uma letra */
    float media;

    printf("Nome do aluno: ");
    scanf(" %49[^\n]", nome);
    printf("Media: ");
    scanf("%f", &media);

    printf("\nAluno: %s | Media: %.2f\n", nome, media);
    return 0;
}
