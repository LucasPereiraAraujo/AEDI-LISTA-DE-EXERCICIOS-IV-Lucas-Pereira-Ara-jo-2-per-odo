#include <stdio.h>

int main(){
	
	int numero;
	int i;
	
	printf("Insira o numero inteiro: ");
	scanf("%d", &numero);
	
	printf("Os numeros a seguir sao todos os pares entre 1 e %d \n ", numero);
	
	for(i = 1; i < numero; i++){
		if(i % 2 == 0){
			printf("%d  ", i);
		}
	}
	
	return 0;
		
}
