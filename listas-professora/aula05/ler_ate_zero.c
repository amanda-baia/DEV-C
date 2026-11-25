/*
 * Arquivo:     ler_ate_zero.c
 * Descricao:   Le numeros e mostra cada um na tela enquanto o valor for
 *              diferente de 0. Ao digitar 0, mostra "Programa encerrado."
 *              (Aula 5, slides 10 e 11 - laco while).
 *
 * Autora:      Amanda Baia
 * Disciplina:  Algoritmos e Pensamento Computacional - Profa. Joanacelle Caldas
 */

#include <stdio.h>

int main() {
    int numero;

    printf("Digite um numero (0 para sair): ");
    scanf("%d", &numero);

    while (numero != 0) {
        printf("Voce digitou: %d\n", numero);
        printf("Digite outro numero (0 para sair): ");
        scanf("%d", &numero);
    }

    printf("Programa encerrado.\n");
    return 0;
}
