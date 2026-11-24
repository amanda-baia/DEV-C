/*
 * Arquivo:     clientes_vetor.c
 * Descricao:   Cadastra 3 clientes num vetor de structs e mostra a lista.
 * Conteudo:    vetor de structs (armario de fichas): clientes[i].campo
 *
 * Autora:      Amanda Baia
 * Disciplina:  Algoritmos e Pensamento Computacional
 * Professora:  Joanacelle Caldas
 * Curso:       Analise e Desenvolvimento de Sistemas - UNIPE
 */

#include <stdio.h>

struct cliente {
    char nome[50];
    float saldo;
};

int main() {

    /* struct, de que molde, qual nome, quantas gavetas */
    struct cliente c[3];

    for (int i = 0; i < 3; i++) {
        printf("Nome: ");
        scanf(" %49[^\n]", c[i].nome);
        printf("Saldo: ");
        scanf("%f", &c[i].saldo);
    }

    printf("=== SALDO ===\n");

    for (int i = 0; i < 3; i++) {
        printf("%d. %s - R$ %.2f\n", i + 1, c[i].nome, c[i].saldo);   /* posicao. nome - R$ saldo */
    }

    return 0;
}
