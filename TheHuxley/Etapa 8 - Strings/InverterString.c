#include <stdio.h>
#include <string.h>

int main(void){ 
	char in[255], out[255];
	int tam=0;
    scanf("%s", &in);

	while(in[tam]!='\0')
		tam++;
	printf("%d", tam);

	//forçando loop de leitura
	int i=0;
	int j=tam;
	for(i=0; i<tam; i++){
		printf("[%d]: %s", i, in[i]);
	}
	printf("entrada: %s\n", in);
	printf("tamanho: %d\n", tam);
	printf("saida: %s\n", out);
    return 0;
}
