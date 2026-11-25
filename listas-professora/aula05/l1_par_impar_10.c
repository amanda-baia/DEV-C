/*
 * Arquivo:     l1_par_impar_10.c
 * Descricao:   Lista, questao 1 (Aula 5, slide 29). Le 10 inteiros, diz se
 *              cada um e par ou impar e, no fim, quantos pares e quantos
 *              impares foram digitados (dois contadores).
 *
 * Autora:      Amanda Baia
 * Disciplina:  Algoritmos e Pensamento Computacional - Profa. Joanacelle Caldas
 */

#include <stdio.h>

int main() {
    int numero;
    int pares = 0, impares = 0;

    for (int i = 1; i <= 10; i++) {
        printf("Numero %d: ", i);
        scanf("%d", &numero);

        if (numero % 2 == 0) {
            printf("  %d e par\n", numero);
            pares++;
        } else {
            printf("  %d e impar\n", numero);
            impares++;
        }
    }

    printf("\nPares: %d | Impares: %d\n", pares, impares);
    return 0;
}
