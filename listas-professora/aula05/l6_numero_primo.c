/*
 * Arquivo:     l6_numero_primo.c
 * Descricao:   Lista, questao 6 (Aula 5, slide 30). Le um inteiro positivo
 *              e diz se e primo, testando todos os divisores possiveis.
 *              Versao ja modificada (2a parte da questao): o usuario
 *              testa varios numeros ate escolher parar.
 *
 * Logica:      conta quantos divisores o numero tem de 1 ate ele mesmo.
 *              Primo = exatamente 2 divisores (1 e ele mesmo).
 *
 * Autora:      Amanda Baia
 * Disciplina:  Algoritmos e Pensamento Computacional - Profa. Joanacelle Caldas
 */

#include <stdio.h>

int main() {
    int numero;
    char resposta;

    do {
        do {
            printf("\nNumero inteiro positivo: ");
            scanf("%d", &numero);
        } while (numero < 1);

        int divisores = 0;
        for (int i = 1; i <= numero; i++) {
            if (numero % i == 0) {
                divisores++;
            }
        }

        if (divisores == 2) {
            printf("%d E PRIMO.\n", numero);
        } else {
            printf("%d NAO e primo (%d divisores).\n", numero, divisores);
        }

        printf("Testar outro numero? (S/N): ");
        scanf(" %c", &resposta);
    } while (resposta == 'S' || resposta == 's');

    return 0;
}
