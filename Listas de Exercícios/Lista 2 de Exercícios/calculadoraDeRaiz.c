#include <stdio.h>

double absoluto(double x){
	return (x>=0) ? x : -x;
};

double quadrado(double x){
	return x*x;
};

double raiz(double x) {
	double r = x/2;
	while(absoluto(quadrado(r)-x) >= 0.001){
		r = (quadrado(r)+x)/(2*r);
	}
	return r;
};

int main(void){
	float en;
	printf("Digite um número para calcular a raiz:\n");
	scanf("%f", &en);
	printf("%.1f", en);
	printf("\nResultado: %.f\n", raiz(en));
	return 0;
};
