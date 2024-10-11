#include<stdio.h>

int main(){
	int tamanho = 0;
	int arr[tamanho];
	int num;
	int i, j, chave;
	int meio;
	int procurado;
	int achou = 0;
	
	printf("Digite o tamanho do array: ");
	scanf("%d", &tamanho);
	
	
	for(i = 0; i < tamanho; i++){
		printf("Digite o numero %d : ", i + 1);
		scanf("%d", &num);
		arr[i] = num;
	}
	
	printf("\nArray inserido pelo usuario: ");
	for(i = 0; i < tamanho; i++){
		printf("%d ", arr[i]);
	}
	
		//organizando o array 
	for(i = 1; i < tamanho; i++){
		chave = arr[i];
		j = i - 1;
		
		while(j >= 0 && arr[j] > chave){
			arr[j + 1] = arr[j];
			j--;
		}
		
		arr[j + 1] = chave;
		
	}
		
	printf("\n\nArray inserido pelo usuario organizado pelo Inserction Sort: ");
	for(i = 0; i < tamanho; i++){
		printf("%d ", arr[i]);
	}
	
	printf("\n\nAgora insira o numero a ser procurado neste array: ");
	scanf("%d", &procurado);
	
	int inicio = 0;
	int fim = tamanho - 1;
	
	//busca binario
    while(inicio <= fim){
    	
    	meio = (inicio + fim) / 2;
    	
		if(arr[meio] == procurado){
			
			printf("\nO numero foi encontrado na posicao %d", meio + 1);
			achou = 1;
			break;
			
		} else if(arr[meio] > procurado){
			fim = meio - 1;
		} else {
			inicio = meio + 1;
		}
		
	}
	
	if(achou != 1){
		printf("Infelizmente o numero nao foi encontrado na lista...");
	}
	
	return 0;
}
