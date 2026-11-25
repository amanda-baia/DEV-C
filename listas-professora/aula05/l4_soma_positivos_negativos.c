/*
 * Arquivo:     l4_soma_positivos_negativos.c
 * Descricao:   Lista, questao 4 (Aula 5, slide 30). Le inteiros ate o
 *              usuario digitar 0. No fim mostra a soma e a quantidade dos
 *              positivos e dos negativos. O zero nao conta como nenhum.
 *
 * Autora:      Amanda Baia
 * Disciplina:  Algoritmos e Pensamento Computacional - Profa. Joanacelle Caldas
 */

#include <stdio.h>

int main() {
    int numero;
    int somaPos = 0, somaNeg = 0;
    int qtdPos = 0, qtdNeg = 0;

    do {
        printf("Numero (0 para terminar): ");
        scanf("%d", &numero);

        if (numero > 0) {
            somaPos = somaPos + numero;
            qtdPos++;
        } else if (numero < 0) {
            somaNeg = somaNeg + numero;
            qtdNeg++;
        }
    } while (numero != 0);

    printf("\nPositivos: %d numero(s), soma = %d\n", qtdPos, somaPos);
    printf("Negativos: %d numero(s), soma = %d\n", qtdNeg, somaNeg);
    return 0;
}
