/*
 * Arquivo:     q04_celsius_fahrenheit.c
 * Descricao:   Questao 4 (Aula 7, slide 26). Funcao celsiusParaFahrenheit
 *              com a formula F = (9 * C) / 5 + 32. Resultado com 2 casas.
 *
 * Autora:      Amanda Baia
 * Disciplina:  Algoritmos e Pensamento Computacional - Profa. Joanacelle Caldas
 */

#include <stdio.h>

float celsiusParaFahrenheit(float celsius);

int main() {
    float c;

    printf("Temperatura em Celsius: ");
    scanf("%f", &c);

    printf("%.2f C = %.2f F\n", c, celsiusParaFahrenheit(c));
    return 0;
}

float celsiusParaFahrenheit(float celsius) {
    return (9 * celsius) / 5 + 32;
}
