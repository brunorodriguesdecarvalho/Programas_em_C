#include <stdio.h>
int main(void) {
	float x, y;
	printf("Digite o primeiro numero: ");
	scanf("%f", &x);
	printf("Digite o segundo numero: ");
	scanf("%f", &y);
	if(x>y){
		printf("[%.1f] > [%.1f]\n", x, y);
	} else {
		printf("[%.1f] > [%.1f]\n", y, x);
	}
	return 0;
}
