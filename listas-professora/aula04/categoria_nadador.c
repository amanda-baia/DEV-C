/*
 * Arquivo:     categoria_nadador.c
 * Descricao:   Classifica um nadador pela idade (Aula 4, slides 10 e 11):
 *              Infantil A (5-7), Infantil B (8-10), Juvenil A (11-13),
 *              Juvenil B (14-17) e Senior (mais de 17).
 *
 * Autora:      Amanda Baia
 * Disciplina:  Algoritmos e Pensamento Computacional - Profa. Joanacelle Caldas
 */

#include <stdio.h>

int main() {
    int idade;

    printf("Digite a idade do nadador: ");
    scanf("%d", &idade);

    if (idade >= 5 && idade <= 7) {
        printf("Nadador de idade %d e da categoria Infantil A\n", idade);
    } else if (idade >= 8 && idade <= 10) {
        printf("Nadador de idade %d e da categoria Infantil B\n", idade);
    } else if (idade >= 11 && idade <= 13) {
        printf("Nadador de idade %d e da categoria Juvenil A\n", idade);
    } else if (idade >= 14 && idade <= 17) {
        printf("Nadador de idade %d e da categoria Juvenil B\n", idade);
    } else if (idade > 17) {
        printf("Nadador de idade %d e da categoria Senior\n", idade);
    } else {
        printf("Idade %d: abaixo da idade minima (5 anos).\n", idade);
    }

    return 0;
}
