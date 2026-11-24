/*
 * Arquivo:     boletim_aluno.c
 * Descricao:   Le nome e duas notas de um aluno, calcula a media e mostra o boletim com a situacao.
 * Conteudo:    struct, if/else usando campo da ficha
 *
 * Autora:      Amanda Baia
 * Disciplina:  Algoritmos e Pensamento Computacional
 * Professora:  Joanacelle Caldas
 * Curso:       Analise e Desenvolvimento de Sistemas - UNIPE
 */

#include <stdio.h>

struct aluno {
    char nome[50];
    float n1, n2;
    float media;
};

int main() {

    struct aluno c;

    printf("Insira o nome do aluno: ");
    scanf(" %49[^\n]", c.nome);
    printf("Primeira nota: ");
    scanf("%f", &c.n1);
    printf("Segunda nota: ");
    scanf("%f", &c.n2);

    c.media = (c.n1 + c.n2) / 2;

    printf("=== Boletim ===\n");
    printf("Nome: %s\n", c.nome);
    printf("Notas: %.1f e %.1f\n", c.n1, c.n2);
    printf("Media: %.1f\n", c.media);

    /* O if vem depois para a situacao sair como ultima linha do boletim */
    if (c.media >= 7) {
        printf("Situacao: Aprovada\n");
    } else {
        printf("Situacao: Reprovada ou em recuperacao\n");
    }

    return 0;
}
