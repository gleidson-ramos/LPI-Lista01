#include <stdio.h>
#include <stdlib.h>

//Gleidson Ramos - 2023.1 - LPI - Questão 03

int main(){
	int x, num, soma;
	soma = 0;
	
	printf("Informe um numero: ");
	scanf("%d", &num);
	
	for (x=1; x<num; x++){
		if (num%x==0){
			soma = soma + x;
		}		
	}
	
	system("cls");
	printf("\nNumero digitado: %d \nSomatorio dos divisores diferente de %d: %d\n" ,num ,num ,soma);
	if ( num == soma){
		printf("Numero perfeito\n\n");
	} else {
		printf("Numero imperfeito\n\n");
	}
	
	system("PAUSE");
}
