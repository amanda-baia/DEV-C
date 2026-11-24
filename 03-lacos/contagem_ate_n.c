/*
 * Arquivo:     contagem_ate_n.c
 * Descricao:   Le um numero N e mostra os numeros de 1 ate N.
 * Conteudo:    laco for
 *
 * Autora:      Amanda Baia
 * Disciplina:  Algoritmos e Pensamento Computacional
 * Professora:  Joanacelle Caldas
 * Curso:       Analise e Desenvolvimento de Sistemas - UNIPE
 */

#include <stdio.h>

int main() {
    int n;

    /* Leia o n (antes do laco: o for precisa saber ate onde ir) */
    printf("Insira um valor limite: ");
    scanf("%d", &n);

    /* Laco: comeca no 1, repete enquanto i <= n, soma 1 a cada volta */
    for (int i = 1; i <= n; i++) {
        printf("%d\n", i);
    }

    return 0;
}
