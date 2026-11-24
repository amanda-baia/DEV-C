/*
 * Arquivo:     tabuada.c
 * Descricao:   Le um numero e mostra a sua tabuada de 1 a 10.
 * Conteudo:    laco for, conta dentro do laco
 *
 * Autora:      Amanda Baia
 * Disciplina:  Algoritmos e Pensamento Computacional
 * Professora:  Joanacelle Caldas
 * Curso:       Analise e Desenvolvimento de Sistemas - UNIPE
 */

#include <stdio.h>

int main() {
    int n;

    /* Leia o n */
    printf("Insira o valor da tabuada que voce quer: ");
    scanf("%d", &n);

    /* A conta fica dentro do laco porque muda a cada volta (o i muda) */
    for (int i = 1; i <= 10; i++) {
        printf("%d * %d = %d\n", n, i, n * i);
    }

    return 0;
}
