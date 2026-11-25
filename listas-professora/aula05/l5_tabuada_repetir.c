/*
 * Arquivo:     l5_tabuada_repetir.c
 * Descricao:   Lista, questao 5 (Aula 5, slide 30). Mostra a tabuada de
 *              1 a 10 de um numero e pergunta se quer outra. Continua
 *              enquanto a resposta for 'S' ou 's'.
 *
 * Autora:      Amanda Baia
 * Disciplina:  Algoritmos e Pensamento Computacional - Profa. Joanacelle Caldas
 */

#include <stdio.h>

int main() {
    int numero;
    char resposta;

    do {
        printf("\nNumero: ");
        scanf("%d", &numero);

        for (int i = 1; i <= 10; i++) {
            printf("%d x %d = %d\n", numero, i, numero * i);
        }

        printf("Calcular outra tabuada? (S/N): ");
        scanf(" %c", &resposta);
    } while (resposta == 'S' || resposta == 's');

    printf("Fim!\n");
    return 0;
}
