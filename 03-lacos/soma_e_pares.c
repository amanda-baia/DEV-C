/*
 * Arquivo:     soma_e_pares.c
 * Descricao:   Le 5 numeros e mostra a soma de todos e quantos sao pares.
 * Conteudo:    acumulador (+ n), contador (+ 1), if dentro do for
 *
 * Autora:      Amanda Baia
 * Disciplina:  Algoritmos e Pensamento Computacional
 * Professora:  Joanacelle Caldas
 * Curso:       Analise e Desenvolvimento de Sistemas - UNIPE
 */

#include <stdio.h>

int main() {

    int pares = 0, soma = 0, n;     /* contador e cofrinho comecam em 0 */

    /* Leia 5 numeros */
    for (int i = 1; i <= 5; i++) {

        printf("Insira o %do valor: ", i);
        scanf("%d", &n);
        soma = soma + n;            /* acumulador: soma o valor lido */

        if (n % 2 == 0) {
            pares = pares + 1;      /* contador: conta so os pares */
        }
    }

    printf("Pares: %d\n", pares);
    printf("Soma: %d\n", soma);

    return 0;
}
