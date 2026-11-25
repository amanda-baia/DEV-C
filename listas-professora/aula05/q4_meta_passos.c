/*
 * Arquivo:     q4_meta_passos.c
 * Descricao:   Questao 4 (Aula 5, slide 28). Le os passos dados a cada
 *              hora e para quando o total atingir ou passar de 10.000.
 *              Informa quantas horas foram necessarias.
 *
 * Autora:      Amanda Baia
 * Disciplina:  Algoritmos e Pensamento Computacional - Profa. Joanacelle Caldas
 */

#include <stdio.h>

int main() {
    int passos;
    int total = 0;
    int horas = 0;

    while (total < 10000) {
        printf("Passos na hora %d: ", horas + 1);
        scanf("%d", &passos);
        total = total + passos;
        horas++;
    }

    printf("\nMeta atingida! Total: %d passos em %d hora(s).\n", total, horas);
    return 0;
}
