/*
 * Arquivo:     q01_mostrar_saudacao.c
 * Descricao:   Questao 1 (Aula 7, slide 26). Funcao mostrarSaudacao() que
 *              exibe uma mensagem; a main chama a funcao 3 vezes.
 *
 * Autora:      Amanda Baia
 * Disciplina:  Algoritmos e Pensamento Computacional - Profa. Joanacelle Caldas
 */

#include <stdio.h>

void mostrarSaudacao();

int main() {
    mostrarSaudacao();
    mostrarSaudacao();
    mostrarSaudacao();
    return 0;
}

/* void: so mostra a mensagem, nao devolve nada */
void mostrarSaudacao() {
    printf("Bem-vindo ao mundo das funcoes em C!\n");
}
