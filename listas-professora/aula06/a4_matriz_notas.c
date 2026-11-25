/*
 * Arquivo:     a4_matriz_notas.c
 * Descricao:   Le 3 notas de 3 alunos e calcula a media de cada um
 *              (Aula 6, slides 25 e 26). Tudo fica numa matriz 3x4:
 *              colunas 0, 1 e 2 = notas; coluna 3 = media.
 *              Depois mostra a tabela.
 *
 * Autora:      Amanda Baia
 * Disciplina:  Algoritmos e Pensamento Computacional - Profa. Joanacelle Caldas
 */

#include <stdio.h>

int main() {
    float notas[3][4];        /* 3 alunos (linhas) x 4 colunas */

    for (int i = 0; i < 3; i++) {
        float soma = 0;
        for (int j = 0; j < 3; j++) {
            printf("Aluno %d - nota %d: ", i + 1, j + 1);
            scanf("%f", &notas[i][j]);
            soma = soma + notas[i][j];
        }
        notas[i][3] = soma / 3;          /* 4a coluna: media */
    }

    printf("\n%-8s %6s %6s %6s %6s\n", "Aluno", "Nota1", "Nota2", "Nota3", "Media");
    for (int i = 0; i < 3; i++) {
        printf("%-8d", i + 1);
        for (int j = 0; j < 4; j++) {
            printf(" %6.2f", notas[i][j]);
        }
        printf("\n");
    }

    return 0;
}
