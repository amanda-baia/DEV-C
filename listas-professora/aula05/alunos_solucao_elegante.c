/*
 * Arquivo:     alunos_solucao_elegante.c
 * Descricao:   Aula 5, slides 12 e 13: "Qual o objetivo desse algoritmo?
 *              Construa uma solucao mais elegante."
 *
 *              Objetivo do algoritmo do slide: ler o nome e a nota de 3
 *              alunos e depois mostrar "nome: nota" de cada um.
 *              Ele repete as mesmas linhas 3 vezes (nome1, nota1, nome2...).
 *
 *              Solucao mais elegante: um LACO faz a leitura uma vez so, e
 *              um vetor de struct guarda os dados para mostrar no final.
 *              Para mudar de 3 para 30 alunos, basta mudar QTD.
 *
 * Autora:      Amanda Baia
 * Disciplina:  Algoritmos e Pensamento Computacional - Profa. Joanacelle Caldas
 */

#include <stdio.h>

#define QTD 3

struct aluno {
    char nome[50];
    float nota;
};

int main() {
    struct aluno a[QTD];

    for (int i = 0; i < QTD; i++) {
        printf("Digite o nome do aluno %d: ", i + 1);
        scanf(" %49[^\n]", a[i].nome);       /* aceita nome com espaco */
        printf("Digite a nota de %s: ", a[i].nome);
        scanf("%f", &a[i].nota);
    }

    printf("\n--- Alunos ---\n");
    for (int i = 0; i < QTD; i++) {
        printf("%s: %.2f\n", a[i].nome, a[i].nota);
    }

    return 0;
}
