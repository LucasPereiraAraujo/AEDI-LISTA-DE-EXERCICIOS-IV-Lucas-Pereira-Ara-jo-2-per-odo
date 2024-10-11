#include <stdio.h>

int main(){
	
	int notas[10] = {9, 10, 8, 6, 4, 2, 5, 7, 1, 3};
	int tamanho = 10;
	int i, j, maior, temp;
	
	printf("Array notas desorganizado:");
	for(i = 0; i < tamanho; i++){
		printf("%d ", notas[i]);
	}
	
	for (i = 0; i < tamanho; i++){
		maior = i;
		
		for(j = i + 1; j < tamanho; j++){
			
			if(notas[j] > notas[maior]){
				maior = j;
			}
			
		}
		
		if(maior != notas[i]){
			temp = notas[i];
			notas[i] = notas[maior];
			notas[maior] = temp;
			
		}
	}
	
	printf("\n");
	printf("\nArray notas organizado de forma decrescente: ");
	
	for(i = 0; i < tamanho; i++){
		printf("%d ", notas[i]);
	}
	
	return 0;
}
