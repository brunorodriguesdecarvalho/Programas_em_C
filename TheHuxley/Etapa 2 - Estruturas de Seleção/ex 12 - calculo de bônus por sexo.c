#include <stdio.h>

int main (void) {
	char sexo[2];
	printf("Qual o seu sexo? ");
	gets(sexo);
	printf("Sexo: %s!\n",sexo);
	/*
	char homem[2] = "h";
	puts(homem);
	if(comparar(sexo, homem)>0) printf("sexo igual h!");
	puts(sexo);
	*/
	return 0;
};
