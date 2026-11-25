/*
 * Arquivo:     l7_fatorial_validado.c
 * Descricao:   Lista, questao 7 (Aula 5, slide 31). Pede um inteiro de 0 a
 *              10 (repete ate ser valido) e mostra o fatorial.
 *              Exemplo: 5 -> 5! = 120. Lembrete: 0! = 1.
 *
 * Autora:      Amanda Baia
 * Disciplina:  Algoritmos e Pensamento Computacional - Profa. Joanacelle Caldas
 */

#include <stdio.h>

int main() {
    int n;

    do {
        printf("Numero entre 0 e 10: ");
        scanf("%d", &n);
        if (n < 0 || n > 10) {
            printf("Valor invalido!\n");
        }
    } while (n < 0 || n > 10);

    int fatorial = 1;                /* comeca em 1 (multiplicacao) */
    for (int i = 2; i <= n; i++) {
        fatorial = fatorial * i;
    }

    printf("%d! = %d\n", n, fatorial);
    return 0;
}
