/*
 * Arquivo:     atividade1_triangulos.c
 * Descricao:   Classificacao de triangulos (Aula 4, slide 18). Le tres lados
 *              inteiros e informa:
 *              - se formam um triangulo (cada lado menor que a soma dos
 *                outros dois);
 *              - pelos lados: equilatero, isosceles ou escaleno;
 *              - pelos angulos: comparando o QUADRADO do maior lado com a
 *                soma dos quadrados dos outros dois (Pitagoras):
 *                  igual  -> retangulo
 *                  menor  -> acutangulo
 *                  maior  -> obtusangulo
 *              Sem funcoes prontas: so comparacoes.
 *
 * Autora:      Amanda Baia
 * Disciplina:  Algoritmos e Pensamento Computacional - Profa. Joanacelle Caldas
 */

#include <stdio.h>

int main() {
    int a, b, c;

    printf("Digite os tres lados (inteiros): ");
    scanf("%d %d %d", &a, &b, &c);

    /* 1. forma triangulo? */
    if (a <= 0 || b <= 0 || c <= 0 || a >= b + c || b >= a + c || c >= a + b) {
        printf("Esses valores NAO formam um triangulo.\n");
        return 0;
    }

    /* 2. classificacao pelos lados */
    if (a == b && b == c) {
        printf("Pelos lados: EQUILATERO\n");
    } else if (a == b || a == c || b == c) {
        printf("Pelos lados: ISOSCELES\n");
    } else {
        printf("Pelos lados: ESCALENO\n");
    }

    /* 3. acha o maior lado (sem ordenar) e os outros dois */
    int maior = a, outro1 = b, outro2 = c;
    if (b >= a && b >= c) {
        maior = b; outro1 = a; outro2 = c;
    } else if (c >= a && c >= b) {
        maior = c; outro1 = a; outro2 = b;
    }

    int quadMaior = maior * maior;
    int somaQuad = outro1 * outro1 + outro2 * outro2;

    /* 4. classificacao pelos angulos */
    if (quadMaior == somaQuad) {
        printf("Pelos angulos: RETANGULO\n");
    } else if (quadMaior < somaQuad) {
        printf("Pelos angulos: ACUTANGULO\n");
    } else {
        printf("Pelos angulos: OBTUSANGULO\n");
    }

    return 0;
}
