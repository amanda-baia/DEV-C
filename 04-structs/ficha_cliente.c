/*
 * Arquivo:     ficha_cliente.c
 * Descricao:   Cadastra um cliente (nome, tipo de conta, saldo) e mostra a ficha.
 * Conteudo:    struct, acesso com ponto, leitura de texto com espacos
 *
 * Autora:      Amanda Baia
 * Disciplina:  Algoritmos e Pensamento Computacional
 * Professora:  Joanacelle Caldas
 * Curso:       Analise e Desenvolvimento de Sistemas - UNIPE
 */

#include <stdio.h>

/* Molde da ficha: fica fora da main e termina com ; */
struct cliente {
    char nome[50];      /* ate 49 letras: a ultima posicao e do \0 */
    int tipo;
    float saldo;
};

int main() {

    struct cliente c;   /* uma ficha chamada c */

    /* Leitura: texto sem &, numeros com & */
    printf("Nome: ");
    scanf(" %49[^\n]", c.nome);     /* le tudo que nao for Enter */
    printf("Tipo de conta (1, 2 ou 3): ");
    scanf("%d", &c.tipo);
    printf("Saldo: ");
    scanf("%f", &c.saldo);

    /* Mostrar a ficha */
    printf("== Ficha do Cliente ==\n");
    printf("Nome: %s\n", c.nome);
    printf("Tipo: %d\n", c.tipo);
    printf("Saldo: R$ %.2f\n", c.saldo);

    return 0;
}
