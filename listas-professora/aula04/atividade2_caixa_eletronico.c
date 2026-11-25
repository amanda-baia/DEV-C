/*
 * Arquivo:     atividade2_caixa_eletronico.c
 * Descricao:   Caixa eletronico (Aula 4, slide 19). Notas de R$ 200, 100,
 *              50, 20, 10 e 5. O usuario informa o valor do saque e o
 *              programa verifica se e valido, se e possivel, quais notas
 *              entregar, quantas de cada uma e o total de cedulas.
 *
 * Regra extra: o caixa deve PRESERVAR pelo menos uma nota de cada tipo.
 *              Por isso, de cada nota so pode sair (estoque - 1).
 *
 * Escolha:     o enunciado nao diz quantas notas o caixa tem; usei um
 *              estoque inicial fixo (variaveis "qtdXXX" abaixo).
 *              Estrategia: comecar pelas notas maiores (menos cedulas).
 *
 * Autora:      Amanda Baia
 * Disciplina:  Algoritmos e Pensamento Computacional - Profa. Joanacelle Caldas
 */

#include <stdio.h>

int main() {
    /* estoque inicial do caixa */
    int qtd200 = 3, qtd100 = 5, qtd50 = 5, qtd20 = 10, qtd10 = 10, qtd5 = 10;

    int valor;
    printf("Valor do saque: R$ ");
    scanf("%d", &valor);

    /* 1. valor valido? (positivo e multiplo de 5, a menor nota) */
    if (valor <= 0 || valor % 5 != 0) {
        printf("Valor invalido! Informe um valor positivo e multiplo de 5.\n");
        return 0;
    }

    /* 2. quanto da para sacar sem zerar nenhuma nota */
    int maxSaque = (qtd200 - 1) * 200 + (qtd100 - 1) * 100 + (qtd50 - 1) * 50 +
                   (qtd20 - 1) * 20 + (qtd10 - 1) * 10 + (qtd5 - 1) * 5;
    if (valor > maxSaque) {
        printf("Saque impossivel: o caixa precisa manter uma nota de cada.\n");
        printf("Maximo disponivel: R$ %d\n", maxSaque);
        return 0;
    }

    /* 3. distribui as notas, da maior para a menor */
    int resto = valor;
    int n200, n100, n50, n20, n10, n5;

    n200 = resto / 200;
    if (n200 > qtd200 - 1) n200 = qtd200 - 1;   /* preserva 1 nota */
    resto = resto - n200 * 200;

    n100 = resto / 100;
    if (n100 > qtd100 - 1) n100 = qtd100 - 1;
    resto = resto - n100 * 100;

    n50 = resto / 50;
    if (n50 > qtd50 - 1) n50 = qtd50 - 1;
    resto = resto - n50 * 50;

    n20 = resto / 20;
    if (n20 > qtd20 - 1) n20 = qtd20 - 1;
    resto = resto - n20 * 20;

    n10 = resto / 10;
    if (n10 > qtd10 - 1) n10 = qtd10 - 1;
    resto = resto - n10 * 10;

    n5 = resto / 5;
    if (n5 > qtd5 - 1) n5 = qtd5 - 1;
    resto = resto - n5 * 5;

    /* 4. sobrou valor? entao nao deu para montar sem violar a regra */
    if (resto != 0) {
        printf("Saque impossivel sem violar a regra das notas.\n");
        return 0;
    }

    printf("\nSaque de R$ %d realizado:\n", valor);
    if (n200 > 0) printf("  %d nota(s) de R$ 200\n", n200);
    if (n100 > 0) printf("  %d nota(s) de R$ 100\n", n100);
    if (n50 > 0)  printf("  %d nota(s) de R$ 50\n", n50);
    if (n20 > 0)  printf("  %d nota(s) de R$ 20\n", n20);
    if (n10 > 0)  printf("  %d nota(s) de R$ 10\n", n10);
    if (n5 > 0)   printf("  %d nota(s) de R$ 5\n", n5);
    printf("Total de cedulas: %d\n", n200 + n100 + n50 + n20 + n10 + n5);

    return 0;
}
