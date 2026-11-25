/*
 * Arquivo:     q1_consumo_agua.c
 * Descricao:   Questao 1 (Aula 5, slide 25). Condominio: le o consumo de
 *              agua (m3) de 5 moradores, diz se cada um esta dentro da
 *              media (ate 20 m3) ou acima, e mostra o consumo medio geral.
 *
 * Autora:      Amanda Baia
 * Disciplina:  Algoritmos e Pensamento Computacional - Profa. Joanacelle Caldas
 */

#include <stdio.h>

int main() {
    float consumo;
    float soma = 0;

    for (int i = 1; i <= 5; i++) {
        printf("Consumo do morador %d (m3): ", i);
        scanf("%f", &consumo);

        if (consumo <= 20) {
            printf("  Dentro da media.\n");
        } else {
            printf("  ACIMA da media.\n");
        }
        soma = soma + consumo;
    }

    printf("\nConsumo medio geral: %.2f m3\n", soma / 5);
    return 0;
}
