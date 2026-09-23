 /*Atribua o nome, sexo, salario e idade de uma pessoa em variáveis.Imprima o valor das variáveis.
 */

 #include <stdio.h>
 
  
 int main (){
 	
 	//declaracao das variaveis
	char nome [] = "Juca dos Santos";
	char sexo = 'M';
	int idade = 35;
	float salario; 
 	
 	 //declarando a variavel salario	
 	salario = 4250.90;
 	
 	
 	//imprimindo os valores
 	
 	printf("Seus dados sao:\n");
 	printf("Nome: %s \n", nome);
 	printf("Sexo: %c \n", sexo);
 	printf("\t Voce tem %d anos \n", idade);
 	printf("Voce ganha %.2f reais por mes", salario);
 	
 	
 	
 	return 0;
 }