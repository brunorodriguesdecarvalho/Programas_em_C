#include <stdio.h>
int main(void){
	float s;
	printf("Digite o valor da remuneracao mensal: ");
	scanf("%f", &s);
	if(s>4664.68){
		printf("Aliquota IR: 27.5%%\n");
		printf("Valor do IR a pagar = R$ %.2f\n", s*0.275);
	} else if(s>3751.05){
		printf("Aliquota IR: 22.5%%\n");
		printf("Valor do IR a pagar = R$ %.2f\n", s*0.225);
	} else if(s>2826.65){
		printf("Aliquota IR: 15.0%%\n");
		printf("Valor do IR a pagar = R$ %.2f\n", s*0.15);
	} else if(s>1903.98){
		printf("Aliquota IR: 7.5%%\n");
		printf("Valor do IR a pagar = R$ %.2f\n", s*0.075);
	} else {
		printf("Aliquota IR: isento\n");
		printf("Valor do IR a pagar = R$ 0.00.\n", s*0.075);
	};
}
