/*
 * Arquivo:     l3_maior_menor_diferenca.c
 * Descricao:   Lista, questao 3 (Aula 5, slide 29). Le 10 inteiros e mostra
 *              o maior, o menor e a diferenca entre eles. Sem vetores:
 *              o maior e o menor sao atualizados a cada leitura.
 *
 * Logica:      o 1o numero lido comeca como maior E menor. Depois, cada
 *              numero novo e comparado com eles ("recorde").
 *
 * Autora:      Amanda Baia
 * Disciplina:  Algoritmos e Pensamento Computacional - Profa. Joanacelle Caldas
 */

#include <stdio.h>

int main() {
    int numero, maior, menor;

    printf("Numero 1: ");
    scanf("%d", &numero);
    maior = numero;
    menor = numero;

    for (int i = 2; i <= 10; i++) {
        printf("Numero %d: ", i);
        scanf("%d", &numero);

        if (numero > maior) {
            maior = numero;
        }
        if (numero < menor) {
            menor = numero;
        }
    }

    printf("\nMaior: %d\n", maior);
    printf("Menor: %d\n", menor);
    printf("Diferenca: %d\n", maior - menor);
    return 0;
}
