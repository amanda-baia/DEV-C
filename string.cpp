/* Leitura do nome, endereco e cpf, armazenando em strings. 
Em seguida, imprime os valores lidos*/

#include <stdio.h>
#define TAM_NOME 50
#define TAM_END 100
#define TAM_CPF 15

//TODA STRING TEM UM \O, MOTIVO PELO QUAL O CPF TEM 15 DÍGITOS.

int main (void){
	
	//Separando as variaveis
	char nome [TAM_NOME];
	char endereco [TAM_END];
	char cpf [TAM_CPF];
	
	
	//Solicitar os dados
		
	printf("Qual o seu nome?");
	scanf("%s", nome);
	getchar(); // Consome o '\n' (Enter) que sobrou no buffer

	
	printf ("Informe o seu endereco.");
	fgets(endereco, TAM_END, stdin);
	
	printf("Informe o seu CPF.");
	fgets(cpf, TAM_CPF, stdin);

	printf("Seus dados sao: \n");
	printf("Nome: %s \n Endereco: %s \n CPF: %s", nome, endereco, cpf);
	
	return 0;

}