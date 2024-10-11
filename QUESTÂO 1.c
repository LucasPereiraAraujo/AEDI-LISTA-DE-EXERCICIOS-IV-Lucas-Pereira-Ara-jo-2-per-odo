#include <stdio.h>

int main(){
	
	int idade;
	
	printf("Digite sua idade: ");
	scanf("%d", &idade);
	
	if(idade < 18){
		idade = 0;
	} else if(idade >= 18 && idade < 65){
		idade = 1;
	} else{
		idade = 2;	
	}
	
	switch(idade){
		
		case 0: 
		printf("Menor de idade");
		break;
		
		case 1:
			printf("Maior de idade");
			break;
			
		case 2:
		printf("Idoso");
		break;	
	}
	
	return 0;
	
	
}
