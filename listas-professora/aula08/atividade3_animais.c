/*
 * Arquivo:     atividade3_animais.c
 * Descricao:   Atividade 3 (Aula 8, slides 23 e 24). Le 15 inteiros num
 *              vetor e:
 *              a) mostra os numeros que aparecem mais de uma vez e quantas
 *                 vezes aparecem;
 *              b) numeros PRIMOS com quantidade IMPAR de ocorrencias:
 *                 soma as ocorrencias e pede o cadastro de animais;
 *              c) numeros com quantidade PAR de ocorrencias: usa a posicao
 *                 que ocupam no vetor para achar o animal correspondente;
 *              d) mostra os animais correspondentes.
 *
 * Como interpretei o enunciado (ele deixa margem):
 *              - so contam os numeros REPETIDOS (como na tabela do slide 24,
 *                onde quem aparece 1 vez e "Nao repetido");
 *              - quantidade de animais a cadastrar = soma das ocorrencias
 *                dos numeros primos-impares. No exemplo: 3 aparece 3 vezes
 *                e 7 aparece 3 vezes -> 3 + 3 = 6 animais (Cachorro ...
 *                Tigre, como no slide);
 *              - correspondencia: a 1a posicao do numero no vetor (contando
 *                de 1) e o numero do animal na lista. Se nao existir animal
 *                com esse numero: "Nao existe correspondencia".
 *
 * Autora:      Amanda Baia
 * Disciplina:  Algoritmos e Pensamento Computacional - Profa. Joanacelle Caldas
 */

#include <stdio.h>

#define QTD 15

int ehPrimo(int numero);

int main() {
    int v[QTD];
    int distintos[QTD], ocorr[QTD], primeiraPos[QTD];
    int nd = 0;
    char animais[QTD][30];
    int na = 0;

    for (int i = 0; i < QTD; i++) {
        printf("Numero %d: ", i + 1);
        scanf("%d", &v[i]);
    }

    /* conta ocorrencias e guarda a 1a posicao de cada numero */
    for (int i = 0; i < QTD; i++) {
        int achou = 0;
        for (int k = 0; k < nd; k++) {
            if (distintos[k] == v[i]) {
                ocorr[k]++;
                achou = 1;
            }
        }
        if (achou == 0) {
            distintos[nd] = v[i];
            ocorr[nd] = 1;
            primeiraPos[nd] = i + 1;        /* posicao contando de 1 */
            nd++;
        }
    }

    /* a) repetidos */
    printf("\n%-8s %-12s %s\n", "Numero", "Ocorrencias", "Classificacao");
    for (int k = 0; k < nd; k++) {
        printf("%-8d %-12d ", distintos[k], ocorr[k]);
        if (ocorr[k] == 1) {
            printf("Nao repetido\n");
        } else if (ocorr[k] % 2 == 0) {
            printf("%sPar\n", ehPrimo(distintos[k]) ? "Primo - " : "");
        } else {
            printf("%sImpar\n", ehPrimo(distintos[k]) ? "Primo - " : "");
        }
    }

    /* b) soma das ocorrencias dos primos com quantidade impar */
    int soma = 0;
    for (int k = 0; k < nd; k++) {
        if (ocorr[k] > 1 && ocorr[k] % 2 != 0 && ehPrimo(distintos[k])) {
            soma = soma + ocorr[k];
        }
    }

    if (soma > 0) {
        printf("\nCadastre %d animal(is):\n", soma);
        for (int a = 0; a < soma && a < QTD; a++) {
            printf("%d. ", a + 1);
            scanf(" %29[^\n]", animais[na]);
            na++;
        }
    } else {
        printf("\nNenhum numero primo com ocorrencias impares: sem animais.\n");
    }

    /* c) e d) correspondencia dos numeros com quantidade par */
    printf("\nSaida:\n");
    int linha = 0;
    for (int k = 0; k < nd; k++) {
        if (ocorr[k] % 2 == 0) {
            linha++;
            int pos = primeiraPos[k];
            if (pos <= na) {
                printf("%d. %s.\n", linha, animais[pos - 1]);
            } else {
                printf("%d. Nao existe correspondencia.\n", linha);
            }
        }
    }
    if (linha == 0) {
        printf("Nenhum numero com quantidade par de ocorrencias.\n");
    }

    return 0;
}

int ehPrimo(int numero) {
    if (numero < 2) {
        return 0;
    }
    for (int i = 2; i * i <= numero; i++) {
        if (numero % i == 0) {
            return 0;
        }
    }
    return 1;
}
