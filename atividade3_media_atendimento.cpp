/*3 - Uma loja quer saber a nota média do
atendimento dos clientes.
Enunciado:
Um sistema deve ler a nota de atendimento (de 0 a
10) de 10 clientes e calcular a média geral. Se a
média for menor que 7, deve exibir uma
mensagem de alerta.*/


#include <stdio.h>

#define NUM_CLIENTES 10

int main() {
    float nota[NUM_CLIENTES];
    float somaNotas = 0.0;
    float media;

    // Leitura da nota de atendimento de cada cliente
    for (int i = 0; i < NUM_CLIENTES; i++) {
        printf("Informe a nota do cliente %d (0 a 10): ", i + 1);
        scanf("%f", &nota[i]);

        somaNotas = somaNotas + nota[i];
    }

    // Calculo da media geral
    media = somaNotas / NUM_CLIENTES;

    printf("\nMedia geral de atendimento: %.2f\n", media);

    // Verificar se a media esta abaixo do esperado
    if (media < 7) {
        printf("ATENÇÃO! A media de atendimento esta abaixo do esperado!\n");
    } else {
        printf("Atendimento dentro do esperado. Parabens!\n");
    }

    return 0;
}