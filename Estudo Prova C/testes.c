#include <stdio.h>
int main(void) {
	int a=5, *b, *c, x=12;
	b=&x;
	c=b;
	printf("Valor guardado(C) -> Direto(C=B): %X\n",c);
	printf("Valor apontado(C) -> Indireto(*C): %d\n",*c);
	printf("Valor endereco(C) -> Direto(&C): %X\n",&c);
	printf("\n");	
	printf("Valor guardado(B) -> Direto(B=A) %X\n",b);
	printf("Valor apontado(B) -> Indireto(*B) %d\n",*b);
	printf("Valor endereco(B) -> Direto(&B): %X\n",&b);
	printf("\n");
	printf("Valor guardado(A) -> Direto(A=A): %X\n",a);
	//essa não pode pq não existe *a ..... printf("Valor apontado(A) -> Indireto(*A): %d\n",*a);
	printf("Valor endereco(A) -> Direto(&A): %X\n",&a);
	return 0;
}
