/*
 * Arquivo:     notas_vetor.c
 * Descricao:   Guarda 5 notas num vetor, mostra todas e calcula a media.
 * Conteudo:    vetor, indice comecando em 0, acumulador
 *
 * Autora:      Amanda Baia
 * Disciplina:  Algoritmos e Pensamento Computacional
 * Professora:  Joanacelle Caldas
 * Curso:       Analise e Desenvolvimento de Sistemas - UNIPE
 */

#include <stdio.h>

int main() {

    float notas[5];             /* 5 gavetas: notas[0] ate notas[4] */
    float media = 0, soma = 0;

    /* 1o laco: guardar cada nota na gaveta i */
    for (int i = 0; i < 5; i++) {
        printf("Informe a nota %d: ", i + 1);
        scanf("%f", &notas[i]);
    }

    /* 2o laco: mostrar e somar (as notas continuam guardadas) */
    for (int i = 0; i < 5; i++) {
        printf("Nota %d: %.1f\n", i + 1, notas[i]);
        soma = soma + notas[i];
    }

    media = soma / 5;           /* depois do laco */

    printf("Media: %.1f\n", media);

    return 0;
}
