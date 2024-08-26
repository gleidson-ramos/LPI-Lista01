#include <stdio.h>
#include <stdlib.h>

//Gleidson Ramos - 2023.1 - LPI - Questão 05

int calcular_horas(int seg){
	return seg/3600;
}

int calcular_minutos(int seg){
	return seg/60;
}

int calcular_segundos(int seg){
	return seg%60;
}

int main(){
	float massa, m_inicial;
	int cont=0; int h=0; int m=0; int s=0;
	
	printf("Informe o peso do material em gramas: ");
	scanf("%f", &m_inicial);

	massa = m_inicial;	

	while(massa >= 0.5){
		massa = massa/2;
		cont = cont+50;
	}
	
	h = calcular_horas(cont);
	m = calcular_minutos(cont);
	s = calcular_segundos(cont);
	
	printf("\nMassa Inicial: %.2f gramas\nMassa Final: %.2f gramas", m_inicial, massa);
	printf("\nTempo do processo: %d hora(s) %d minuto(s) e %d segundo(s)\n\n", h, m, s);
	
	system("PAUSE");
}
