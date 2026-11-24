/*
 * Arquivo:     idade_em_dias.c
 * Descricao:   Le a idade em anos e mostra quantos dias a pessoa ja viveu.
 * Conteudo:    variaveis int, operador *, mascara %d
 *
 * Autora:      Amanda Baia
 * Disciplina:  Algoritmos e Pensamento Computacional
 * Professora:  Joanacelle Caldas
 * Curso:       Analise e Desenvolvimento de Sistemas - UNIPE
 * Data:        13/11/2026
 */

#include <stdio.h>

int main () {

/*declarar variaveis*/

    int idade;
    int id_dias;

/*subir os dados*/

    printf ("Insira a sua idade em anos:");
    scanf ("%d", &idade);

/* Dizer o calculo */

    id_dias = idade * 365;

/* Execute */

    printf ("A sua idade em dias eh de : %d dias\n", id_dias);


return 0;

}