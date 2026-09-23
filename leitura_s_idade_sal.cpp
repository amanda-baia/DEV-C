/* leitura de sexo, idade e salario de uma pessoa, imprimindo os valores lidos*/

#include <stdio.h>

int main (void) {
	
	//Registrando as variáveis
	
	int idade;
	float salario;
	char sexo;
	
	//leituras
	
	printf("Informe a sua idade:");
	scanf("%d", &idade);
	printf("Informe o seu salario:");
	scanf("%f", &salario);
	printf("Informe o seu sexo - F/M.");
	scanf(" %c", &sexo);
	
	
	//imprimir valores lidos
	
	printf("Voce tem %d anos, ganha R$%f e seu genero e %c.", idade, salario, sexo);
	
		
	return 0;
}
