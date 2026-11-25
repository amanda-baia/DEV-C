/*
 * Arquivo:     q12_estoque_simplificado.c
 * Descricao:   Questao 12 (Aula 7, slide 28). Estoque de 8 produtos num
 *              vetor, com as funcoes:
 *                calcularTotalEstoque -> soma das quantidades
 *                contarEstoqueBaixo   -> produtos com menos de 5 unidades
 *                buscarProduto        -> recebe o codigo (1 a 8) e devolve
 *                                        a posicao no vetor, ou -1 se o
 *                                        codigo nao existir
 *
 * Conversao:   codigo 1 -> posicao 0, codigo 8 -> posicao 7
 *              (posicao = codigo - 1), igual ao "num - 1000" do banco.
 *
 * Autora:      Amanda Baia
 * Disciplina:  Algoritmos e Pensamento Computacional - Profa. Joanacelle Caldas
 */

#include <stdio.h>

#define PRODUTOS 8

int calcularTotalEstoque(int estoque[], int qtd);
int contarEstoqueBaixo(int estoque[], int qtd);
int buscarProduto(int estoque[], int codigo);

int main() {
    int estoque[PRODUTOS];
    int codigo;

    for (int i = 0; i < PRODUTOS; i++) {
        printf("Quantidade do produto %d: ", i + 1);
        scanf("%d", &estoque[i]);
    }

    printf("\nTotal em estoque: %d unidades\n", calcularTotalEstoque(estoque, PRODUTOS));
    printf("Produtos com estoque baixo: %d\n", contarEstoqueBaixo(estoque, PRODUTOS));

    printf("\nCodigo do produto para buscar (1 a 8): ");
    scanf("%d", &codigo);

    int pos = buscarProduto(estoque, codigo);
    if (pos == -1) {
        printf("Produto nao encontrado!\n");
    } else {
        printf("Produto %d (posicao %d no vetor): %d unidade(s)\n",
               codigo, pos, estoque[pos]);
    }

    return 0;
}

int calcularTotalEstoque(int estoque[], int qtd) {
    int soma = 0;
    for (int i = 0; i < qtd; i++) {
        soma = soma + estoque[i];
    }
    return soma;
}

int contarEstoqueBaixo(int estoque[], int qtd) {
    int contador = 0;
    for (int i = 0; i < qtd; i++) {
        if (estoque[i] < 5) {
            contador++;
        }
    }
    return contador;
}

/* o vetor vem junto como pede o enunciado; a busca e pelo codigo */
int buscarProduto(int estoque[], int codigo) {
    (void) estoque;                          /* nao precisa ler os valores */
    if (codigo < 1 || codigo > PRODUTOS) {
        return -1;
    }
    return codigo - 1;
}
