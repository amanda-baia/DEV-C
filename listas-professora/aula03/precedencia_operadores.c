/*
 * Arquivo:     precedencia_operadores.c
 * Descricao:   Precedencia e associatividade (Aula 3, slides 20 e 21).
 *              Calcula as 5 expressoes do slide e mostra o resultado.
 *
 * Lembretes:   - * e / vem antes de + e -;
 *              - * e / tem a mesma prioridade: resolve da ESQUERDA para a
 *                DIREITA (associatividade);
 *              - inteiro / inteiro descarta a parte decimal (5/2 = 2);
 *                com um numero decimal (5.0/2) o resultado e 2.5.
 *
 * Autora:      Amanda Baia
 * Disciplina:  Algoritmos e Pensamento Computacional - Profa. Joanacelle Caldas
 */

#include <stdio.h>

int main() {
    float x;

    x = 1 + 2;
    printf("1) X = 1+2         -> %.2f\n", x);              /* 3 */

    x = 10 + 5.0 / 2;
    printf("2) X = 10+5.0/2    -> %.2f\n", x);              /* 10 + 2.5 = 12.5 */

    x = 1 + 2 * 2;
    printf("3) X = 1+2*2       -> %.2f\n", x);              /* 1 + 4 = 5 */

    x = 1 + 2.0 / 2 * 2;
    printf("4) X = 1+2.0/2*2   -> %.2f\n", x);              /* 1 + (1.0 * 2) = 3 */

    x = 2 * 3 + 1 - 5 * 2;
    printf("5) X = 2*3+1-5*2   -> %.2f\n", x);              /* 6 + 1 - 10 = -3 */

    /* comparacao: o mesmo calculo so com inteiros */
    printf("\nSo com inteiros:\n");
    printf("10+5/2  = %d  (5/2 vira 2)\n", 10 + 5 / 2);     /* 12 */
    printf("1+2/2*2 = %d\n", 1 + 2 / 2 * 2);                /* 1 + (1*2) = 3 */

    return 0;
}
