#include <stdio.h>
#include <stdlib.h>

void main() {
	char palavra[255];
	printf("Digite uma palavra: \n");
	setbuf(stdin, 0);
	fgets(palavra, 255, stdin);
	palavra[strlen(palavra)-1]='\0';
	printf("\nPalavra digitada: %s\n", palavra);
	system("pause");
}
