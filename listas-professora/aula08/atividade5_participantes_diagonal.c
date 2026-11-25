/*
 * Arquivo:     atividade5_participantes_diagonal.c
 * Descricao:   Atividade 5 (Aula 8, slides 26 e 27). Cadastra 4
 *              participantes (nome e idade), calcula um ID unico para cada,
 *              guarda valores numa matriz, ordena por nome, calcula a media
 *              ponderada de cada um e compara com a diagonal de um
 *              retangulo (Pitagoras).
 *
 * Passos:      1. ID = fatorial(idade) / 2. Se repetir, recalcula com
 *                 fatorial(metade da idade) elevado a quantidade de valores;
 *                 se ainda repetir, usa a metade da metade, e assim por
 *                 diante. Se chegar a 0 e continuar repetido, soma 1 ate
 *                 ficar unico (para nunca entrar em laco infinito).
 *              2. Matriz: linha = participante, coluna = valor.
 *              3. Ordem alfabetica, levando junto idade, ID e a linha
 *                 inteira da matriz.
 *              4. Media ponderada: pesos 1, 2, 3...
 *                 media = (v1*1 + v2*2 + ...) / (1 + 2 + ...)
 *              5. Diagonal: os 2 primeiros valores NAO negativos digitados
 *                 (na ordem de entrada) sao os lados.
 *                 diagonal = raiz(lado1^2 + lado2^2)
 *              6. Acima / abaixo / sobre a diagonal.
 *
 * Escolhas:    idade de 1 a 20 e ate 10 valores, para o fatorial caber.
 *              Os IDs sao double porque crescem muito (20! tem 19 digitos).
 *              "Sobre a diagonal": diferenca menor que 0,01.
 *
 * Compilar:    gcc atividade5_participantes_diagonal.c -o atividade5 -lm
 *              (o -lm liga a biblioteca math.h no Linux; no Windows com
 *              MinGW funciona sem ele)
 *
 * Autora:      Amanda Baia
 * Disciplina:  Algoritmos e Pensamento Computacional - Profa. Joanacelle Caldas
 */

#include <stdio.h>
#include <string.h>
#include <math.h>

#define PART 4
#define MAXV 10

double fatorial(int n);
double potencia(double base, int expoente);
int idRepetido(double id, double ids[], int qtd);
float mediaPonderada(float valores[], int qtd);

int main() {
    char nome[PART][50];
    int idade[PART];
    double id[PART];
    float valores[PART][MAXV];
    int qtdValores;

    float lado[2];
    int ladosAchados = 0;

    /* quantidade de valores (precisa vir antes: entra no calculo do ID) */
    do {
        printf("Quantos valores para cada participante? (1 a %d): ", MAXV);
        scanf("%d", &qtdValores);
    } while (qtdValores < 1 || qtdValores > MAXV);

    /* 1 e 2. cadastro, ID e valores */
    for (int i = 0; i < PART; i++) {
        printf("\nParticipante %d\n", i + 1);
        printf("Nome: ");
        scanf(" %49[^\n]", nome[i]);
        do {
            printf("Idade (1 a 20): ");
            scanf("%d", &idade[i]);
        } while (idade[i] < 1 || idade[i] > 20);

        id[i] = fatorial(idade[i]) / 2;
        int metade = idade[i] / 2;
        while (idRepetido(id[i], id, i)) {
            if (metade > 0) {
                id[i] = potencia(fatorial(metade), qtdValores);
                metade = metade / 2;
            } else {
                id[i] = id[i] + 1;          /* ultimo recurso */
            }
        }
        printf("ID: %.0f\n", id[i]);

        for (int j = 0; j < qtdValores; j++) {
            printf("Valor %d: ", j + 1);
            scanf("%f", &valores[i][j]);

            /* 5. guarda os 2 primeiros valores nao negativos */
            if (valores[i][j] >= 0 && ladosAchados < 2) {
                lado[ladosAchados] = valores[i][j];
                ladosAchados++;
            }
        }
    }

    /* 3. ordem alfabetica, trocando TUDO do participante junto */
    for (int a = 0; a < PART - 1; a++) {
        for (int b = 0; b < PART - 1 - a; b++) {
            if (strcmp(nome[b], nome[b + 1]) > 0) {
                char auxNome[50];
                strcpy(auxNome, nome[b]);
                strcpy(nome[b], nome[b + 1]);
                strcpy(nome[b + 1], auxNome);

                int auxIdade = idade[b];
                idade[b] = idade[b + 1];
                idade[b + 1] = auxIdade;

                double auxId = id[b];
                id[b] = id[b + 1];
                id[b + 1] = auxId;

                for (int j = 0; j < qtdValores; j++) {
                    float auxV = valores[b][j];
                    valores[b][j] = valores[b + 1][j];
                    valores[b + 1][j] = auxV;
                }
            }
        }
    }

    /* 5. diagonal */
    float diagonal = 0;
    if (ladosAchados == 2) {
        diagonal = sqrt(lado[0] * lado[0] + lado[1] * lado[1]);
        printf("\nLados do retangulo: %.2f e %.2f | Diagonal: %.2f\n",
               lado[0], lado[1], diagonal);
    } else {
        printf("\nNao foi possivel calcular a diagonal: faltam dois valores nao negativos.\n");
    }

    /* 4, 6 e 7. media ponderada, classificacao e saida */
    printf("\n========== CLASSIFICACAO FINAL ==========\n\n");
    for (int i = 0; i < PART; i++) {
        float media = mediaPonderada(valores[i], qtdValores);

        printf("%s ", nome[i]);
        for (int p = strlen(nome[i]); p < 16; p++) {
            printf(".");                         /* pontinhos do exemplo */
        }

        if (ladosAchados < 2) {
            printf(" SEM DIAGONAL");
        } else if (media - diagonal > 0.01) {
            printf(" ACIMA DA DIAGONAL");
        } else if (diagonal - media > 0.01) {
            printf(" ABAIXO DA DIAGONAL");
        } else {
            printf(" SOBRE A DIAGONAL");
        }
        printf("   (ID %.0f, media ponderada %.2f)\n", id[i], media);
    }
    printf("\n=========================================\n");

    return 0;
}

double fatorial(int n) {
    double f = 1;
    for (int i = 2; i <= n; i++) {
        f = f * i;
    }
    return f;
}

double potencia(double base, int expoente) {
    double r = 1;
    for (int i = 0; i < expoente; i++) {
        r = r * base;
    }
    return r;
}

/* 1 se "id" ja existe entre os "qtd" primeiros IDs, 0 se nao */
int idRepetido(double id, double ids[], int qtd) {
    for (int i = 0; i < qtd; i++) {
        if (ids[i] == id) {
            return 1;
        }
    }
    return 0;
}

float mediaPonderada(float valores[], int qtd) {
    float soma = 0;
    int somaPesos = 0;
    for (int j = 0; j < qtd; j++) {
        soma = soma + valores[j] * (j + 1);     /* peso = posicao + 1 */
        somaPesos = somaPesos + (j + 1);
    }
    return soma / somaPesos;
}
