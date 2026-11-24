/*
 * Arquivo:     produto.c
 * Descricao:   Cadastra um produto e calcula o valor total (preco x quantidade).
 * Conteudo:    struct com campo calculado
 *
 * Autora:      Amanda Baia
 * Disciplina:  Algoritmos e Pensamento Computacional
 * Professora:  Joanacelle Caldas
 * Curso:       Analise e Desenvolvimento de Sistemas - UNIPE
 */

#include <stdio.h>

struct produto {
    char nome[50];
    float preco;
    int quantidade;
    float total;
};

int main() {

    struct produto c;

    /* Leitura */
    printf("Nome: ");
    scanf(" %49[^\n]", c.nome);
    printf("Preco: ");
    scanf("%f", &c.preco);
    printf("Quantidade: ");
    scanf("%d", &c.quantidade);

    /* Calculo: float x int resulta em float */
    c.total = c.preco * c.quantidade;

    /* Ficha */
    printf("== Produto ==\n");
    printf("Nome: %s\n", c.nome);
    printf("Preco: R$ %.2f\n", c.preco);
    printf("Quantidade: %d\n", c.quantidade);
    printf("Total: R$ %.2f\n", c.total);

    return 0;
}
