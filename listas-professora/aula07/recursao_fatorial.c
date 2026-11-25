/*
 * Arquivo:     recursao_fatorial.c
 * Descricao:   Fatorial com recursao (Aula 7, slide 25: "Fatorial?").
 *              Ex.: 5! = 5 x 4 x 3 x 2 x 1 = 120.
 *
 * Recursao:    n! = n x (n - 1)!
 *              Caso base: 0! = 1 (e onde a recursao para).
 *              fatorial(3) = 3 x fatorial(2)
 *                          = 3 x 2 x fatorial(1)
 *                          = 3 x 2 x 1 x fatorial(0)
 *                          = 3 x 2 x 1 x 1 = 6
 *
 * Limite:      ate 12, porque 13! nao cabe num int.
 *
 * Autora:      Amanda Baia
 * Disciplina:  Algoritmos e Pensamento Computacional - Profa. Joanacelle Caldas
 */

#include <stdio.h>

int fatorial(int n);

int main() {
    int n;

    do {
        printf("Numero (0 a 12): ");
        scanf("%d", &n);
    } while (n < 0 || n > 12);

    printf("%d! = %d\n", n, fatorial(n));
    return 0;
}

int fatorial(int n) {
    if (n == 0) {
        return 1;                      /* caso base */
    }
    return n * fatorial(n - 1);        /* chama a si mesma com um a menos */
}
