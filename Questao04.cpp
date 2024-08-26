#include <stdio.h>
#include <stdlib.h>

float calcular_lucro(float pc, float pv){
	float lv = 0;
	lv = pv - pc;
	
	return lv;
}

float calcular_vinte(float v){
	v = v * 0.2;
	return v;
}

float calcular_trinta(float t){
	t = t * 0.3;
	return t;
}


int main(){
	float p_compra, p_venda, lucro, v, t;
	char nome, op;
	int cont =0; int cont_t=0; int cont_v=0; 
	
	while(op != 'n' && op!='N'){
		printf("\nInforme o nome da mercadoria: ");
		scanf("%s", &nome);
		
		printf("Preco de compra: ");
		scanf("%f", &p_compra);

		printf("Preco de venda: ");
		scanf("%f", &p_venda);
		
		lucro = calcular_lucro(p_compra, p_venda);
		v = calcular_vinte(p_compra);
		t = calcular_trinta(p_compra);
		
		printf("Lucro R$: %.2f \n" ,lucro);
		
		if (lucro < v){
			cont_v++;			
		} else if (lucro > t){
			cont_t++;
		} else if (lucro<=t && lucro>=v){
			cont++;
		}
		
		printf("\nDeseja realizar outro cadastro?\nDigite qualquer tecla pra continuar ou n para cancelar: ");
		scanf("%s", &op);
	}
	
	printf("\n%d Mercadoria(s) com lucro menor que 20 porcento", cont_v);
	printf("\n%d Mercadoria(s) com lucro entre 20 e 30 porcento", cont);
	printf("\n%d Mercadoria(s) com lucro maior que 30 porcento\n", cont_t);
	
}
