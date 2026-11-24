/*
 * Arquivo:     banco.h
 * Descricao:   "Sumario" do banco: o molde da ficha do cliente (struct),
 *              a constante MAX e os prototipos de todas as funcoes.
 *              Quem quiser usar o banco so precisa dar #include "banco.h".
 *
 * Autora:      Amanda Baia
 * Disciplina:  Algoritmos e Pensamento Computacional - Profa. Joanacelle Caldas
 */


#define MAX 50          /* maximo de clientes que o banco aceita */

/* ===================================================================
   MOLDE DA FICHA DO CLIENTE
   Cada cliente pode ter ate 3 contas. Para cada tipo guardamos
   "tem ou nao tem" (1 = sim) e o saldo.
   =================================================================== */
struct cliente {
    char nome[50];
    int numero;               /* 1000, 1001, 1002... */

    int temCorrente;          /* conta 01 */
    int temSalario;           /* conta 02 */
    int temPoupanca;          /* conta 03 */

    float saldoCorrente;
    float saldoSalario;
    float saldoPoupanca;

    int pegouEmprestimo;      /* 1 = ja pegou (so pode 1 por cliente) */
    int temTitulo;            /* 1 = comprou titulo de capitalizacao */
    float premio;             /* valor ganho no sorteio (0 = nao ganhou) */
};

/* ===================================================================
   PROTOTIPOS (as funcoes completas estao no banco.c - aqui eh como um repositorio, ativado quando iniciado <#include banco.h>)
   =================================================================== */

/* opcoes do menu */
int  abrirBanco(struct cliente c[]);                 /* devolve quantos clientes (n) */
void consultarHistorico(struct cliente c[], int n);
void efetuarSorteio(struct cliente c[], int n);
void movimentarConta(struct cliente c[], int n);

/* funcoes do Fibonacci (𝐹𝑛=𝐹𝑛−1+𝐹𝑛−2)⁠ - obs.: servem para entender padroes de crescimento, otimizar sistemas */
int fibonacci(int valor);
int somafibonacci(int valor);
int ehprimo(int valor);

