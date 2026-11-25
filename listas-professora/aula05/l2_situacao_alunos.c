/*
 * Arquivo:     l2_situacao_alunos.c
 * Descricao:   Lista, questao 2 (Aula 5, slide 29). Le 3 notas de varios
 *              alunos, enquanto o usuario quiser. Para cada um mostra:
 *                Aprovado (media >= 7), Recuperacao (5 a 6,9) ou
 *                Reprovado (media < 5).
 *              No fim, mostra quantos alunos ficaram em cada situacao.
 *
 * Autora:      Amanda Baia
 * Disciplina:  Algoritmos e Pensamento Computacional - Profa. Joanacelle Caldas
 */

#include <stdio.h>

int main() {
    float n1, n2, n3, media;
    int aprovados = 0, recuperacao = 0, reprovados = 0;
    char continuar;

    do {
        printf("\nDigite as 3 notas do aluno: ");
        scanf("%f %f %f", &n1, &n2, &n3);
        media = (n1 + n2 + n3) / 3;
        printf("Media: %.1f -> ", media);

        if (media >= 7) {
            printf("Aprovado\n");
            aprovados++;
        } else if (media >= 5) {
            printf("Recuperacao\n");
            recuperacao++;
        } else {
            printf("Reprovado\n");
            reprovados++;
        }

        printf("Outro aluno? (S/N): ");
        scanf(" %c", &continuar);          /* espaco: pula o Enter */
    } while (continuar == 'S' || continuar == 's');

    printf("\nAprovados: %d | Recuperacao: %d | Reprovados: %d\n",
           aprovados, recuperacao, reprovados);
    return 0;
}
