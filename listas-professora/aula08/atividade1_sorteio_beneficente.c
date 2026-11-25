/*
 * Arquivo:     atividade1_sorteio_beneficente.c
 * Descricao:   Atividade 1 (Aula 8, slide 22). Le 12 inteiros num vetor e:
 *              a) conta quantas vezes cada numero aparece;
 *              b) numeros com ocorrencias IMPARES = quantidade de produtos
 *                 a comprar -> cadastra esse tanto de produtos (nome e
 *                 preco unitario);
 *              c) numeros com ocorrencias PARES vao para um 2o vetor,
 *                 ordenado de forma decrescente;
 *              d) mostra: os 12 numeros, cada numero distinto com suas
 *                 ocorrencias, os produtos em ordem alfabetica e o 2o
 *                 vetor em ordem decrescente.
 *
 * Escolhas:    - numero <= 0 com ocorrencias impares nao gera produtos
 *                (nao existe "comprar 0 ou -2 produtos");
 *              - limite de MAXP produtos no total.
 *              - ordem alfabetica com strcmp (string.h): devolve um
 *                valor > 0 quando o 1o texto vem DEPOIS do 2o no alfabeto.
 *
 * Autora:      Amanda Baia
 * Disciplina:  Algoritmos e Pensamento Computacional - Profa. Joanacelle Caldas
 */

#include <stdio.h>
#include <string.h>

#define QTD 12
#define MAXP 50

struct produto {
    char nome[50];
    float preco;
};

int main() {
    int v[QTD];
    int distintos[QTD], ocorr[QTD];     /* numero distinto e quantas vezes */
    int nd = 0;                         /* quantos distintos */
    int pares[QTD];                     /* 2o vetor */
    int np = 0;
    struct produto prod[MAXP];
    int nprod = 0;

    /* leitura */
    for (int i = 0; i < QTD; i++) {
        printf("Numero %d: ", i + 1);
        scanf("%d", &v[i]);
    }

    /* a) conta as ocorrencias de cada numero distinto */
    for (int i = 0; i < QTD; i++) {
        int achou = 0;
        for (int k = 0; k < nd; k++) {
            if (distintos[k] == v[i]) {
                ocorr[k]++;
                achou = 1;
            }
        }
        if (achou == 0) {               /* numero novo */
            distintos[nd] = v[i];
            ocorr[nd] = 1;
            nd++;
        }
    }

    /* b) e c) separa impares (produtos) e pares (2o vetor) */
    for (int k = 0; k < nd; k++) {
        if (ocorr[k] % 2 == 0) {
            pares[np] = distintos[k];
            np++;
        } else {
            int quantidade = distintos[k];
            if (quantidade <= 0) {
                continue;
            }
            printf("\nNumero %d (aparece %d vez/vezes): cadastrar %d produto(s)\n",
                   distintos[k], ocorr[k], quantidade);
            for (int p = 0; p < quantidade && nprod < MAXP; p++) {
                printf("  Nome do produto: ");
                scanf(" %49[^\n]", prod[nprod].nome);
                printf("  Preco unitario: R$ ");
                scanf("%f", &prod[nprod].preco);
                nprod++;
            }
        }
    }

    /* produtos em ordem alfabetica (bubble sort com strcmp) */
    for (int i = 0; i < nprod - 1; i++) {
        for (int j = 0; j < nprod - 1 - i; j++) {
            if (strcmp(prod[j].nome, prod[j + 1].nome) > 0) {
                struct produto aux = prod[j];
                prod[j] = prod[j + 1];
                prod[j + 1] = aux;
            }
        }
    }

    /* 2o vetor em ordem decrescente */
    for (int i = 0; i < np - 1; i++) {
        for (int j = 0; j < np - 1 - i; j++) {
            if (pares[j] < pares[j + 1]) {
                int aux = pares[j];
                pares[j] = pares[j + 1];
                pares[j + 1] = aux;
            }
        }
    }

    /* saida */
    printf("\na) Numeros informados: ");
    for (int i = 0; i < QTD; i++) {
        printf("%d ", v[i]);
    }

    printf("\n\nb) Ocorrencias:\n");
    for (int k = 0; k < nd; k++) {
        printf("   %d aparece %d vez(es)\n", distintos[k], ocorr[k]);
    }

    printf("\nc) Produtos para compra (ordem alfabetica):\n");
    if (nprod == 0) {
        printf("   Nenhum produto cadastrado.\n");
    }
    for (int i = 0; i < nprod; i++) {
        printf("   %s - R$ %.2f\n", prod[i].nome, prod[i].preco);
    }

    printf("\nd) Numeros com ocorrencias pares (decrescente): ");
    if (np == 0) {
        printf("nenhum");
    }
    for (int i = 0; i < np; i++) {
        printf("%d ", pares[i]);
    }
    printf("\n");

    return 0;
}
