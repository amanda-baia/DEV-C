/*
 * Arquivo:     media_3notas.c
 * Descricao:   Le tres notas e mostra a media.
 * Conteudo:    varias variaveis na mesma linha, scanf com tres valores, precedencia
 *
 * Autora:      Amanda Baia
 * Disciplina:  Algoritmos e Pensamento Computacional
 * Professora:  Joanacelle Caldas
 * Curso:       Analise e Desenvolvimento de Sistemas - UNIPE
 * Data:        13/11/2026
 */

#include <stdio.h>

int main (){

    /* variaveis */

    float n1, n2, n3;

    /* leitura*/
    printf("Insira as tres notas para descobrir a media:");
    scanf("%f %f %f", &n1, &n2, &n3);

   /* calculo */

   printf("O valor da media eh: %.1f \n", (n1+n2+n3)/3);


    return 0;
}