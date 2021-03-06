#include <stdio.h>
#include <math.h>

float mudabase(float a, float b){
	return log(a)/log(b);
}

int main (void) {
	int op=-1, back;
	float base=0, y=0, x=0;
	while(op!=0){
		back=-1;
		printf("\nBem vindo a calculadora de LOGARITIMOS\n\nDigite o numero da opcao desejada:\n");
		printf("1. Quero descobrir o X [numero logaritimico]\n");
		printf("2. Quero descobrir o a [base do logaritimo]\n");
		printf("3. Quero descobrir o y [resultado do logaritimo]\n");
		printf("0. Sair do programa\n");
		printf("\n");
		scanf("%d", &op);
		printf("\n");

		if(op==1){
			printf("Digitou a opcao 1: Calcular o numero logaritimico(x).\n");
			printf("Digite o valor da base(a):");
			scanf("%f", &base);
			printf("Digite o valor do resultado(y):");
			scanf("%f", &y);
			printf("Valor do numero logaritimico(x) = %.2f\n", powf(base, y));
			
			while(back!=1){
				printf("\nDigite 0(ZERO) para encerrar o programa ou 1(UM) para voltar ao menu principal\n");
				scanf("%d", &back);
				if(back==1){
					op=-1;
				} else if(back==0){
					op=0;
					back=1;
				} else {
					printf("...OPS...parece que algo deu errado!\n");
				}	
			}
		} else if(op==2){
			printf("Digitou a opcao 2.\n");
			printf("Digite o valor do resultado(y):");
			scanf("%f", &y);
			printf("Digite o valor do numero logaritimico(x):");
			scanf("%f", &x);
			printf("Valor da base(a) = %.2f\n", powf(x, (1/y)));
			
			while(back!=1){
				printf("\nDigite 0(ZERO) para encerrar o programa ou 1(UM) para voltar ao menu principal\n");
				scanf("%d", &back);
				if(back==1){
					op=-1;
				} else if(back==0){
					op=0;
					back=1;
				} else {
					printf("...OPS...parece que algo deu errado!\n");
				}	
			}
		} else if(op==3){
			printf("Digitou a opcao 3.\n");
			printf("Digite o valor do numero logaritimico(x):");
			scanf("%f", &x);
			printf("Digite o valor da base(a):");
			scanf("%f", &base);
			printf("Valor do resultado(y) = %.2f\n", mudabase(x, base));
			
			while(back!=1){
				printf("\nDigite 0(ZERO) para encerrar o programa ou 1(UM) para voltar ao menu principal\n");
				scanf("%d", &back);
				if(back==1){
					op=-1;
				} else if(back==0){
					op=0;
					back=1;
				} else {
					printf("...OPS...parece que algo deu errado!\n");
				}	
			}
		} else if(op==0) {
			printf("Voce digitou 0. Encerrando o programa...\n");
		} else {
			printf("Nao digitou uma opcao valida.\nDigite 0 para sair do programa ou um numero valido...\n");
			scanf("%d",&op);
		}
	}
	printf("\nFIM DO PROGRAMA\n");
	return 0;
}
