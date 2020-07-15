#include <stdio.h>
#include <stdlib.h>

int* merge(int v[], int n1, int w[], int n2){
	int x[n1];
	int i=0;
	while(v[i]=x[i]){
		i++;
	}
	return x;
}

int main(void){
	int v[5] = {12,39,61,75,99};
	int w[4] = {28,40,55,81};
	int *p = merge(v,5,w,4);
	for(int i=0; i<5; i++) printf("%d\n",p[i]);
	free(p);
	return 0;
}
