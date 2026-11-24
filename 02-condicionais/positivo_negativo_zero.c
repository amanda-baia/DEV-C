/*
 * Arquivo:     positivo_negativo_zero.c
 * Descricao:   Le um numero inteiro e informa se e positivo, negativo ou zero.
 * Conteudo:    if, else if, else
 *
 * Autora:      Amanda Baia
 * Disciplina:  Algoritmos e Pensamento Computacional
 * Professora:  Joanacelle Caldas
 * Curso:       Analise e Desenvolvimento de Sistemas - UNIPE
 */

#include <stdio.h>

int main() {

    /* Variaveis */
    int n;

    /* Inserir dados */
    printf("Insira um numero inteiro: ");
    scanf("%d", &n);

    /* Tres caminhos: o else pega o que sobrou (o zero) */
    if (n > 0) {
        printf("O numero eh positivo\n");
    } else if (n < 0) {
        printf("O numero eh negativo\n");
    } else {
        printf("O numero eh igual a zero\n");
    }

    return 0;
}
