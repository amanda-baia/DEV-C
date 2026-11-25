# Exercícios em Linguagem C

![C](https://img.shields.io/badge/linguagem-C-blue.svg)
![Status](https://img.shields.io/badge/status-em%20andamento-brightgreen.svg)

🇺🇸 [English version](README.en.md)

## 📖 Sobre

Este repositório reúne exercícios e pequenos programas em **C**, desenvolvidos durante o curso de **Análise e Desenvolvimento de Sistemas (ADS)** na UNIPÊ, na disciplina *Algoritmos e Pensamento Computacional*. O objetivo é construir uma base sólida em lógica de programação, algoritmos e resolução de problemas — habilidades que também aplico na criação de soluções tecnológicas para a área jurídica (LegalTech).

Cada exercício tem código limpo e bem indentado, um comentário de cabeçalho explicando o que ele faz e comentários sobre a lógica usada sempre que necessário.

## 🗂️ Estrutura

```
DEV-C/
├── 01-entrada-e-saida/     # variáveis, tipos de dados, printf/scanf, operadores aritméticos
├── 02-condicionais/        # if, else, else if
├── 03-lacos/               # laço for, acumuladores e contadores
├── 04-structs/             # registros (struct)
├── 05-vetores/             # vetores e vetores de struct
├── 06-visao-do-banco/      # projeto avaliativo: carteira digital (3 arquivos)
├── listas-professora/      # atividades dos slides da professora (aula01 … aula08)
├── README.md               # este arquivo (português)
└── README.en.md            # versão em inglês
```

## 🏦 Projeto em destaque: Visão do Banco

Simulação de uma carteira digital com cadastro de clientes, regras de contas, depósitos e saques, empréstimos, títulos de capitalização, alerta de saldo negativo, relatório de histórico e sorteio baseado em Fibonacci. Dividido em `main.c`, `banco.c` e `banco.h`. Veja [`06-visao-do-banco`](06-visao-do-banco).

## 🧩 Exercícios

### 01 · Entrada e saída
| Arquivo | O que faz |
|---|---|
| [`idade_daqui_5_anos.c`](01-entrada-e-saida/idade_daqui_5_anos.c) | Mostra a idade do usuário daqui a 5 anos |
| [`dobro_triplo.c`](01-entrada-e-saida/dobro_triplo.c) | Calcula o dobro e o triplo de um número |
| [`idade_em_dias.c`](01-entrada-e-saida/idade_em_dias.c) | Converte a idade de anos para dias |
| [`gorjeta_total.c`](01-entrada-e-saida/gorjeta_total.c) | Calcula a conta de um restaurante com 10% de gorjeta |
| [`media_3notas.c`](01-entrada-e-saida/media_3notas.c) | Calcula a média de três notas |
| [`celsius_fahrenheit.c`](01-entrada-e-saida/celsius_fahrenheit.c) | Converte Celsius para Fahrenheit |

### 02 · Condicionais
| Arquivo | O que faz |
|---|---|
| [`situacao_aluno.c`](02-condicionais/situacao_aluno.c) | Faz a média de duas notas e mostra aprovado, recuperação ou reprovado |
| [`maioridade.c`](02-condicionais/maioridade.c) | Verifica se a pessoa é maior de idade |
| [`par_impar.c`](02-condicionais/par_impar.c) | Verifica se um número é par ou ímpar |
| [`positivo_negativo_zero.c`](02-condicionais/positivo_negativo_zero.c) | Classifica um número como positivo, negativo ou zero |
| [`imc.c`](02-condicionais/imc.c) | Calcula o IMC e sua classificação |

### 03 · Laços
| Arquivo | O que faz |
|---|---|
| [`contagem_ate_n.c`](03-lacos/contagem_ate_n.c) | Conta de 1 até N |
| [`tabuada.c`](03-lacos/tabuada.c) | Mostra a tabuada de um número |
| [`soma_1_ate_n.c`](03-lacos/soma_1_ate_n.c) | Soma 1 + 2 + … + N (acumulador) |
| [`soma_e_pares.c`](03-lacos/soma_e_pares.c) | Soma 5 números e conta os pares |
| [`media_notas_laco.c`](03-lacos/media_notas_laco.c) | Faz a média de 5 notas usando um laço |

### 04 · Structs
| Arquivo | O que faz |
|---|---|
| [`ficha_cliente.c`](04-structs/ficha_cliente.c) | Cadastra a ficha de um cliente |
| [`produto.c`](04-structs/produto.c) | Cadastra um produto e calcula o total |
| [`boletim_aluno.c`](04-structs/boletim_aluno.c) | Boletim do aluno com média e situação |
| [`conta_alerta.c`](04-structs/conta_alerta.c) | Conta bancária com alerta de saldo negativo |

### 05 · Vetores
| Arquivo | O que faz |
|---|---|
| [`notas_vetor.c`](05-vetores/notas_vetor.c) | Guarda 5 notas num vetor e calcula a média |
| [`clientes_vetor.c`](05-vetores/clientes_vetor.c) | Cadastra clientes num vetor de struct |

### 🎓 Atividades da disciplina (`listas-professora`)

Todas as atividades dos slides da professora, uma pasta por aula. A coluna **Slide** mostra onde cada enunciado aparece nos slides da aula.

| Aula | Slide | Arquivo | O que faz |
|---|---|---|---|
| Aula 01 | 12–15 | [`torres_de_hanoi.c`](listas-professora/aula01/torres_de_hanoi.c) | Torres de Hanói com recursão (o slide pede em Python; feito em C) |
| Aula 03 | 20–21 | [`precedencia_operadores.c`](listas-professora/aula03/precedencia_operadores.c) | Precedência e associatividade: as 5 expressões do slide |
| Aula 04 | 10–11 | [`categoria_nadador.c`](listas-professora/aula04/categoria_nadador.c) | Categoria do nadador pela idade |
| Aula 04 | 18 | [`atividade1_triangulos.c`](listas-professora/aula04/atividade1_triangulos.c) | Atividade 1: se forma triângulo e o tipo pelos lados e pelos ângulos |
| Aula 04 | 19 | [`atividade2_caixa_eletronico.c`](listas-professora/aula04/atividade2_caixa_eletronico.c) | Atividade 2: saque no caixa eletrônico preservando uma nota de cada |
| Aula 04 | 20 | [`atividade3_tres_numeros.c`](listas-professora/aula04/atividade3_tres_numeros.c) | Atividade 3: maior, menor, intermediário, repetidos e ordem de 3 números |
| Aula 04 | 21 | [`atividade4_menu_numero.c`](listas-professora/aula04/atividade4_menu_numero.c) | Atividade 4: menu com `switch` (par/ímpar, sinal, quadrado) |
| Aula 05 | 10–11 | [`ler_ate_zero.c`](listas-professora/aula05/ler_ate_zero.c) | Lê números até digitar 0 (`while`) |
| Aula 05 | 12–13 | [`alunos_solucao_elegante.c`](listas-professora/aula05/alunos_solucao_elegante.c) | "Solução mais elegante": nomes e notas com laço |
| Aula 05 | 15–16 | [`login_do_while.c`](listas-professora/aula05/login_do_while.c) | Login com `do-while` e `strcmp` |
| Aula 05 | 19 | [`imprime_1_a_20.c`](listas-professora/aula05/imprime_1_a_20.c) | Imprime de 1 até 20 (`for`) |
| Aula 05 | 20–21 | [`media_curtidas.c`](listas-professora/aula05/media_curtidas.c) | Média de curtidas de 5 publicações |
| Aula 05 | 25 | [`q1_consumo_agua.c`](listas-professora/aula05/q1_consumo_agua.c) | Questão 1: consumo de água de 5 moradores |
| Aula 05 | 26 | [`q2_cofrinho_digital.c`](listas-professora/aula05/q2_cofrinho_digital.c) | Questão 2: cofrinho digital |
| Aula 05 | 27 | [`q3_nota_atendimento.c`](listas-professora/aula05/q3_nota_atendimento.c) | Questão 3: nota do atendimento com alerta |
| Aula 05 | 28 | [`q4_meta_passos.c`](listas-professora/aula05/q4_meta_passos.c) | Questão 4: horas para atingir 10.000 passos |
| Aula 05 | 29 | [`l1_par_impar_10.c`](listas-professora/aula05/l1_par_impar_10.c) | Lista 1: 10 números, contagem de pares e ímpares |
| Aula 05 | 29 | [`l2_situacao_alunos.c`](listas-professora/aula05/l2_situacao_alunos.c) | Lista 2: situação dos alunos enquanto o usuário quiser |
| Aula 05 | 29 | [`l3_maior_menor_diferenca.c`](listas-professora/aula05/l3_maior_menor_diferenca.c) | Lista 3: maior, menor e diferença (sem vetores) |
| Aula 05 | 30 | [`l4_soma_positivos_negativos.c`](listas-professora/aula05/l4_soma_positivos_negativos.c) | Lista 4: somas e quantidades de positivos e negativos |
| Aula 05 | 30 | [`l5_tabuada_repetir.c`](listas-professora/aula05/l5_tabuada_repetir.c) | Lista 5: tabuada, repete com S/s |
| Aula 05 | 30 | [`l6_numero_primo.c`](listas-professora/aula05/l6_numero_primo.c) | Lista 6: verifica se vários números são primos |
| Aula 05 | 31 | [`l7_fatorial_validado.c`](listas-professora/aula05/l7_fatorial_validado.c) | Lista 7: fatorial com validação da entrada (0 a 10) |
| Aula 05 | 31 | [`l8_numero_secreto.c`](listas-professora/aula05/l8_numero_secreto.c) | Lista 8: jogo do número secreto, 10 tentativas |
| Aula 06 | 14 | [`a1_nome_media_aluno.c`](listas-professora/aula06/a1_nome_media_aluno.c) | Nome e média de um aluno |
| Aula 06 | 20–21 | [`a2_trinta_alunos.c`](listas-professora/aula06/a2_trinta_alunos.c) | Nomes e médias de 30 alunos (vetores) |
| Aula 06 | 22–23 | [`a3_matriz_3x3.c`](listas-professora/aula06/a3_matriz_3x3.c) | Matriz 3x3 exibida com "-" |
| Aula 06 | 25–26 | [`a4_matriz_notas.c`](listas-professora/aula06/a4_matriz_notas.c) | Matriz de notas com coluna de média |
| Aula 06 | 28 | [`a5_pesquisa_no_vetor.c`](listas-professora/aula06/a5_pesquisa_no_vetor.c) | Pesquisa um número no vetor: quantas vezes e em quais posições |
| Aula 06 | 29 | [`a6_estoque_produtos.c`](listas-professora/aula06/a6_estoque_produtos.c) | Estoque de 10 produtos: baixo, esgotado e maior |
| Aula 07 | 26 | [`q01_mostrar_saudacao.c`](listas-professora/aula07/q01_mostrar_saudacao.c) | Q1: `mostrarSaudacao()` chamada 3 vezes |
| Aula 07 | 26 | [`q02_calcular_dobro.c`](listas-professora/aula07/q02_calcular_dobro.c) | Q2: `calcularDobro` |
| Aula 07 | 26 | [`q03_maior_numero.c`](listas-professora/aula07/q03_maior_numero.c) | Q3: `maiorNumero` |
| Aula 07 | 26 | [`q04_celsius_fahrenheit.c`](listas-professora/aula07/q04_celsius_fahrenheit.c) | Q4: `celsiusParaFahrenheit` |
| Aula 07 | 26 | [`q05_eh_par.c`](listas-professora/aula07/q05_eh_par.c) | Q5: `ehPar` devolvendo 1 ou 0 |
| Aula 07 | 26 | [`q06_calculadora.c`](listas-professora/aula07/q06_calculadora.c) | Q6: calculadora, uma função para cada operação |
| Aula 07 | 27 | [`q07_media_situacao.c`](listas-professora/aula07/q07_media_situacao.c) | Q7: `calcularMedia` e `verificarSituacao` |
| Aula 07 | 27 | [`q08_eh_primo.c`](listas-professora/aula07/q08_eh_primo.c) | Q8: `ehPrimo` testando até a raiz quadrada |
| Aula 07 | 27 | [`q09_mostrar_tabuada.c`](listas-professora/aula07/q09_mostrar_tabuada.c) | Q9: `mostrarTabuada` |
| Aula 07 | 27 | [`q10_vendas_cinco_dias.c`](listas-professora/aula07/q10_vendas_cinco_dias.c) | Q10: vendas de 5 dias (total, média, acima da média) |
| Aula 07 | 28 | [`q11_notas_turma.c`](listas-professora/aula07/q11_notas_turma.c) | Q11: notas da turma com funções |
| Aula 07 | 28 | [`q12_estoque_simplificado.c`](listas-professora/aula07/q12_estoque_simplificado.c) | Q12: estoque simplificado, busca de produto pelo código |
| Aula 08 | 22 | [`atividade1_sorteio_beneficente.c`](listas-professora/aula08/atividade1_sorteio_beneficente.c) | Atividade 1: ocorrências, produtos em ordem alfabética e pares em ordem decrescente |
| Aula 08 | 23 | [`atividade2_positivos_negativos.c`](listas-professora/aula08/atividade2_positivos_negativos.c) | Atividade 2: vetores de positivos pares e negativos ímpares, em ordem crescente |
| Aula 08 | 23–24 | [`atividade3_animais.c`](listas-professora/aula08/atividade3_animais.c) | Atividade 3: primos repetidos e correspondência com animais |
| Aula 08 | 25 | [`atividade4_apostadores.c`](listas-professora/aula08/atividade4_apostadores.c) | Atividade 4: 5 apostadores, soma de Fibonacci, 3 prêmios |
| Aula 08 | 26–27 | [`atividade5_participantes_diagonal.c`](listas-professora/aula08/atividade5_participantes_diagonal.c) | Atividade 5: IDs únicos, média ponderada x diagonal do retângulo |

> O `atividade5_participantes_diagonal.c` usa a `math.h`: no Linux, compile com `-lm` no final.

## ▶️ Como compilar e executar

Com o GCC, dentro da pasta do exercício:

```bash
gcc nome_do_arquivo.c -o nome_do_programa
./nome_do_programa
```

No Windows (PowerShell), execute com `.\nome_do_programa.exe`.
Para o projeto do banco: `gcc main.c banco.c -o banco`.

## 📌 Conteúdos trabalhados

- Variáveis e tipos de dados (`int`, `float`, `char`)
- Entrada e saída (`scanf` / `printf`) e saída formatada
- Operadores aritméticos e precedência
- Condicionais (`if` / `else if` / `else` / `switch`)
- Laços (`for`, `while`, `do-while`), acumuladores e contadores
- Structs e vetores de struct
- Funções, arquivos de cabeçalho (`.h`) e programas em vários arquivos
- Recursão (Fibonacci, Torres de Hanói) e bubble sort
- Matrizes e textos (`strcmp`, `strcpy`)

## ✍️ Autora

**Amanda Baía** — Advogada (Direito Civil, do Consumidor e de Família) e estudante de ADS, desenvolvendo habilidades em programação voltadas a projetos de LegalTech.

[GitHub](https://github.com/amanda-baia) · [LinkedIn](https://www.linkedin.com/in/amandabaiaadv)

---

⭐ Fique à vontade para explorar os exercícios — feedbacks e sugestões são sempre bem-vindos!
