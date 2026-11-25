/*
 * Arquivo:     login_do_while.c
 * Descricao:   Simula um login (Aula 5, slides 15 e 16). Pede usuario e
 *              senha ate acertar (usuario "admin", senha "1234").
 *              Usa do-while para pedir pelo menos uma vez.
 *
 * Lembrete:    texto nao se compara com ==. Usa-se strcmp (string.h),
 *              que devolve 0 quando os dois textos sao iguais.
 *
 * Autora:      Amanda Baia
 * Disciplina:  Algoritmos e Pensamento Computacional - Profa. Joanacelle Caldas
 */

#include <stdio.h>
#include <string.h>

int main() {
    char usuario[20];
    char senha[20];
    int correto;

    do {
        printf("Digite o usuario: ");
        scanf("%19s", usuario);
        printf("Digite a senha: ");
        scanf("%19s", senha);

        correto = (strcmp(usuario, "admin") == 0 && strcmp(senha, "1234") == 0);

        if (!correto) {
            printf("Usuario ou senha incorretos. Tente novamente.\n\n");
        }
    } while (!correto);

    printf("\nLogin realizado com sucesso! Bem-vindo ao sistema.\n");
    return 0;
}
