#include <stdio.h>
#include <stdlib.h>

int main(){
	int num, x;
	
	printf("Informe um numero: ");
	scanf("%d", &num);
	
	printf("\nFatorial de %d " ,num);
	for (x=1; num>1; num--){
		x = x*num;
	}
	
	printf("e %d\n\n" ,x);
	system("PAUSE");
}
