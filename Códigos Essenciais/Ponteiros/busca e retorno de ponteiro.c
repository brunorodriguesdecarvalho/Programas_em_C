#include <stdio.h>

char *pos(char c,char *s) {
	while( *s && *s!=c ) s++;
	return (*s ? s : NULL);
}

int main(void) {
	char *s = "banana";
	printf("Endereco do vetor.: %P\n",s);
	printf("Posicao da letra b: %P\n",pos('b',s));
	printf("Posicao da letra a: %P\n",pos('a',s));
	return 0;
}
