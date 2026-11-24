# Visão do Banco 🏦

Atividade avaliativa da disciplina **Algoritmos e Pensamento Computacional** (UNIPÊ, Profa. Joanacelle Caldas): simulação de uma carteira digital em C.

## O que o sistema faz

- **Abrir o banco**: cadastra *n* clientes, com número de conta automático (1000-01, 1000-03…) e saldos zerados.
- **Regra das contas**: o cliente não pode ter conta corrente e conta-salário ao mesmo tempo.
- **Movimentar conta**: depósito, saque, solicitação de empréstimo e compra de título de capitalização.
- **Alerta**: o cliente com saldo negativo na conta corrente recebe um aviso sempre que acessa o sistema.
- **Empréstimo**: para quem tem poupança com saldo e conta corrente; limite de 25% de 10 vezes o saldo; um por cliente.
- **Títulos de capitalização**: para quem tem entre R$ 1.000,00 e R$ 1.500,00 na conta-salário.
- **Sorteio**: entre os 5 maiores saldos, desde que todos tenham título, usando o algoritmo de Fibonacci visto em aula. O vencedor recebe 10 vezes o saldo.
- **Histórico**: saldo total do banco, aptos a empréstimo, saldos negativos, aptos a títulos e contemplado no sorteio.

## Organização

| Arquivo | Conteúdo |
|---|---|
| `banco.h` | molde da ficha (`struct cliente`), constante `MAX` e protótipos |
| `banco.c` | funções completas de cada opção do menu e funções de Fibonacci |
| `main.c` | menu principal, que chama as funções |

## Como compilar e executar

```bash
gcc main.c banco.c -o banco
./banco
```

No Windows (PowerShell): `.\banco.exe`
