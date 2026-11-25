/*
 * Arquivo:     aula08_atividade4_apostadores.c
 * Descricao:   Aula 8 - Atividade 4. Cinco apostadores informam nome e um
 *              inteiro positivo. Para cada um, calcula a soma da sequencia
 *              de Fibonacci com essa quantidade de termos e premia:
 *                1o lugar - maior resultado PRIMO;
 *                2o lugar - maior resultado PAR (entre quem nao ganhou);
 *                3o lugar - maior resultado ACIMA DA MEDIA (entre quem nao
 *                           ganhou).
 *              Ninguem recebe dois premios; se ninguem atender a um
 *              criterio, aquele premio fica sem vencedor.
 *
 * Observacao:  o valor vai de 1 a 40 para a soma caber num int
 *              (soma dos 40 primeiros termos = 165.580.140).
 *              Exemplo: valor 5 -> 0 + 1 + 1 + 2 + 3 = 7.
 *
 * Autora:      Amanda Baia
 * Disciplina:  Algoritmos e Pensamento Computacional - Profa. Joanacelle Caldas
 */

#include <stdio.h>

#define QTD 5

/* prototipos: avisam que as funcoes existem (elas estao depois da main) */
int somaFibonacci(int termos);
int ehPrimo(int numero);

int main() {
    char nome[QTD][50];
    int valor[QTD];
    int resultado[QTD];        /* vetor com os resultados calculados */
    int premiado[QTD];         /* bandeirinha: 1 = ja ganhou, 0 = nao */

    /* ---------- 1. cadastro dos apostadores ---------- */
    for (int i = 0; i < QTD; i++) {
        printf("\nApostador %d\n", i + 1);
        printf("Nome: ");
        scanf(" %49[^\n]", nome[i]);

        do {
            printf("Numero inteiro positivo (1 a 40): ");
            scanf("%d", &valor[i]);
        } while (valor[i] < 1 || valor[i] > 40);

        resultado[i] = somaFibonacci(valor[i]);
        premiado[i] = 0;
        printf("Soma de Fibonacci: %d\n", resultado[i]);
    }

    /* ---------- 2. 1o lugar: maior resultado primo ---------- */
    int primeiro = -1;                       /* -1 = ninguem ainda */
    for (int i = 0; i < QTD; i++) {
        if (ehPrimo(resultado[i])) {
            if (primeiro == -1 || resultado[i] > resultado[primeiro]) {
                primeiro = i;
            }
        }
    }
    if (primeiro != -1) {
        premiado[primeiro] = 1;
    }

    /* ---------- 3. 2o lugar: maior par entre quem nao ganhou ---------- */
    int segundo = -1;
    for (int i = 0; i < QTD; i++) {
        if (premiado[i] == 0 && resultado[i] % 2 == 0) {
            if (segundo == -1 || resultado[i] > resultado[segundo]) {
                segundo = i;
            }
        }
    }
    if (segundo != -1) {
        premiado[segundo] = 1;
    }

    /* ---------- 4. 3o lugar: maior acima da media, entre quem nao ganhou ---------- */
    float soma = 0;                          /* cofrinho */
    for (int i = 0; i < QTD; i++) {
        soma = soma + resultado[i];
    }
    float media = soma / QTD;

    int terceiro = -1;
    for (int i = 0; i < QTD; i++) {
        if (premiado[i] == 0 && resultado[i] > media) {
            if (terceiro == -1 || resultado[i] > resultado[terceiro]) {
                terceiro = i;
            }
        }
    }
    if (terceiro != -1) {
        premiado[terceiro] = 1;
    }

    /* ---------- 5. resultado (do 1o para o 3o lugar) ---------- */
    printf("\n===== VENCEDORES =====\n");
    printf("(media dos resultados: %.2f)\n", media);

    if (primeiro != -1) printf("1o lugar: %s\n", nome[primeiro]);
    else                printf("1o lugar: sem vencedor\n");

    if (segundo != -1)  printf("2o lugar: %s\n", nome[segundo]);
    else                printf("2o lugar: sem vencedor\n");

    if (terceiro != -1) printf("3o lugar: %s\n", nome[terceiro]);
    else                printf("3o lugar: sem vencedor\n");

    return 0;
}

/* soma os "termos" primeiros numeros da sequencia 0, 1, 1, 2, 3, 5, 8...
   (versao com laco: a recursiva da aula ficaria lenta com valores grandes) */
int somaFibonacci(int termos) {
    int anterior = 0;     /* termo atual */
    int proximo = 1;      /* termo seguinte */
    int soma = 0;
    for (int i = 0; i < termos; i++) {
        soma = soma + anterior;
        int novo = anterior + proximo;   /* anda uma casa na sequencia */
        anterior = proximo;
        proximo = novo;
    }
    return soma;
}

/* 1 se for primo, 0 se nao for (menores que 2 nao sao primos) */
int ehPrimo(int numero) {
    if (numero < 2) {
        return 0;
    }
    for (int i = 2; i * i <= numero; i++) {   /* basta testar ate a raiz */
        if (numero % i == 0) {
            return 0;
        }
    }
    return 1;
}
