/*
 * Arquivo:     soma_1_ate_n.c
 * Descricao:   Le um numero N e mostra a soma 1 + 2 + ... + N.
 * Conteudo:    acumulador (cofrinho) com + i
 *
 * Autora:      Amanda Baia
 * Disciplina:  Algoritmos e Pensamento Computacional
 * Professora:  Joanacelle Caldas
 * Curso:       Analise e Desenvolvimento de Sistemas - UNIPE
 */

#include <stdio.h>

int main() {

    int n;
    int soma = 0;       /* cofrinho comeca vazio */

    printf("Informe o valor de n: ");
    scanf("%d", &n);

    /* Em cada degrau, coloca o proprio degrau (i) no cofrinho */
    for (int i = 1; i <= n; i++) {
        soma = soma + i;
    }

    /* Fora do laco: mostra o resultado uma vez so */
    printf("Soma: %d\n", soma);

    return 0;
}
