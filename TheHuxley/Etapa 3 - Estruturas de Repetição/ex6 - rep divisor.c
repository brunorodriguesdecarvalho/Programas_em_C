#include <stdio.h>

int main (void) {
	double entrada, resposta=0, apoio=1;
	int i;
	scanf("%lf", &entrada);
	for(i=1;i<entrada+1;i++){
		resposta += 1/apoio;
		apoio += 1;
	};
	printf("%.2f", resposta);
	return 0;
};
