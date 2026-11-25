/*
 * Arquivo:     recursao_fibonacci.c
 * Descricao:   Fibonacci recursivo (Aula 7, slides 23 e 24). Usa a funcao
 *              do slide para mostrar os N primeiros termos da sequencia
 *              0, 1, 1, 2, 3, 5, 8, 13... e a soma deles.
 *
 * Recursao:    a funcao chama ela mesma com um problema menor.
 *              Caso base: posicao 0 vale 0 e posicao 1 vale 1 (e onde a
 *              recursao para). Nas outras: soma das duas anteriores.
 *
 * Cuidado:     a versao recursiva fica lenta com N grande (ela recalcula
 *              os mesmos termos muitas vezes). Por isso o limite e 30.
 *
 * Autora:      Amanda Baia
 * Disciplina:  Algoritmos e Pensamento Computacional - Profa. Joanacelle Caldas
 */

#include <stdio.h>

int fibonacci(int num);

int main() {
    int n;

    do {
        printf("Quantos termos de Fibonacci? (1 a 30): ");
        scanf("%d", &n);
    } while (n < 1 || n > 30);

    int soma = 0;                          /* cofrinho */
    printf("Sequencia: ");
    for (int i = 0; i < n; i++) {
        int termo = fibonacci(i);
        printf("%d ", termo);
        soma = soma + termo;
    }
    printf("\nSoma dos %d termos: %d\n", n, soma);

    return 0;
}

/* funcao do slide 24 */
int fibonacci(int num) {
    if (num == 0)
        return 0;                          /* caso base */
    if (num == 1)
        return 1;                          /* caso base */
    else
        return fibonacci(num - 1) + fibonacci(num - 2);
}
