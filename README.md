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
├── listas-professora/      # activities from the professor's slides (aula01 … aula08)
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

### 🎓 Course activities (`listas-professora`)

Every activity from the professor's slides, one folder per class. The **Slide** column shows where each statement appears in the class slides.

| Class | Slide | File | What it does |
|---|---|---|---|
| Aula 01 | 12–15 | [`torres_de_hanoi.c`](listas-professora/aula01/torres_de_hanoi.c) | Towers of Hanoi with recursion (slide asks for Python; solved in C) |
| Aula 03 | 20–21 | [`precedencia_operadores.c`](listas-professora/aula03/precedencia_operadores.c) | Operator precedence and associativity: the 5 expressions from the slide |
| Aula 04 | 10–11 | [`categoria_nadador.c`](listas-professora/aula04/categoria_nadador.c) | Swimmer category by age |
| Aula 04 | 18 | [`atividade1_triangulos.c`](listas-professora/aula04/atividade1_triangulos.c) | Activity 1: triangle validity, type by sides and by angles |
| Aula 04 | 19 | [`atividade2_caixa_eletronico.c`](listas-professora/aula04/atividade2_caixa_eletronico.c) | Activity 2: ATM withdrawal keeping at least one note of each value |
| Aula 04 | 20 | [`atividade3_tres_numeros.c`](listas-professora/aula04/atividade3_tres_numeros.c) | Activity 3: largest, smallest, middle, repeats and order of 3 numbers |
| Aula 04 | 21 | [`atividade4_menu_numero.c`](listas-professora/aula04/atividade4_menu_numero.c) | Activity 4: `switch` menu (even/odd, sign, square) |
| Aula 05 | 10–11 | [`ler_ate_zero.c`](listas-professora/aula05/ler_ate_zero.c) | Reads numbers until 0 (`while`) |
| Aula 05 | 12–13 | [`alunos_solucao_elegante.c`](listas-professora/aula05/alunos_solucao_elegante.c) | "More elegant solution": names and grades with a loop |
| Aula 05 | 15–16 | [`login_do_while.c`](listas-professora/aula05/login_do_while.c) | Login with `do-while` and `strcmp` |
| Aula 05 | 19 | [`imprime_1_a_20.c`](listas-professora/aula05/imprime_1_a_20.c) | Prints 1 to 20 (`for`) |
| Aula 05 | 20–21 | [`media_curtidas.c`](listas-professora/aula05/media_curtidas.c) | Average likes of 5 posts |
| Aula 05 | 25 | [`q1_consumo_agua.c`](listas-professora/aula05/q1_consumo_agua.c) | Question 1: water consumption of 5 residents |
| Aula 05 | 26 | [`q2_cofrinho_digital.c`](listas-professora/aula05/q2_cofrinho_digital.c) | Question 2: digital piggy bank |
| Aula 05 | 27 | [`q3_nota_atendimento.c`](listas-professora/aula05/q3_nota_atendimento.c) | Question 3: customer service rating with alert |
| Aula 05 | 28 | [`q4_meta_passos.c`](listas-professora/aula05/q4_meta_passos.c) | Question 4: hours to reach 10,000 steps |
| Aula 05 | 29 | [`l1_par_impar_10.c`](listas-professora/aula05/l1_par_impar_10.c) | List 1: 10 numbers, even/odd count |
| Aula 05 | 29 | [`l2_situacao_alunos.c`](listas-professora/aula05/l2_situacao_alunos.c) | List 2: students' status while the user wants |
| Aula 05 | 29 | [`l3_maior_menor_diferenca.c`](listas-professora/aula05/l3_maior_menor_diferenca.c) | List 3: largest, smallest and difference (no arrays) |
| Aula 05 | 30 | [`l4_soma_positivos_negativos.c`](listas-professora/aula05/l4_soma_positivos_negativos.c) | List 4: sums and counts of positives and negatives |
| Aula 05 | 30 | [`l5_tabuada_repetir.c`](listas-professora/aula05/l5_tabuada_repetir.c) | List 5: multiplication table, repeat with S/s |
| Aula 05 | 30 | [`l6_numero_primo.c`](listas-professora/aula05/l6_numero_primo.c) | List 6: prime check for several numbers |
| Aula 05 | 31 | [`l7_fatorial_validado.c`](listas-professora/aula05/l7_fatorial_validado.c) | List 7: factorial with input validation (0–10) |
| Aula 05 | 31 | [`l8_numero_secreto.c`](listas-professora/aula05/l8_numero_secreto.c) | List 8: secret number game, 10 tries |
| Aula 06 | 14 | [`a1_nome_media_aluno.c`](listas-professora/aula06/a1_nome_media_aluno.c) | Name and average of one student |
| Aula 06 | 20–21 | [`a2_trinta_alunos.c`](listas-professora/aula06/a2_trinta_alunos.c) | Names and averages of 30 students (arrays) |
| Aula 06 | 22–23 | [`a3_matriz_3x3.c`](listas-professora/aula06/a3_matriz_3x3.c) | 3x3 matrix printed with "-" |
| Aula 06 | 25–26 | [`a4_matriz_notas.c`](listas-professora/aula06/a4_matriz_notas.c) | Grades matrix with average column |
| Aula 06 | 28 | [`a5_pesquisa_no_vetor.c`](listas-professora/aula06/a5_pesquisa_no_vetor.c) | Search a number in an array: count and positions |
| Aula 06 | 29 | [`a6_estoque_produtos.c`](listas-professora/aula06/a6_estoque_produtos.c) | Stock of 10 products: low, sold out, largest |
| Aula 07 | 26 | [`q01_mostrar_saudacao.c`](listas-professora/aula07/q01_mostrar_saudacao.c) | Q1: `mostrarSaudacao()` called 3 times |
| Aula 07 | 26 | [`q02_calcular_dobro.c`](listas-professora/aula07/q02_calcular_dobro.c) | Q2: `calcularDobro` |
| Aula 07 | 26 | [`q03_maior_numero.c`](listas-professora/aula07/q03_maior_numero.c) | Q3: `maiorNumero` |
| Aula 07 | 26 | [`q04_celsius_fahrenheit.c`](listas-professora/aula07/q04_celsius_fahrenheit.c) | Q4: `celsiusParaFahrenheit` |
| Aula 07 | 26 | [`q05_eh_par.c`](listas-professora/aula07/q05_eh_par.c) | Q5: `ehPar` returning 1 or 0 |
| Aula 07 | 26 | [`q06_calculadora.c`](listas-professora/aula07/q06_calculadora.c) | Q6: calculator, one function per operation |
| Aula 07 | 27 | [`q07_media_situacao.c`](listas-professora/aula07/q07_media_situacao.c) | Q7: `calcularMedia` and `verificarSituacao` |
| Aula 07 | 27 | [`q08_eh_primo.c`](listas-professora/aula07/q08_eh_primo.c) | Q8: `ehPrimo` testing up to the square root |
| Aula 07 | 27 | [`q09_mostrar_tabuada.c`](listas-professora/aula07/q09_mostrar_tabuada.c) | Q9: `mostrarTabuada` |
| Aula 07 | 27 | [`q10_vendas_cinco_dias.c`](listas-professora/aula07/q10_vendas_cinco_dias.c) | Q10: sales of 5 days (total, average, above average) |
| Aula 07 | 28 | [`q11_notas_turma.c`](listas-professora/aula07/q11_notas_turma.c) | Q11: class grades with functions |
| Aula 07 | 28 | [`q12_estoque_simplificado.c`](listas-professora/aula07/q12_estoque_simplificado.c) | Q12: simplified stock, product search by code |
| Aula 08 | 22 | [`atividade1_sorteio_beneficente.c`](listas-professora/aula08/atividade1_sorteio_beneficente.c) | Activity 1: occurrences, products in alphabetical order, even list descending |
| Aula 08 | 23 | [`atividade2_positivos_negativos.c`](listas-professora/aula08/atividade2_positivos_negativos.c) | Activity 2: positive-even and negative-odd arrays, ascending |
| Aula 08 | 23–24 | [`atividade3_animais.c`](listas-professora/aula08/atividade3_animais.c) | Activity 3: repeated primes and animal matching |
| Aula 08 | 25 | [`atividade4_apostadores.c`](listas-professora/aula08/atividade4_apostadores.c) | Activity 4: 5 bettors, Fibonacci sums, 3 prizes |
| Aula 08 | 26–27 | [`atividade5_participantes_diagonal.c`](listas-professora/aula08/atividade5_participantes_diagonal.c) | Activity 5: unique IDs, weighted average vs. rectangle diagonal |

> `atividade5_participantes_diagonal.c` uses `math.h`: on Linux compile with `-lm` at the end.

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
- Recursion (Fibonacci, Towers of Hanoi) and bubble sort
- Matrices and strings (`strcmp`, `strcpy`)

## ✍️ Author

**Amanda Baía** — Lawyer (Civil Law, Consumer Law, Family Law) and ADS student, building programming skills toward LegalTech projects.

[GitHub](https://github.com/amanda-baia) · [LinkedIn](https://www.linkedin.com/in/amandabaiaadv)

---

⭐ Feel free to explore the exercises — feedback and suggestions are always welcome!
