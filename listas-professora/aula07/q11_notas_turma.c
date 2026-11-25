/*
 * Arquivo:     q11_notas_turma.c
 * Descricao:   Questao 11 (Aula 7, slide 28). Notas finais de 10 alunos
 *              num vetor, com as funcoes:
 *                calcularMediaTurma  -> devolve a media
 *                encontrarMaiorNota  -> devolve a maior nota
 *                contarAprovados     -> devolve quantos tiveram nota >= 7
 *                exibirResultados    -> mostra tudo (void)
 *              As funcoes de calculo so devolvem (return), nao imprimem.
 *
 * Disciplina:  Algoritmos e Pensamento Computacional - Profa. Joanacelle Caldas
 */

#include <stdio.h>

#define ALUNOS 10

float calcularMediaTurma(float notas[], int qtd);
float encontrarMaiorNota(float notas[], int qtd);
int contarAprovados(float notas[], int qtd);
void exibirResultados(float media, float maior, int aprovados);

int main() {
    float notas[ALUNOS];

    for (int i = 0; i < ALUNOS; i++) {
        printf("Nota do aluno %d: ", i + 1);
        scanf("%f", &notas[i]);
    }

    float media = calcularMediaTurma(notas, ALUNOS);
    float maior = encontrarMaiorNota(notas, ALUNOS);
    int aprovados = contarAprovados(notas, ALUNOS);

    exibirResultados(media, maior, aprovados);
    return 0;
}

float calcularMediaTurma(float notas[], int qtd) {
    float soma = 0;
    for (int i = 0; i < qtd; i++) {
        soma = soma + notas[i];
    }
    return soma / qtd;
}

float encontrarMaiorNota(float notas[], int qtd) {
    float maior = notas[0];              /* comeca com a primeira */
    for (int i = 1; i < qtd; i++) {
        if (notas[i] > maior) {
            maior = notas[i];
        }
    }
    return maior;
}

int contarAprovados(float notas[], int qtd) {
    int contador = 0;
    for (int i = 0; i < qtd; i++) {
        if (notas[i] >= 7) {
            contador++;
        }
    }
    return contador;
}

void exibirResultados(float media, float maior, int aprovados) {
    printf("\n===== RESULTADOS DA TURMA =====\n");
    printf("Media da turma: %.2f\n", media);
    printf("Maior nota: %.2f\n", maior);
    printf("Aprovados (nota >= 7): %d\n", aprovados);
}
