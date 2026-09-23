/*Este programa le um numero e imprime se ele eh par ou impar. */

#include <stdio.h>

int main(void){
	
	//leitura do numero , ignorar 0.
	int x;
	
	printf("Informe o numero.");
	scanf("%d", &x);
	
	
	if (x%2==0){
		printf("O numero eh par.");
				
	}
	else{
		printf("O numero eh impar.");
	}
	
	return 0;
	
}