#include <stdio.h>
#include <stdlib.h>

int main(void){
	int diaS[2];
	int mesS[2];
	int anoS[4];
	printf("Digite uma data de nascimento. Por favor siga as instruções a seguir.\n");
	printf("Digite o dia do nascimento entre 1 e 31: ");
	scanf(diaS)
	setbuf(stdin, 0);
	printf("Digite o mes do nascimento entre 1 e 12: ");
	fgets(mesS, 2, stdin);
	printf("\nDigite o ano do nascimento acima de 1900: ");
	fgets(anoS, 4, stdin);
	return 0;
}
