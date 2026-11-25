/*
 * Arquivo:     l8_numero_secreto.c
 * Descricao:   Lista, questao 8 (Aula 5, slide 31). Jogo do numero secreto
 *              (1 a 100) com no maximo 10 tentativas. A cada palpite diz
 *              se o secreto e maior ou menor. No fim, informa o numero de
 *              tentativas, ou revela o numero se o jogador nao acertar.
 *
 * Lembrete:    rand() sorteia um numero; srand(time(NULL)) muda a
 *              "semente" para o sorteio ser diferente a cada execucao.
 *
 * Autora:      Amanda Baia
 * Disciplina:  Algoritmos e Pensamento Computacional - Profa. Joanacelle Caldas
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(NULL));
    int secreto = rand() % 100 + 1;      /* de 1 a 100 */
    int palpite;
    int tentativas = 0;
    int acertou = 0;                     /* bandeirinha */

    while (tentativas < 10 && acertou == 0) {
        printf("Tentativa %d/10 - seu palpite: ", tentativas + 1);
        scanf("%d", &palpite);
        tentativas++;

        if (palpite < secreto) {
            printf("O numero secreto e maior.\n");
        } else if (palpite > secreto) {
            printf("O numero secreto e menor.\n");
        } else {
            printf("Parabens! Voce acertou!\n");
            acertou = 1;
        }
    }

    if (acertou) {
        printf("Tentativas realizadas: %d\n", tentativas);
    } else {
        printf("Suas 10 tentativas acabaram. O numero era %d.\n", secreto);
    }

    return 0;
}
