#include <stdio.h>
int main (void) {
	float valorum;
	float valordois;
	int operacao;
	printf("1: adicao / 2: subtracao / 3: multiplicacao / 4: divisao\n");
	scanf("%d", &operacao);
	scanf("%f", &valorum);
	scanf("%f", &valordois);
	if (operacao == 1) {
		printf("A adicao eh: %.2f",valorum + valordois);
	}
	else if (operacao == 2) {
		printf("A subtracao eh: %.2f",valorum - valordois);
	}
	else if (operacao == 3) {
		printf("A multiplicacao eh: %.2f",valorum * valordois);	
	}
	else if (operacao == 4) {
		printf("A divisao eh: %.2f",valorum / valordois);
	}
	else {}
	return 0;
}
