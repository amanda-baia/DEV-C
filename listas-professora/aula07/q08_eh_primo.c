/*
 * Arquivo:     q08_eh_primo.c
 * Descricao:   Questao 8 (Aula 7, slide 27). Funcao ehPrimo devolve 1 se o
 *              numero for primo e 0 se nao for. Menores que 2 nao sao
 *              primos.
 *
 * Desafio:     testa os divisores so ate a raiz quadrada, sem sqrt():
 *              em vez de "i <= raiz(n)", usa "i * i <= n" (mesma coisa).
 *              Ex.: para 37, basta testar 2..6, porque 7*7 = 49 > 37.
 *
 * Autora:      Amanda Baia
 * Disciplina:  Algoritmos e Pensamento Computacional - Profa. Joanacelle Caldas
 */

#include <stdio.h>

int ehPrimo(int numero);

int main() {
    int n;

    printf("Digite um numero: ");
    scanf("%d", &n);

    if (ehPrimo(n)) {
        printf("%d E PRIMO\n", n);
    } else {
        printf("%d NAO e primo\n", n);
    }

    return 0;
}

int ehPrimo(int numero) {
    if (numero < 2) {
        return 0;
    }
    for (int i = 2; i * i <= numero; i++) {
        if (numero % i == 0) {
            return 0;          /* achou divisor: nao e primo */
        }
    }
    return 1;
}
