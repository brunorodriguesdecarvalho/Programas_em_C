#include <stdio.h>
int main (void) {
	float digitado;
	scanf("%f", &digitado);
	printf("novo: %.2f\n", digitado*0.98);
	printf("gratificacao: %.2f\n", digitado*0.05);
	printf("imposto: %.2f\n", digitado*0.07);
	return 0;
}
