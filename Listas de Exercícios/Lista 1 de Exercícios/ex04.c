#include <stdio.h>

int main(void){
	int lido, divididointeiro, resto, i;
	lido=1;
	while (lido > 0) {
		//Dado um número inteiro em base 10,
		//exibir o valor correspondente em base 16.

		printf("Digite um numero: \n");
		scanf("%d", &lido);

		if (lido >= 16) {
			//guardar os valores dos restos das divisões
			while (lido >= 16) {
				resto = lido % 16;

			};
			//contar quantas divisões foram necessárias
		};

		if (lido < 16 && lido > 0) {
			//aqui tem que converter...
			if (lido == 15){
				printf("F \n");
			} else if (lido == 14){
				printf("E \n");
			} else if (lido == 13){
				printf("D \n");
			} else if (lido == 12){
				printf("C \n");
			} else if (lido == 11){
				printf("B \n");
			} else if (lido == 10){
				printf("A \n");
			} else if (lido < 10 && lido > 0){
				printf("%d \n", lido);
			} else {
				printf("ops \n");
			}
		};

		i=0;

		/*printf("Esse são os valores acumulados no vetor: \n");
		while( i<10 ){	
			printf("%d \n", vt[i]);
			i++;
		};*/
	}

	printf("Final do programa");
	return 0; 
}
