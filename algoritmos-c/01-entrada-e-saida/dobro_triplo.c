/*
 * Arquivo:     dobro_triplo.c
 * Descricao:   Le um numero e mostra o dobro e o triplo dele.
 * Conteudo:    variaveis float, printf, scanf, operador *
 *
 * Autora:      Amanda Baia
 * Disciplina:  Algoritmos e Pensamento Computacional
 * Professora:  Joanacelle Caldas
 * Curso:       Analise e Desenvolvimento de Sistemas - UNIPE
 * Data:        13/11/2026
 */

#include <stdio.h>


int main () {

/* variaveis */

    float n1;
    float dobro;
    float triplo;

/* ler os valores */

    printf ("Insira o seu numero:");
    scanf("%f",&n1 );

/* Faca a estrutura dos calculos*/
    dobro = 2*n1;
    triplo = 3*n1;

/*Execute*/
    printf("O dobro do valor eh: %.1f \n", dobro);
    printf("O triplo do valor eh: %.1f \n", triplo);

    return 0;
}
