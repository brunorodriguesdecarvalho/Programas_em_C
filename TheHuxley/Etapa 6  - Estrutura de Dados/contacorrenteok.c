#include <stdio.h>

typedef struct {
    int codigo;
	char nome[30];
	float credito;
} Cliente;

int main(void){
	Cliente arrombado;
	scanf("%d", &arrombado.codigo);
	scanf("%s", &arrombado.nome);
	scanf("%f", &arrombado.credito);
	printf("%d\n", arrombado.codigo);
	printf("%s\n", arrombado.nome);
	printf("%.2f\n", arrombado.credito);
	return 0;
}
