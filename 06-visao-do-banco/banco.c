/*
 * Arquivo:     banco.c
 * Descricao:   "Capitulos" do banco: as funcoes completas de cada opcao
 *              do menu e as funcoes do Fibonacci feitas em sala de aula.
 *
 * Observacao:  o vetor c[] e passado para as funcoes "por endereco"
 *              (o nome do vetor ja e um endereco). Por isso, quando uma
 *              funcao muda c[i].saldo..., a mudanca vale tambem na main.
 *
 * Autora:      Amanda Baia
 * Disciplina:  Algoritmos e Pensamento Computacional - Profa. Joanacelle Caldas
 */

#include <stdio.h>
#include "banco.h"


/* ===================================================================
   ABRIR O BANCO
   Cadastra n clientes, gera o numero da conta, aplica a regra
   corrente x salario e zera os saldos. Devolve n para a main.
   =================================================================== */
int abrirBanco(struct cliente c[]) {
    int n;

    /* o banco pode ter n clientes */
    do {
        printf("\nQuantos clientes serao cadastrados? (1 a %d): ", MAX);
        scanf("%d", &n);
    } while (n < 1 || n > MAX);

    for (int i = 0; i < n; i++) {
        printf("\nNome do cliente %d: ", i + 1);
        scanf(" %49[^\n]", c[i].nome);

        c[i].numero = 1000 + i;       /* numero automatico */

        /* REGRA: repete enquanto tiver corrente E salario juntas */
        do {
            printf("Tem conta corrente? (1 = sim, 0 = nao): ");
            scanf("%d", &c[i].temCorrente);
            printf("Tem conta salario? (1 = sim, 0 = nao): ");
            scanf("%d", &c[i].temSalario);
            printf("Tem conta poupanca? (1 = sim, 0 = nao): ");
            scanf("%d", &c[i].temPoupanca);

            if (c[i].temCorrente == 1 && c[i].temSalario == 1) {
                printf("ERRO: nao pode ter corrente e salario juntas. Responda de novo.\n");
            }
        } while (c[i].temCorrente == 1 && c[i].temSalario == 1);

        /* todos comecam zerados (regra do enunciado) */
        c[i].saldoCorrente = 0;
        c[i].saldoSalario = 0;
        c[i].saldoPoupanca = 0;
        c[i].pegouEmprestimo = 0;
        c[i].temTitulo = 0;
        c[i].premio = 0;
    }

    return n;
}


/* ===================================================================
   CONSULTAR HISTORICO
   As 5 secoes do enunciado. Cada secao = um for passando pelos
   clientes + um if escolhendo quem aparece.
   =================================================================== */
void consultarHistorico(struct cliente c[], int n) {

    /* SECAO 1: saldo total do banco (cofrinho) */
    float total = 0;
    for (int i = 0; i < n; i++) {
        total = total + c[i].saldoCorrente + c[i].saldoSalario + c[i].saldoPoupanca;
    }
    printf("\n== Saldo Total do banco ==\n");
    printf("%d clientes | R$ %.2f\n", n, total);

    /* SECAO 2: aptos a emprestimo
       Regra: poupanca COM saldo E conta corrente E nao pegou antes.
       Limite: 25% de 10 vezes o saldo. Escolha: "saldo total da conta"
       = saldo da poupanca, que e a conta exigida pela regra. */
    printf("\n== Clientes Aptos a Emprestimos ==\n");
    for (int i = 0; i < n; i++) {
        if (c[i].temPoupanca == 1 && c[i].saldoPoupanca > 0 &&
            c[i].temCorrente == 1 && c[i].pegouEmprestimo == 0) {
            float limite = 0.25 * (10 * c[i].saldoPoupanca);
            printf("%s | %d-03 | R$ %.2f\n", c[i].nome, c[i].numero, limite);
        }
    }

    /* SECAO 3: saldo negativo. O enunciado cita "conta salario" no
       historico, mas a regra do alerta fala em conta corrente; segui a regra. */
    printf("\n== Clientes com Saldo Negativo na Conta Corrente ==\n");
    for (int i = 0; i < n; i++) {
        if (c[i].temCorrente == 1 && c[i].saldoCorrente < 0) {
            printf("%s | %d-01 | R$ %.2f\n", c[i].nome, c[i].numero, c[i].saldoCorrente);
        }
    }

    /* SECAO 4: aptos a titulos (salario entre R$ 1.000 e R$ 1.500) */
    printf("\n== Clientes Aptos a Compra de Titulos ==\n");
    for (int i = 0; i < n; i++) {
        if (c[i].temSalario == 1 && c[i].saldoSalario >= 1000 && c[i].saldoSalario <= 1500) {
            printf("%s | %d-02 | R$ %.2f\n", c[i].nome, c[i].numero, c[i].saldoSalario);
        }
    }

    /* SECAO 5: contemplado no sorteio (quem tem premio > 0) */
    printf("\n== Clientes Contemplado no Sorteio ==\n");
    int achou = 0;
    for (int i = 0; i < n; i++) {
        if (c[i].premio > 0) {
            printf("%s | %d-02 | R$ %.2f\n", c[i].nome, c[i].numero, c[i].premio);
            achou = 1;
        }
    }
    if (achou == 0) {
        printf("Nenhum sorteio realizado.\n");
    }
}


