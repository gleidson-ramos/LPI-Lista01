#include <stdio.h>
#include <stdlib.h>


int calcular_nota_cem(int saque){
	return saque/100;
}

int calcular_nota_cinquenta(int saque){
	return saque/50;
}

int calcular_nota_vinte(int saque){
	return saque/20;
}

int calcular_nota_dez(int saque){
	return saque/10;
}

int calcular_nota_cinco(int saque){
	return saque/5;
}

int calcular_nota_dois(int saque){
	return saque/2;
}


int main(){
	int a,b,c,d,e,f,g,vd,saque=0;
	
	printf("Informe o valor a ser sacado sem pontos ou virgulas\nR$");
	scanf("%d", &saque);

	vd = saque;
	
	a = calcular_nota_cem(saque);
	saque = saque - (100*a);
	
	b = calcular_nota_cinquenta(saque);
	saque = saque - (50*b);
	
	c = calcular_nota_vinte(saque);
	saque = saque - (20*c);
	
	d = calcular_nota_dez(saque);
	saque = saque - (10*d);
	
	e = calcular_nota_cinco(saque);
	saque = saque - (5*e);
	
	f = calcular_nota_dois(saque);
	saque = saque - (2*f);
	
	g = saque;

	system("cls");
	printf("- - - NOTAS - - -");
	printf("\nNotas de R$100:	%d\nNotas de R$50:	%d" ,a,b);
	printf("\nNotas de R$20:	%d\nNotas de R$10:	%d" ,c,d);
	printf("\nNotas de R$5:	%d\nNotas de R$2:	%d" ,e,f);
	printf("\nNotas de R$1:	%d\n\nValor Sacado: R$%d\nSaque realizado com sucesso!\n\n", g,vd);
	
	system("PAUSE");
}
