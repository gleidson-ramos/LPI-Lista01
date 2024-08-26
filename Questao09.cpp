#include<stdio.h>
#include<stdlib.h>
#include<string.h>

//Gleidson Ramos - 2023.1 - LPI - Questão 09

int main(){
    char entrada[100];
    char entradaespelhada[100];
    int tam=0;
    int tamcalc=0;

    printf("Digite uma palavra: ");
    scanf("%s", entrada);  //le frase de entrada

    for(tam=0; entrada[tam]!='\0'; tam++); //conta o tamanho da string
    tamcalc=tam; // Variavel para calculo da entrada espelhada

    for(int x=0;x<tam;x++){
	//calculo inverter string entrada
        tamcalc--;
        entradaespelhada[x]=entrada[tamcalc];
    }
    
    entradaespelhada[tam]='\0';// Finaliza a string

    if(strcmp(entrada,entradaespelhada)==0){
    	printf("A PALAVRA E PALIDROMO");
    }
    else{
		printf("A PALAVRA NAO E PALIDROMO");
	}       

    printf("\nEntrada:%s \nEntrada espelhada:%s \n",entrada, entradaespelhada);
    
}