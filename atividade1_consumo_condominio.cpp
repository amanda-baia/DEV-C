/* Monitoramento do consumo de água de cada morador, 
escrever a leitura, e 
dizer se está dentro da média de consumo;
mostrar o consumo médio geral
*/

#include <stdio.h>


#define NUM_MORADORES 5
#define MEDIA_MAXIMA 20.0

int main () {
	
	float consumo[NUM_MORADORES];
	float somaConsumo = 0;
	float media = 20.00;
	
	//leitura do consumo
	
	for (int i = 0; i < NUM_MORADORES; i++) {
		printf("Informe o consumo de agua m3 do morador %d:", i+1);
		scanf("%f", &consumo[i]);
		
		
		somaConsumo += consumo [i];
			
	}
	
	
	printf ("\n Relatorio de consumo dos moradores \n");
	
	//criar um relatorio de consumo 
	
	for (int i=0; i < NUM_MORADORES; i++) {
		printf("Morador %d: %.2f m3 -", i+1, consumo[i]);
		
		if (consumo[i] <= MEDIA_MAXIMA) {
			printf("Dentro da media\n");
		
		} else {
			printf("Acima da media \n");
		}
	
	
	}
	
	//criar um relatorio de consumo geral
	media = somaConsumo / NUM_MORADORES;
	printf("\n Consumo medio geral do condominio: %.2f m3 \n", media);
	
	
		
	return 0;
}


 