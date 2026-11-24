/*
 * Arquivo:     media_notas_laco.c
 * Descricao:   Le 5 notas e mostra a media.
 * Conteudo:    acumulador float, calculo depois do laco
 *
 * Autora:      Amanda Baia
 * Disciplina:  Algoritmos e Pensamento Computacional
 * Professora:  Joanacelle Caldas
 * Curso:       Analise e Desenvolvimento de Sistemas - UNIPE
 */

#include <stdio.h>

int main() {
    float n;
    float media;
    float soma = 0;     /* cofrinho */

    /* Laco */
    for (int i = 1; i <= 5; i++) {
        printf("Insira o valor %d: ", i);
        scanf("%f", &n);
        soma = soma + n;
    }

    /* A media e calculada depois de todas as notas entrarem */
    media = soma / 5;

    printf("A media eh de: %.1f\n", media);

    return 0;
}
