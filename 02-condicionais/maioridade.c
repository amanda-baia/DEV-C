/*
 * Arquivo:     maioridade.c
 * Descricao:   Le a idade e informa se a pessoa e maior ou menor de idade.
 * Conteudo:    if, else, operador >=
 *
 * Autora:      Amanda Baia
 * Disciplina:  Algoritmos e Pensamento Computacional
 * Professora:  Joanacelle Caldas
 * Curso:       Analise e Desenvolvimento de Sistemas - UNIPE
 * Data:        13/11/2026
 */

#include <stdio.h> 

int main (){

    /*variaveis*/

    int i;

    /* recebimento de dados */

    printf("Insira sua idade: \n");
    scanf("%d" , &i);

    /* booleanos */

    if (i >= 18){
        printf("Maior de idade \n");
        
    } else {
        printf("Menor de idade \n");
    }   

    return 0;
}