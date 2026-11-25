/*
 * Arquivo:     q07_media_situacao.c
 * Descricao:   Questao 7 (Aula 7, slide 27). calcularMedia devolve a media
 *              de 3 notas; verificarSituacao mostra Aprovado (>= 7) ou
 *              Reprovado (< 7).
 *
 * Autora:      Amanda Baia
 * Disciplina:  Algoritmos e Pensamento Computacional - Profa. Joanacelle Caldas
 */

#include <stdio.h>

float calcularMedia(float n1, float n2, float n3);
void verificarSituacao(float media);

int main() {
    float n1, n2, n3;

    printf("Digite as 3 notas: ");
    scanf("%f %f %f", &n1, &n2, &n3);

    float media = calcularMedia(n1, n2, n3);
    printf("Media: %.2f\n", media);
    verificarSituacao(media);

    return 0;
}

/* int/float: CALCULA e devolve */
float calcularMedia(float n1, float n2, float n3) {
    return (n1 + n2 + n3) / 3;
}

/* void: so MOSTRA */
void verificarSituacao(float media) {
    if (media >= 7) {
        printf("Situacao: APROVADO\n");
    } else {
        printf("Situacao: REPROVADO\n");
    }
}
