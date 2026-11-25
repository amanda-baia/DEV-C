/*
 * Arquivo:     atividade3_tres_numeros.c
 * Descricao:   Tres numeros A, B e C (Aula 4, slide 20). Sem ordenar e sem
 *              funcoes auxiliares, informa: maior, menor, intermediario,
 *              se ha repetidos, se os tres sao iguais e se estao em ordem
 *              crescente ou decrescente. So comparacoes condicionais.
 *
 * Autora:      Amanda Baia
 * Disciplina:  Algoritmos e Pensamento Computacional - Profa. Joanacelle Caldas
 */

#include <stdio.h>

int main() {
    int a, b, c;
    int maior, menor, meio;

    printf("Digite A, B e C: ");
    scanf("%d %d %d", &a, &b, &c);

    /* maior */
    if (a >= b && a >= c) {
        maior = a;
    } else if (b >= a && b >= c) {
        maior = b;
    } else {
        maior = c;
    }

    /* menor */
    if (a <= b && a <= c) {
        menor = a;
    } else if (b <= a && b <= c) {
        menor = b;
    } else {
        menor = c;
    }

    /* intermediario: o que esta entre o menor e o maior */
    if ((a >= b && a <= c) || (a <= b && a >= c)) {
        meio = a;
    } else if ((b >= a && b <= c) || (b <= a && b >= c)) {
        meio = b;
    } else {
        meio = c;
    }

    printf("\nMaior: %d\n", maior);
    printf("Menor: %d\n", menor);
    printf("Intermediario: %d\n", meio);

    if (a == b && b == c) {
        printf("Os tres valores sao IGUAIS.\n");
    } else if (a == b || a == c || b == c) {
        printf("Existem valores REPETIDOS.\n");
    } else {
        printf("Nao existem valores repetidos.\n");
    }

    if (a < b && b < c) {
        printf("Estao em ordem CRESCENTE.\n");
    } else if (a > b && b > c) {
        printf("Estao em ordem DECRESCENTE.\n");
    } else {
        printf("Nao estao em ordem crescente nem decrescente.\n");
    }

    return 0;
}
