/*faca um programa que le dois inteiros e imprime 
a) a soma dos dois numeros
b) o primeiro menos o segundo
c) a parte inteira da divisao
d) o resto da divisao do primeiro pelo segundo
e) a multiplicacao dos dois numeros
f) o primeiro dividido pelo segundo */

#include <stdio.h>

int main (void){

	//definir as variáveis e pedir que o usuario informe-as
	int x,y,soma, subtracao, resto,p_int, multiplicacao;
	float divisao;
	
	printf("Forneca os dois numeros.");
	scanf("%d %d", &x &y);
	
	//definir as operacoes
	
	// também poderia ser assim: printf("Soma: %d", x+y);
	
	soma = (x+y);
	printf("Soma: %d\n", soma);
	
	subtracao = (x-y);
	printf("Subtracao: %d\n", subtracao);
	
	p_int =  x / y;
	printf("Parte inteira da divisao: %d\n", p_int);
	
	resto = x%y;
	printf("Resto da divisao: %d\n", resto);
	
	
	multiplicacao = (x*y);
	printf("Multiplicacao: %d\n", multiplicacao);
	
	divisao = (float) x/y;
	printf("Divisao: %f\n", divisao);
	
	printf("Fim");
	
	
	
	
	return 0;
}
