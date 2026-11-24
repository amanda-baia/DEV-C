/*
 * Arquivo:     conta_alerta.c
 * Descricao:   Cadastra uma conta bancaria e mostra alerta se a conta corrente estiver negativa.
 * Conteudo:    struct, condicao com && (primeira regra do Visao do Banco)
 *
 * Autora:      Amanda Baia
 * Disciplina:  Algoritmos e Pensamento Computacional
 * Professora:  Joanacelle Caldas
 * Curso:       Analise e Desenvolvimento de Sistemas - UNIPE
 */

#include <stdio.h>

/* Molde (conta) e diferente do nome da ficha (c) */
struct conta {
    char titular[50];
    int num;
    int tipo;           /* 1 corrente, 2 salario, 3 poupanca */
    float saldo;
};

int main() {

    struct conta c;

    /* Ler os 4 campos */
    printf("Titular: ");
    scanf(" %49[^\n]", c.titular);
    printf("Numero: ");
    scanf("%d", &c.num);
    printf("Tipo (1, 2, 3): ");
    scanf("%d", &c.tipo);
    printf("Saldo: ");
    scanf("%f", &c.saldo);

    printf("=== Conta ===\n");
    printf("Titular: %s\n", c.titular);
    printf("Numero: %d\n", c.num);
    printf("Tipo: %d\n", c.tipo);
    printf("Saldo: R$ %.2f\n", c.saldo);

    /* Condicoes: corrente E saldo negativo */
    if ((c.tipo == 1) && (c.saldo < 0)) {
        printf("ALERTA: saldo negativo na conta corrente!\n");
    }

    return 0;
}
