#include<stdio.h>

int main (void) {
	int v[2]={99,35};
	printf("Sem* %x\n", v);
	printf("Com* %p\n", *v);
	printf("%d\n", v[1]);
	return 0;
}
