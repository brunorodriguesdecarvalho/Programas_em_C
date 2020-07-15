#include <stdio.h>
#include <stdlib.h>

int* cpy(int *entrada, int *saida, int tamanho){
	printf("Comecou o preenchimento\n");
	for(int i=0; i<tamanho; i++){
		saida[i]=entrada[i];
	}
	printf("Terminou o preenche\n");
	return saida;
}

int* merge(int v[], int n1, int w[], int n2){
	printf("Comecou o merge\n");
	int z[n1+n2];
	cpy(v, z, (n1-1));
	return z;
}

int main(void){
	int v[5] = {12,39,61,75,99};
	int w[4] = {28,40,55,81};
	int *p = merge(v,5,w,4);
	printf("Terminou o merge\n");
	for(int i=0; i<4; i++) printf("%d\n",p[i]);
//	free(p);
	return 0;
}
