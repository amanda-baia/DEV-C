/*
 * Arquivo:     atividade4_menu_numero.c
 * Descricao:   Menu com switch (Aula 4, slide 21):
 *                1 - par ou impar (e tambem positivo, negativo ou zero)
 *                2 - positivo ou negativo
 *                3 - quadrado do numero
 *                4 - sair
 *              Trata opcoes invalidas. O menu repete ate escolher 4.
 *
 * Autora:      Amanda Baia
 * Disciplina:  Algoritmos e Pensamento Computacional - Profa. Joanacelle Caldas
 */

#include <stdio.h>

int main() {
    int opcao, numero;

    do {
        printf("\n===== MENU =====\n");
        printf("1 - Verificar numero par ou impar\n");
        printf("2 - Verificar se e positivo ou negativo\n");
        printf("3 - Calcular o quadrado do numero\n");
        printf("4 - Sair\n");
        printf("Opcao: ");
        scanf("%d", &opcao);

        switch (opcao) {
        case 1:
            printf("Numero: ");
            scanf("%d", &numero);
            if (numero % 2 == 0) {
                printf("%d e PAR", numero);
            } else {
                printf("%d e IMPAR", numero);
            }
            /* restricao: dizer tambem o sinal */
            if (numero > 0) {
                printf(" e POSITIVO.\n");
            } else if (numero < 0) {
                printf(" e NEGATIVO.\n");
            } else {
                printf(" e ZERO.\n");
            }
            break;

        case 2:
            printf("Numero: ");
            scanf("%d", &numero);
            if (numero > 0) {
                printf("%d e POSITIVO.\n", numero);
            } else if (numero < 0) {
                printf("%d e NEGATIVO.\n", numero);
            } else {
                printf("O numero e ZERO (nem positivo nem negativo).\n");
            }
            break;

        case 3:
            printf("Numero: ");
            scanf("%d", &numero);
            printf("%d ao quadrado = %d\n", numero, numero * numero);
            break;

        case 4:
            printf("Saindo...\n");
            break;

        default:
            printf("Opcao invalida!\n");
        }

    } while (opcao != 4);

    return 0;
}
