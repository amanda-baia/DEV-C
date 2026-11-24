/*
 * Arquivo:     imc.c
 * Descricao:   Le peso e altura, calcula o IMC e mostra a classificacao.
 * Conteudo:    float, precedencia com parenteses, else if encadeado
 *
 * Autora:      Amanda Baia
 * Disciplina:  Algoritmos e Pensamento Computacional
 * Professora:  Joanacelle Caldas
 * Curso:       Analise e Desenvolvimento de Sistemas - UNIPE
 */

#include <stdio.h>

int main() {

    /* Variaveis */
    float p, h, imc;

    /* Insercao de valores */
    printf("Insira o seu peso (kg): ");
    scanf("%f", &p);
    printf("Insira a sua altura (m): ");
    scanf("%f", &h);

    /* Calculo: os parenteses fazem a multiplicacao antes da divisao */
    imc = p / (h * h);
    printf("IMC: %.1f - ", imc);

    /* Condicionais: se chegou num else if, os testes de cima ja deram falso */
    if (imc < 18.5) {
        printf("Abaixo do peso\n");
    } else if (imc < 25) {
        printf("Peso normal\n");
    } else if (imc < 30) {
        printf("Sobrepeso\n");
    } else {
        printf("Obesidade\n");
    }

    return 0;
}
