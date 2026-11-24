/*
 * Arquivo:     celsius_fahrenheit.c
 * Descricao:   Converte uma temperatura de graus Celsius para Fahrenheit.
 * Conteudo:    formula F = C * 1.8 + 32, precedencia de operadores
 *
 * Autora:      Amanda Baia
 * Disciplina:  Algoritmos e Pensamento Computacional
 * Professora:  Joanacelle Caldas
 * Curso:       Analise e Desenvolvimento de Sistemas - UNIPE
 * Data:        13/11/2026
 */

#include <stdio.h>

int main () {

    /*Variaveis*/

    float f, c;

    /* entradas */
    printf("Insira a temperatura em graus celsius:");
    scanf("%f", &c);


    /*calculos*/
    f = c * 1.8 + 32;

    /* executar */

    printf("A temperatura em Fahrenheit eh: %.1f F \n" ,  f);

    return 0;
}