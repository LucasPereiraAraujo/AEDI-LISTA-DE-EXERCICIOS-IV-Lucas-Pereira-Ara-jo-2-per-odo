#include<stdio.h>

int main(){
	
	int tamanho = 8;
	int precos[8] = {21, 65, 84, 2, 4, 4, 8, 5};
	int i, j;
	int chave;
	
	printf("Array dos precos original:\n ");
	
	for(i = 0; i < tamanho; i++){
		printf("%d ", precos[i]);
	}
	
	for(i = 1; i < tamanho; i++){
		chave = precos[i];
		j = i - 1;
		
		while(j >= 0 && precos[j] > chave){
			precos[j + 1] = precos[j];
			j--;
		}
		
		precos[j + 1] = chave;
		
	}
		
	printf("\nArray dos precos oganizado:\n ");
	
	for(i = 0; i < tamanho; i++){
		printf("%d ", precos[i]);
	}
	
	return 0;
	
}
