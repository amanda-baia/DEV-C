/*
 * Arquivo:     q05_eh_par.c
 * Descricao:   Questao 5 (Aula 7, slide 26). Funcao ehPar que devolve 1 se
 *              o numero for par e 0 se for impar. A main usa o resultado.
 *
 * Lembrete:    em C, 1 = verdadeiro (sim) e 0 = falso (nao).
 *
 * Autora:      Amanda Baia
 * Disciplina:  Algoritmos e Pensamento Computacional - Profa. Joanacelle Caldas
 */

#include <stdio.h>

int ehPar(int numero);

int main() {
    int n;

    printf("Digite um numero: ");
    scanf("%d", &n);

    if (ehPar(n) == 1) {
        printf("%d e PAR\n", n);
    } else {
        printf("%d e IMPAR\n", n);
    }

    return 0;
}

int ehPar(int numero) {
    if (numero % 2 == 0) {
        return 1;
    }
    return 0;
}
