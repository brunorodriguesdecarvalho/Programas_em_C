#include <stdio.h>
typedef struct {int cod; char nome[512]; float salario;} Func;

void cmp_c(int *v, int a){
	int x=v[a];
	v[a]=v[a+1];
	v[a+1]=x;
}

void ordena(void (*cmp_c)(Func,int,int), Func v, int n){
	for(int i=1; i<=n-1; i++){
		for(int j=0; j<n-i ;j++){
			int *p = int Func[i].cod;
			int *q = int Func[i+1].cod;
			if(p>q){}
		}
	}
}
void exibe(int *v, int n){
	for(int i=0;i<n;i++)
		printf("v[%d]: %d\n", i, v[i]);
}

int main(void) {
	Func v[5] = {{561,"Eva Maranhao",9200.00},
				 {295,"Ana Teixeira",6100.00},
				 {473,"Denise Lagoa",8500.00},
				 {102,"Catia Telles",7300.00},
				 {384,"Beatriz Lira",5400.00}};
	printf("Ordenar por 1-codigo, 2-nome ou 3-salario? ");
	switch( getchar() ) {
		case '1': ordena(cmp_c,v,5); break;/*
		case '2': ordena(cmp_n,v,5); break;
		case '3': ordena(cmp_s,v,5); break;*/
	}
	puts("Tabela ordenada:");
	exibe(v,5);
	return 0;
}
