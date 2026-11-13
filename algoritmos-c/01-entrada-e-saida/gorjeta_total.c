/*
 * Arquivo:     gorjeta_total.c
 * Descricao:   Le o valor da conta e mostra o total com 10% de gorjeta.
 * Conteudo:    variaveis float, porcentagem, mascara %.2f
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

    float gasto;
    float gorjeta;
   
/* Leitura dos valores*/

    printf("Insira o valor gasto:");
    scanf("%f", &gasto);

/*calculo*/

    gorjeta = gasto * 0.10;

/*execucao*/

    printf ("O valor total eh de: R$ %.2f \n" , gasto + gorjeta);

    return 0;
}