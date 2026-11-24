/*
 * Arquivo:     par_impar.c
 * Descricao:   Le um numero inteiro e informa se e par ou impar.
 * Conteudo:    if/else, operador % (resto da divisao)
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

    /* Par: o resto da divisao por 2 e zero */
    if (n % 2 == 0) {
        printf("O numero eh par\n");
    } else {
        printf("O numero eh impar\n");
    }

    return 0;
}
