/*
 * Arquivo:     q3_nota_atendimento.c
 * Descricao:   Questao 3 (Aula 5, slide 27). Le a nota de atendimento
 *              (0 a 10) de 10 clientes e calcula a media geral. Se a media
 *              for menor que 7, mostra uma mensagem de alerta.
 *
 * Autora:      Amanda Baia
 * Disciplina:  Algoritmos e Pensamento Computacional - Profa. Joanacelle Caldas
 */

#include <stdio.h>

int main() {
    float nota;
    float soma = 0;

    for (int i = 1; i <= 10; i++) {
        do {
            printf("Nota do cliente %d (0 a 10): ", i);
            scanf("%f", &nota);
        } while (nota < 0 || nota > 10);
        soma = soma + nota;
    }

    float media = soma / 10;
    printf("\nMedia do atendimento: %.2f\n", media);

    if (media < 7) {
        printf("ALERTA: a media do atendimento esta abaixo de 7!\n");
    }

    return 0;
}
