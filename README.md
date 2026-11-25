# C Programming Exercises

![C](https://img.shields.io/badge/language-C-blue.svg)
![Status](https://img.shields.io/badge/status-in%20progress-brightgreen.svg)

## 📖 About

This repository contains exercises and small programs written in **C**, developed during my studies in **Systems Analysis and Development (ADS)** at UNIPÊ, in the course *Algoritmos e Pensamento Computacional*. The goal here is to build a solid foundation in programming logic, algorithms, and problem-solving — skills I'm also applying toward building tech solutions for the legal field (LegalTech).

Each exercise is solved with clean, well-indented code, a header comment describing what it does, and comments explaining the logic used whenever necessary.

## 🗂️ Structure

```
DEV-C/
├── 01-entrada-e-saida/     # variables, data types, printf/scanf, arithmetic operators
├── 02-condicionais/        # if, else, else if
├── 03-lacos/               # for loops, accumulators and counters
├── 04-structs/             # records (struct)
├── 05-vetores/             # arrays and arrays of structs
├── 06-visao-do-banco/      # graded project: digital wallet system (3 files)
├── listas-professora/      # official exercise lists from the course
└── README.md
```

## 🏦 Featured project: Visão do Banco

A digital wallet simulation with customer registration, account rules, deposits and withdrawals, loans, savings bonds, a negative-balance alert, a history report and a Fibonacci-based prize draw. Split into `main.c`, `banco.c` and `banco.h`. See [`06-visao-do-banco`](06-visao-do-banco).

## 🧩 Exercises

### 01 · Input and output
| File | What it does |
|---|---|
| [`idade_daqui_5_anos.c`](01-entrada-e-saida/idade_daqui_5_anos.c) | Shows the user's age 5 years from now |
| [`dobro_triplo.c`](01-entrada-e-saida/dobro_triplo.c) | Calculates the double and triple of a number |
| [`idade_em_dias.c`](01-entrada-e-saida/idade_em_dias.c) | Converts age from years to days |
| [`gorjeta_total.c`](01-entrada-e-saida/gorjeta_total.c) | Calculates a restaurant bill with a 10% tip |
| [`media_3notas.c`](01-entrada-e-saida/media_3notas.c) | Calculates the average of three grades |
| [`celsius_fahrenheit.c`](01-entrada-e-saida/celsius_fahrenheit.c) | Converts Celsius to Fahrenheit |

### 02 · Conditionals
| File | What it does |
|---|---|
| [`situacao_aluno.c`](02-condicionais/situacao_aluno.c) | Averages two grades and shows approved, recovery or failed |
| [`maioridade.c`](02-condicionais/maioridade.c) | Checks whether a person is of legal age |
| [`par_impar.c`](02-condicionais/par_impar.c) | Checks whether a number is even or odd |
| [`positivo_negativo_zero.c`](02-condicionais/positivo_negativo_zero.c) | Classifies a number as positive, negative or zero |
| [`imc.c`](02-condicionais/imc.c) | Calculates BMI and its classification |

### 03 · Loops
| File | What it does |
|---|---|
| [`contagem_ate_n.c`](03-lacos/contagem_ate_n.c) | Counts from 1 to N |
| [`tabuada.c`](03-lacos/tabuada.c) | Shows the multiplication table of a number |
| [`soma_1_ate_n.c`](03-lacos/soma_1_ate_n.c) | Sums 1 + 2 + … + N (accumulator) |
| [`soma_e_pares.c`](03-lacos/soma_e_pares.c) | Sums 5 numbers and counts the even ones |
| [`media_notas_laco.c`](03-lacos/media_notas_laco.c) | Averages 5 grades using a loop |

### 04 · Structs
| File | What it does |
|---|---|
| [`ficha_cliente.c`](04-structs/ficha_cliente.c) | Registers one client record |
| [`produto.c`](04-structs/produto.c) | Registers a product and calculates its total |
| [`boletim_aluno.c`](04-structs/boletim_aluno.c) | Student report card with average and status |
| [`conta_alerta.c`](04-structs/conta_alerta.c) | Bank account with negative-balance alert |

### 05 · Arrays
| File | What it does |
|---|---|
| [`notas_vetor.c`](05-vetores/notas_vetor.c) | Stores 5 grades in an array and averages them |
| [`clientes_vetor.c`](05-vetores/clientes_vetor.c) | Registers clients in an array of structs |

### Course lists (professor's activities)
| File | What it does |
|---|---|
| [`aula08_atividade4_apostadores.c`](listas-professora/aula08_atividade4_apostadores.c) | Class 8, activity 4: five bettors, Fibonacci sums, prizes for largest prime, largest even and largest above-average result |

## ▶️ How to Compile and Run

Using GCC, inside the exercise folder:

```bash
gcc nome_do_arquivo.c -o nome_do_programa
./nome_do_programa
```

On Windows (PowerShell), run it with `.\nome_do_programa.exe`.
For the bank project: `gcc main.c banco.c -o banco`.

## 📌 Topics Covered

- Variables and data types (`int`, `float`, `char`)
- Basic input/output (`scanf` / `printf`) and formatted output
- Arithmetic operators and precedence
- Conditionals (`if` / `else if` / `else` / `switch`)
- Loops (`for`, `do-while`), accumulators and counters
- Structs and arrays of structs
- Functions, header files and multi-file programs
- Recursion (Fibonacci) and bubble sort

## ✍️ Author

**Amanda Baía** — Lawyer (Civil Law, Consumer Law, Family Law) and ADS student, building programming skills toward LegalTech projects.

[GitHub](https://github.com/amanda-baia) · [LinkedIn](https://www.linkedin.com/in/amandabaiaadv)

---

⭐ Feel free to explore the exercises — feedback and suggestions are always welcome!
