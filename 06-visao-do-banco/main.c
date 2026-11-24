/*
 * Arquivo:     main.c
 * Descricao:   Visao do Banco - parte principal. So tem o MENU, que chama
 *              as funcoes do banco.c conforme a opcao escolhida.
 *
 * Compilar:    gcc main.c banco.c -o banco
 * Executar:    .\banco.exe
 *
 * Autora:      Amanda Baia
 * Disciplina:  Algoritmos e Pensamento Computacional - Profa. Joanacelle Caldas
 */

#include <stdio.h>
#include "banco.h"      /* aspas: o arquivo eh nosso, esta na mesma pasta  - chama as funcoes ora declaradas*/

int main() {

    struct cliente c[MAX];    /* armario com ate MAX fichas - lembrar que estabelecemos o max no arq banco.h */
    int n = 0;                /* quantos clientes foram cadastrados */
    int opcao;
    int bancoAberto = 0;      /* interruptor: 0 = fechado, 1 = aberto */

    /* MENU: se repete ate a pessoa escolher 0 (sair) */
    do {
        printf("\n=== MENU ===\n");
        printf("1 - Abrir o banco\n");
        printf("2 - Consultar historico\n");
        printf("3 - Efetuar sorteio\n");
        printf("4 - Movimentar conta\n");
        printf("0 - Sair\n");
        printf("Escolha: ");
        scanf("%d", &opcao);

        switch (opcao) {

        /* CASE 1 - ABRIR O BANCO: cadastra os clientes e liga o interruptor */
        case 1:
            n = abrirBanco(c);
            bancoAberto = 1;
            printf("\nBanco aberto!\n");
            break;

        /* CASE 2 - HISTORICO: so com o banco aberto */
        case 2:
            if (bancoAberto == 0) {
                printf("\nAbra o banco primeiro!\n");
            } else {
                consultarHistorico(c, n);
            }
            break;

        /* CASE 3 - SORTEIO: so com o banco aberto */
        case 3:
            if (bancoAberto == 0) {
                printf("\nAbra o banco primeiro!\n");
            } else {
                efetuarSorteio(c, n);
            }
            break;

        /* CASE 4 - MOVIMENTAR CONTA: deposito, saque, emprestimo e titulo */
        case 4:
            if (bancoAberto == 0) {
                printf("\nAbra o banco primeiro!\n");
            } else {
                movimentarConta(c, n);
            }
            break;

        /* CASE 0 - SAIR: o while para de repetir */
        case 0:
            printf("Saindo...\n");
            break;

        /* DEFAULT - qualquer outra opcao */
        default:
            printf("Opcao invalida!\n");
        }

    } while (opcao != 0); /* Tudo diferente do sair faz o while continuar a questionar*/

    return 0;
}
