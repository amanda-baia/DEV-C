/*
 * Arquivo:     q10_vendas_cinco_dias.c
 * Descricao:   Questao 10 (Aula 7, slide 27). Le as vendas de 5 dias e usa
 *              tres funcoes:
 *                calcularTotal           -> soma das vendas
 *                calcularMedia           -> total / quantidade de dias
 *                contarVendasAcimaDaMedia -> dias com venda acima da media
 *
 * Lembrete:    o vetor e passado para a funcao "por endereco" (o nome do
 *              vetor ja e um endereco), entao nao precisa de &.
 *
 * Autora:      Amanda Baia
 * Disciplina:  Algoritmos e Pensamento Computacional - Profa. Joanacelle Caldas
 */

#include <stdio.h>

#define DIAS 5

float calcularTotal(float vendas[], int qtd);
float calcularMedia(float total, int qtd);
int contarVendasAcimaDaMedia(float vendas[], int qtd, float media);

int main() {
    float vendas[DIAS];

    for (int i = 0; i < DIAS; i++) {
        printf("Vendas do dia %d: R$ ", i + 1);
        scanf("%f", &vendas[i]);
    }

    float total = calcularTotal(vendas, DIAS);
    float media = calcularMedia(total, DIAS);
    int acima = contarVendasAcimaDaMedia(vendas, DIAS, media);

    printf("\nTotal vendido: R$ %.2f\n", total);
    printf("Media diaria: R$ %.2f\n", media);
    printf("Dias acima da media: %d\n", acima);

    return 0;
}

float calcularTotal(float vendas[], int qtd) {
    float soma = 0;                       /* cofrinho */
    for (int i = 0; i < qtd; i++) {
        soma = soma + vendas[i];
    }
    return soma;
}

float calcularMedia(float total, int qtd) {
    return total / qtd;
}

int contarVendasAcimaDaMedia(float vendas[], int qtd, float media) {
    int contador = 0;
    for (int i = 0; i < qtd; i++) {
        if (vendas[i] > media) {
            contador++;
        }
    }
    return contador;
}
