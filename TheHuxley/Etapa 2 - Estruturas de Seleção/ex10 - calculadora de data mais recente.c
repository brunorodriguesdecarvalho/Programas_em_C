#include <stdio.h>
int main (void) {
	int dia1, mes1, ano1, dia2, mes2, ano2;
	scanf("%d %d %d\n", &dia1 ,&mes1, &ano1);
	scanf("%d %d %d", &dia2 ,&mes2, &ano2);
	if(ano1>ano2){
		printf("%d %d %d", dia1, mes1, ano1);
	} else if (ano1<ano2) {
		printf("%d %d %d", dia2, mes2, ano2);
	} else if (mes1>mes2) {
		printf("%d %d %d", dia1, mes1, ano1);
	} else if (mes1<mes2) {
		printf("%d %d %d", dia2, mes2, ano2);
	} else if (dia1>dia2) {
		printf("%d %d %d", dia1, mes1, ano1);
	} else if (dia1<dia2) {
		printf("%d %d %d", dia2, mes2, ano2);
	} else {
		printf("DATAS IGUAIS");
	}
	return 0;
}
