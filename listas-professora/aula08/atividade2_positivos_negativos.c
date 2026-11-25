/*
 * Arquivo:     atividade2_positivos_negativos.c
 * Descricao:   Atividade 2 (Aula 8, slide 23). Le 10 inteiros e separa em
 *              dois vetores: positivos E pares; negativos E impares.
 *              Mostra os dois conjuntos em ordem crescente (bubble sort).
 *
 * Cuidado:     em C, -3 % 2 da -1 (e nao 1). Por isso "impar" e testado
 *              com "% 2 != 0", que funciona para positivos e negativos.
 *
 * Autora:      Amanda Baia
 * Disciplina:  Algoritmos e Pensamento Computacional - Profa. Joanacelle Caldas
 */

#include <stdio.h>

void ordenarCrescente(int v[], int n);
void mostrar(int v[], int n);

int main() {
    int numero;
    int posPares[10], negImpares[10];
    int qp = 0, qn = 0;

    for (int i = 0; i < 10; i++) {
        printf("Valor %d: ", i + 1);
        scanf("%d", &numero);

        if (numero > 0 && numero % 2 == 0) {
            posPares[qp] = numero;
            qp++;
        } else if (numero < 0 && numero % 2 != 0) {
            negImpares[qn] = numero;
            qn++;
        }
    }

    ordenarCrescente(posPares, qp);
    ordenarCrescente(negImpares, qn);

    printf("\nPositivos e pares: ");
    mostrar(posPares, qp);
    printf("Negativos e impares: ");
    mostrar(negImpares, qn);

    return 0;
}

/* bubble sort: se o da frente for MAIOR, troca (fica do menor ao maior) */
void ordenarCrescente(int v[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - 1 - i; j++) {
            if (v[j] > v[j + 1]) {
                int aux = v[j];
                v[j] = v[j + 1];
                v[j + 1] = aux;
            }
        }
    }
}

void mostrar(int v[], int n) {
    if (n == 0) {
        printf("nenhum");
    }
    for (int i = 0; i < n; i++) {
        printf("%d ", v[i]);
    }
    printf("\n");
}
