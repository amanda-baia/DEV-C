/*
 * Arquivo:     media_curtidas.c
 * Descricao:   Rede social (Aula 5, slides 20 e 21). Le as curtidas de 5
 *              publicacoes com for, soma (cofrinho) e mostra a media.
 *
 * Autora:      Amanda Baia
 * Disciplina:  Algoritmos e Pensamento Computacional - Profa. Joanacelle Caldas
 */

#include <stdio.h>

int main() {
    int curtidas;
    int soma = 0;

    for (int i = 1; i <= 5; i++) {
        printf("Curtidas do post %d: ", i);
        scanf("%d", &curtidas);
        soma = soma + curtidas;
    }

    float media = soma / 5.0;      /* 5.0 para nao perder os decimais */
    printf("\nMedia de curtidas dos 5 posts: %.2f\n", media);

    return 0;
}
