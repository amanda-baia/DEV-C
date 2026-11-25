/*
 * Arquivo:     q09_mostrar_tabuada.c
 * Descricao:   Questao 9 (Aula 7, slide 27). Funcao mostrarTabuada que
 *              recebe um inteiro e exibe a tabuada de 1 a 10.
 *
 * Autora:      Amanda Baia
 * Disciplina:  Algoritmos e Pensamento Computacional - Profa. Joanacelle Caldas
 */

#include <stdio.h>

void mostrarTabuada(int numero);

int main() {
    int n;

    printf("Digite um numero: ");
    scanf("%d", &n);

    mostrarTabuada(n);
    return 0;
}

void mostrarTabuada(int numero) {
    for (int i = 1; i <= 10; i++) {
        printf("%d x %d = %d\n", numero, i, numero * i);
    }
}
