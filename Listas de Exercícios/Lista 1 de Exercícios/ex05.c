#include <stdio.h>

int main(void){
	int X;
	X = 1;
	do {
		printf("Digite um numero: \n");
		scanf("%d", &X);
		if (X == 0){
			printf("Fim do programa\n");
		} else {
			printf("Essa eh a representacao na tabela ACSII: %c \n", X);
		};
	} while (X>0);
	return 0;
}