/* ===================================================================
   EFETUAR SORTEIO
   1. acha os 5 maiores saldos (conta salario, que e a dos titulos)
   2. confere se os 5 compraram titulo
   3. cada um informa um numero -> soma de Fibonacci
   4. vence a maior soma que for PRIMA (criterio da aula)
   5. premio = 10 vezes o saldo da conta do vencedor
   =================================================================== */
void efetuarSorteio(struct cliente c[], int n) {

    if (n < 5) {
        printf("\nO sorteio precisa de pelo menos 5 clientes.\n");
        return;
    }

    /* 1. ordem[] guarda as gavetas; ordenamos as GAVETAS pelo saldo
          salario, do maior para o menor (bubble sort) */
    int ordem[MAX];
    for (int i = 0; i < n; i++) {
        ordem[i] = i;
    }
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - 1 - i; j++) {
            if (c[ordem[j]].saldoSalario < c[ordem[j + 1]].saldoSalario) {
                int aux = ordem[j];              /* troca */
                ordem[j] = ordem[j + 1];
                ordem[j + 1] = aux;
            }
        }
    }

    /* 2. os 5 primeiros precisam ter titulo */
    for (int k = 0; k < 5; k++) {
        if (c[ordem[k]].temTitulo == 0) {
            printf("\nSorteio cancelado: nem todos os 5 maiores saldos compraram titulo.\n");
            return;
        }
    }

    /* 3 e 4. Fibonacci da aula: maior soma prima vence */
    int maiorSoma = -1;
    int vencedor = -1;
    for (int k = 0; k < 5; k++) {
        int g = ordem[k];            /* gaveta do participante */
        int palpite;
        do {
            printf("%s, informe um numero de 1 a 30: ", c[g].nome);
            scanf("%d", &palpite);
        } while (palpite < 1 || palpite > 30);

        int soma = somafibonacci(palpite);
        printf("  Soma de Fibonacci: %d\n", soma);

        if (ehprimo(soma) && soma > maiorSoma) {
            maiorSoma = soma;
            vencedor = g;
        }
    }

    /* 5. premio */
    if (vencedor == -1) {
        printf("\nNinguem obteve soma prima. Sem vencedor.\n");
    } else {
        c[vencedor].premio = 10 * c[vencedor].saldoSalario;
        c[vencedor].saldoSalario = c[vencedor].saldoSalario + c[vencedor].premio;
        printf("\nVencedor: %s! Premio de R$ %.2f creditado na conta %d-02.\n",
               c[vencedor].nome, c[vencedor].premio, c[vencedor].numero);
    }
}


/* ===================================================================
   MOVIMENTAR CONTA
   Acha o cliente pelo numero (gaveta = numero - 1000), mostra o alerta
   e faz a operacao: deposito, saque, emprestimo ou titulo.
   =================================================================== */
