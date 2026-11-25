/*
 * Arquivo:     q06_calculadora.c
 * Descricao:   Questao 6 (Aula 7, slide 26). Calculadora com uma funcao
 *              para cada operacao (soma, subtracao, multiplicacao e
 *              divisao). Na divisao, confere se o divisor e diferente de 0.
 *
 * Autora:      Amanda Baia
 * Disciplina:  Algoritmos e Pensamento Computacional - Profa. Joanacelle Caldas
 */

#include <stdio.h>

float somar(float a, float b);
float subtrair(float a, float b);
float multiplicar(float a, float b);
float dividir(float a, float b);

int main() {
    float a, b;
    int opcao;

    printf("Digite dois numeros: ");
    scanf("%f %f", &a, &b);

    printf("1 - Soma | 2 - Subtracao | 3 - Multiplicacao | 4 - Divisao\n");
    printf("Opcao: ");
    scanf("%d", &opcao);

    switch (opcao) {
    case 1:
        printf("Resultado: %.2f\n", somar(a, b));
        break;
    case 2:
        printf("Resultado: %.2f\n", subtrair(a, b));
        break;
    case 3:
        printf("Resultado: %.2f\n", multiplicar(a, b));
        break;
    case 4:
        if (b != 0) {
            printf("Resultado: %.2f\n", dividir(a, b));
        } else {
            printf("Erro: nao existe divisao por zero!\n");
        }
        break;
    default:
        printf("Opcao invalida!\n");
    }

    return 0;
}

float somar(float a, float b)       { return a + b; }
float subtrair(float a, float b)    { return a - b; }
float multiplicar(float a, float b) { return a * b; }
float dividir(float a, float b)     { return a / b; }
