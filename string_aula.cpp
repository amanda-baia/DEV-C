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
	char cpf [15];
	
	
	//Solicitar os dados
		
	printf("Qual o seu nome?");
	scanf("%s", nome);
	
	printf ("Informe o seu endereco.");
	gets(endereco);
	
	printf("Informe o seu CPF.");
	fgets(cpf, TAM_CPF, stdin);

	printf("Seus dados sao: \n");
	printf("Nome: %s \n Endereco: %s \n CPF: %s", nome, endereco, cpf);
	
	return 0;

}