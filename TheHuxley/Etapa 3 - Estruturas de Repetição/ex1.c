#include <stdio.h>

int main (void) {
	int valor=-1, soma=0, contador=-1;
	while (valor!=0) {
		scanf("%d", &valor);
		soma = valor + soma;
		contador++;
	};
	printf("%d\n", soma/contador);
	return 0;
}
