#include <stdio.h>
#include <stdlib.h>
#include <math.h>

//Gleidson Ramos - 2023.1 - LPI - Questão 07


int main(){
	int num, exp=0, base=0, binario=0, potencia = 0;
		
	
	printf("Informe um numero binario: ");
	scanf("%d", &num);
	
	for (int x=0; x<num;){		
		base = num%10;
		num = num/10;
		
		potencia = pow(2,exp);
		binario = binario + (base*potencia);
		
		exp++;
	}
	printf("\nDecimal: %d \n", binario);
		
}
