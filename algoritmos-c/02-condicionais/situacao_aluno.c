/*
 * Arquivo:     situacao_aluno.c
 * Descricao:   Le duas notas, calcula a media e informa se a aluna esta aprovada, em recuperacao ou reprovada.
 * Conteudo:    if, else if, else, operadores relacionais
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
    float nota1;
    float nota2;
    float media; 
    
/* OBs. Colocar sempre o calculo depois da leitura dos dados*/
    
/* Leitura dos dados */
    printf("Insira a sua nota da primeira pessoa:");
    scanf("%f", &nota1);
    printf("Insira a nota da segunda pessoa:");
    scanf("%f", &nota2);

/*Devemos calcular somente depois de ler*/
    media = (nota1 + nota2)/2;

/* Mostrar o resultado*/
    printf("A media das notas eh: %.1f \n", media);
    
/* %	“aqui vai um valor”, eh o começo da lacuna*/
/* %.1 “mostre 1 casa depois do ponto”*/
/* %.1f “o numero eh um float”*/
/* \n o classico pular linha*/


    if (media >= 7){
        printf ("Aprovada\n");
    } else if (media >= 6) {
        printf ("Em recuperacao\n");
    } else {
        printf ("Reprovada\n");
    }

    return 0;
}