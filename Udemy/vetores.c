#include <stdio.h>
#include <stdlib.h>
#define LIM 3
void main(){
	int vt[LIM], cont, plus;
	vt[0] = 5;
	vt[1] = 10;
	vt[2] = 15;
	vt[3] = 20;	

	for(cont=0;cont<=LIM;cont++){
		printf("Valor da posicao[%d] : %d \n", cont, vt[cont]);
	}

	for (cont=0;cont<=LIM;cont++){
		vt[cont] = vt[cont] + 10;
	}

	for(cont=0;cont<=LIM;cont++){
		printf("Valor da posicao[%d] +10 : %d \n", cont, vt[cont]);
	}

	printf("Escreva o novo valor da adicao: \n");
		scanf("%d", &plus);

	for(cont=0;cont<=LIM;cont++){
		vt[cont] = vt[cont] + plus;
		printf("Valor da posicao[%d] + %d : %d \n", cont, plus, vt[cont]);
	}

	system("pause");

}
