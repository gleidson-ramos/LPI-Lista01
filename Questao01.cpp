#include <stdio.h>
#include <stdlib.h>

//Gleidson Ramos - 2023.1 - LPI - Questão 01


float media_menor(float m){
	return m*2.5;
}

float media_maior(float m){
	return m*5;
}

int main(){
	int x;
	float peso, nota, media, mediap;
	
	for (x=1; x<=3; x++){
		printf("Informe a nota %d: ", x);
		scanf("%f", &nota);
		
		if (nota>6 && nota<=10) {
			media = media_maior(nota);
			peso = peso + 5;
		} else if (nota>=0 && nota<=6){
			media = media_menor(nota);
			peso = peso + 2.5;
		} else {
			printf("Nao foi possivel calcular as medias!");
			break;
		}
		
		mediap = mediap + media;
	}
	
	printf("\nMedia Ponderada: %.2f \n\n\n", mediap/peso);
	system("PAUSE");

}
