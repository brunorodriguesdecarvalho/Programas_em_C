#include <stdio.h>
int main (void) {
	int distancia;
	float litrosgastosporkm;
	scanf("%d", &distancia);
	scanf("%f", &litrosgastosporkm);
	printf("%.2f", distancia*litrosgastosporkm);
	return 0;
}
