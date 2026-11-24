/*
 * Arquivo:     idade_daqui_5_anos.c
 * Descricao:   Le a idade e mostra quantos anos a pessoa tera daqui a 5 anos.
 * Conteudo:    variaveis int, printf, scanf, operador +
 *
 * Autora:      Amanda Baia
 * Disciplina:  Algoritmos e Pensamento Computacional
 * Professora:  Joanacelle Caldas
 * Curso:       Analise e Desenvolvimento de Sistemas - UNIPE
 * Data:        13/11/2026
 */

#include <stdio.h>

int main (){
    int idade;
    printf("Digite sua idade:");
    scanf("%d", &idade);
    printf("Daqui a 5 anos vc vai ter %d anos \n", idade + 5);

    return 0;

}