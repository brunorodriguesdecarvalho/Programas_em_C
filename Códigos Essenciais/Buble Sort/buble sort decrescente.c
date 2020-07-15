#include <stdio.h>
void troca(int v[], int a, int b){
	int x=v[a];
	v[a]=v[b];
	v[b]=x;
}

void bsort(int *v, int n){
	for(int i=1; i<=n-1; i++){
		for(int j=0; j<n-i ;j++){
			if(v[j]<v[j+1]){
				troca(v, j, j+1);
			}
		}
	}
}
void exibe(int *v, int n){
	for(int i=0;i<n;i++)
		printf("v[%d]: %d\n", i, v[i]);
}

int main(void) {
	int v[10] = {83,31,91,46,27,20,96,25,96,80};
	printf("Sem ordenar\n");
	exibe(v,10);
	printf("\n");
	bsort(v,10);
	printf("Com ordem\n");
	exibe(v,10);
	return 0;
}