void movimentarConta(struct cliente c[], int n) {
    int num, pos, tipo, operacao;
    float valor;

    /* 1. acha o cliente */
    printf("\nNumero da conta (ex: 1000): ");
    scanf("%d", &num);
    pos = num - 1000;

    if (pos < 0 || pos >= n) {
        printf("Conta nao encontrada!\n");
        return;
    }
    printf("Cliente: %s\n", c[pos].nome);

    /* 2. ALERTA: sempre que o cliente acessa */
    if (c[pos].temCorrente == 1 && c[pos].saldoCorrente < 0) {
        printf("ALERTA: saldo negativo na conta corrente!\n");
    }

    /* 3. qual operacao */
    printf("1 - Depositar\n");
    printf("2 - Sacar\n");
    printf("3 - Solicitar emprestimo\n");
    printf("4 - Comprar titulo de capitalizacao\n");
    printf("Operacao: ");
    scanf("%d", &operacao);

    /* --- DEPOSITO E SAQUE --- */
    if (operacao == 1 || operacao == 2) {
        printf("Qual conta? (1 corrente, 2 salario, 3 poupanca): ");
        scanf("%d", &tipo);
        printf("Valor: R$ ");
        scanf("%f", &valor);

        if (operacao == 2) {
            valor = -valor;           /* saque = valor negativo */
        }

        if (tipo == 1 && c[pos].temCorrente == 1) {
            c[pos].saldoCorrente = c[pos].saldoCorrente + valor;
            printf("Novo saldo corrente: R$ %.2f\n", c[pos].saldoCorrente);
        } else if (tipo == 2 && c[pos].temSalario == 1) {
            c[pos].saldoSalario = c[pos].saldoSalario + valor;
            printf("Novo saldo salario: R$ %.2f\n", c[pos].saldoSalario);
        } else if (tipo == 3 && c[pos].temPoupanca == 1) {
            c[pos].saldoPoupanca = c[pos].saldoPoupanca + valor;
            printf("Novo saldo poupanca: R$ %.2f\n", c[pos].saldoPoupanca);
        } else {
            printf("Esse cliente nao tem essa conta!\n");
        }

    /* --- EMPRESTIMO --- */
    } else if (operacao == 3) {
        if (c[pos].temPoupanca == 1 && c[pos].saldoPoupanca > 0 &&
            c[pos].temCorrente == 1 && c[pos].pegouEmprestimo == 0) {

            float limite = 0.25 * (10 * c[pos].saldoPoupanca);
            printf("Limite disponivel: R$ %.2f\n", limite);
            printf("Valor do emprestimo: R$ ");
            scanf("%f", &valor);

            if (valor > 0 && valor <= limite) {
                c[pos].saldoCorrente = c[pos].saldoCorrente + valor;  /* credita na corrente */
                c[pos].pegouEmprestimo = 1;                           /* so 1 por cliente */
                printf("Emprestimo aprovado! Novo saldo corrente: R$ %.2f\n", c[pos].saldoCorrente);
            } else {
                printf("Valor invalido ou acima do limite.\n");
            }
        } else {
            printf("Emprestimo negado: precisa de poupanca com saldo, conta corrente\n");
            printf("e nao pode ter pegado emprestimo antes.\n");
        }

    /* --- TITULO DE CAPITALIZACAO --- */
    } else if (operacao == 4) {
        if (c[pos].temSalario == 1 && c[pos].saldoSalario >= 1000 && c[pos].saldoSalario <= 1500) {
            c[pos].temTitulo = 1;
            printf("Titulo de capitalizacao adquirido!\n");
        } else {
            printf("Para comprar titulo, o saldo da conta salario precisa estar\n");
            printf("entre R$ 1.000,00 e R$ 1.500,00.\n");
        }

    } else {
        printf("Operacao invalida!\n");
    }
}


/* ===================================================================
   FUNCOES DO FIBONACCI (feitas em sala de aula)
   =================================================================== */

/* termo "valor" da sequencia 0, 1, 1, 2, 3, 5, 8... (recursiva) */
int fibonacci(int valor) {
    if (valor == 0) return 0;          /* caso base */
    if (valor == 1) return 1;          /* caso base */
    return fibonacci(valor - 1) + fibonacci(valor - 2);
}

/* soma os "valor" primeiros termos (cofrinho) */
int somafibonacci(int valor) {
    int soma = 0;
    for (int i = 0; i < valor; i++) {
        soma = soma + fibonacci(i);
    }
    return soma;
}

/* 1 se for primo, 0 se nao for */
int ehprimo(int valor) {
    if (valor < 2) {
        return 0;
    }
    for (int i = 2; i < valor; i++) {
        if (valor % i == 0) {
            return 0;                  /* achou divisor: nao e primo */
        }
    }
    return 1;
}
