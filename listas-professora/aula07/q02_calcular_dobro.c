/*
 * Arquivo:     q02_calcular_dobro.c
 * Descricao:   Questao 2 (Aula 7, slide 26). Funcao calcularDobro que
 *              recebe um inteiro e devolve (return) o dobro.
 *
 * Autora:      Amanda Baia
 * Disciplina:  Algoritmos e Pensamento Computacional - Profa. Joanacelle Caldas
 */

#include <stdio.h>

int calcularDobro(int numero);

int main() {
    int n;

    printf("Digite um numero: ");
    scanf("%d", &n);

    int resultado = calcularDobro(n);
    printf("O dobro de %d e %d\n", n, resultado);

    return 0;
}

int calcularDobro(int numero) {
    return numero * 2;
}
