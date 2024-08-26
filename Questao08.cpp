#include <stdio.h>
#include <stdlib.h>

//Gleidson Ramos - 2023.1 - LPI - Questão 08


int main(){
	int num, exp=0, aux = 0, bin[10];
		
	
	printf("Informe um numero decimal: ");
	scanf("%d", &num);
	
	for (int x=0; x<num;){
		aux++;
				
		exp = num%2;
		
		bin[aux]=exp;
		
		num = num/2;		
	}
	
	printf("Binario: ");
	for (int x=0; x<aux; aux--){
		printf("%d", bin[aux]);
	}
	printf("\n\n");
	
	system("pause");
		
}
