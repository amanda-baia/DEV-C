/*4 - Um aplicativo quer acompanhar a meta diária
de passos de um usuário. Faça um programa que
leia a quantidade de passos dados por um usuário
a cada hora. O programa deve parar quando o
total atingir ou ultrapassar 10.000 passos e então
informar quantas horas foram necessárias
*/

#include <stdio.h>

int main() {
    int passosHora;
    int totalPassos = 0;
    int horas = 0;

    do {
        printf("Informe a quantidade de passos da hora %d: ", horas + 1);
        scanf("%d", &passosHora);

        totalPassos = totalPassos + passosHora;
        horas = horas + 1;

    } while (totalPassos < 10000);

    printf("\nMeta de 10.000 passos atingida!\n");
    printf("Total de passos: %d\n", totalPassos);
    printf("Horas necessarias: %d\n", horas);

    return 0;
}