#include <stdio.h>
#include <conio.h>

int main(void){
	//Calculo da média
	float x, y, m, f, a, p;
	printf("Digite a primeira nota: ");
	scanf("%f", &x);
	printf("Digite a segunda nota: ");
	scanf("%f", &y);
	m=(x+y)/2;
	printf("media: [%.2f]\n", m);

	//Calculo de faltas
	printf("Digite a  quantidade de faltas: ");
	scanf("%f", &f);
	printf("Digite a  quantidade de aulas: ");
	scanf("%f", &a);
	p=(1-(f/a))*100;
	printf("Frequencia: [%.2f%%]\n", p);

	//Teste de aprovacao
	if(p>=75 && m >= 6) {
		_textcolor(9);
		printf("Aprovado\n");
	} else {
		_textcolor(12);
		printf("Reprovado\n");
	};
	return 0;
}
