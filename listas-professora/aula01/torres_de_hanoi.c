/*
 * Arquivo:     torres_de_hanoi.c
 * Descricao:   Torres de Hanoi (Aula 1, slides 12 a 15). Mostra os passos
 *              para mover n discos da haste A (inicial) para a haste C
 *              (final), usando B como auxiliar. Regras: mover um disco por
 *              vez e nunca colocar um disco maior sobre um menor.
 *              Obs.: o slide 15 pede em Python; aqui esta feito em C.
 *
 * Logica:      recursao. Para mover n discos de A para C:
 *              1) move os n-1 de cima de A para B (usando C);
 *              2) move o maior disco (Dn) de A para C;
 *              3) move os n-1 de B para C (usando A).
 *              Caso base: com 0 discos, nao ha nada a fazer.
 *
 * Autora:      Amanda Baia
 * Disciplina:  Algoritmos e Pensamento Computacional - Profa. Joanacelle Caldas
 */

#include <stdio.h>

void hanoi(int n, char origem, char destino, char auxiliar);

int main() {
    int n;

    do {
        printf("Quantos discos? (1 a 10): ");
        scanf("%d", &n);
    } while (n < 1 || n > 10);

    printf("\nPassos para %d discos:\n", n);
    hanoi(n, 'A', 'C', 'B');

    return 0;
}

/* move n discos de "origem" para "destino" usando "auxiliar" */
void hanoi(int n, char origem, char destino, char auxiliar) {
    if (n == 0) {
        return;                                  /* caso base */
    }
    hanoi(n - 1, origem, auxiliar, destino);     /* tira os de cima */
    printf("Mover D%d de %c -> %c.\n", n, origem, destino);
    hanoi(n - 1, auxiliar, destino, origem);     /* coloca de volta por cima */
}
