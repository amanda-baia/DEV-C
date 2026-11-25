/*
 * Arquivo:     q03_maior_numero.c
 * Descricao:   Questao 3 (Aula 7, slide 26). Funcao maiorNumero que recebe
 *              dois inteiros e devolve o maior (se forem iguais, devolve
 *              qualquer um).
 *
 * Autora:      Amanda Baia
 * Disciplina:  Algoritmos e Pensamento Computacional - Profa. Joanacelle Caldas
 */

#include <stdio.h>

int maiorNumero(int a, int b);

int main() {
    int x, y;

    printf("Digite dois numeros: ");
    scanf("%d %d", &x, &y);

    printf("O maior e %d\n", maiorNumero(x, y));
    return 0;
}

int maiorNumero(int a, int b) {
    if (a >= b) {
        return a;        /* se forem iguais, cai aqui tambem */
    }
    return b;
}
