#include <stdio.h>
#include <stdlib.h>

//Gleidson Ramos - 2023.1 - LPI - Questão 10


int main(){
	int vetor1[10], vetor2[10] = {0};
	int fib,fat = 0;
	
	printf("Informe quantos elementos deseja exibir da sequencia Fatorial: ");
	scanf("%d", &fat);
	
	printf("Informe quantos elementos deseja exibir da sequencia Fibonacci: ");
	scanf("%d", &fib);

		
	//fatorial
	vetor1[0] = 1;
	for (int x=1; x<=fat; x++){
		vetor1[x] = vetor1[x-1] * x;
	}
	
	//impressão do fatorial
	printf("\n\nSEQUENCIA FATORIAL:\n");
	for (int x=0; x<fat; x++){
		printf(" [%d]", vetor1[x]);
	}
	
	//fibonacci
	vetor2[0] = 1;
	vetor2[1] = 1;
	for (int x=1; x<fib; x++){
		vetor2[x+1] = vetor2[x-1] + vetor2[x];
	}
	
	//impressão do fibonacci
	printf("\n\nSEQUENCIA FIBONACCI:\n");
	for (int x=0; x<fib; x++){
		printf(" [%d]", vetor2[x]);
	}
	printf("\n\n");
	
	system("pause");
		
}
