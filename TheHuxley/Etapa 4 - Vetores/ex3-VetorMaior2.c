#include <stdio.h>

/*------------------------------------------------
ENTRADA: Um vetor de inteiros com capacidade para 
         ate 50 itens; a quantidade de itens que
         serao dados pelo usuario.
ACAO:    Preenche o vetor com os valores dados 
         pelo usuario.
DEVOLVE: Nada.
------------------------------------------------*/
void le_vetor(int a[], int qtd) {
	int i;
	for( i=0; i<qtd; i++ ) scanf("%d", &a[i]);
}

/*------------------------------------------------
ENTRADA: Um vetor de inteiros 'a' com 'tam_a' 
         itens; um vetor de inteiros 'b' que 
         sera preenchido de acordo com o 
         enunciado.
ACAO:    Varia conforme o enunciado.
DEVOLVE: A quantidade de itens inseridos em 'b'.
------------------------------------------------*/
int preenche_vetor(int a[], int tam_a, int b[]) {
for(int i=0; i<tam_a; i++){
		if(a[i]>b[0]){
			b[0]=a[i];
		}
	}
int tam_b=1;
return tam_b;
}

/*------------------------------------------------
ENTRADA: Um vetor de inteiros; a quantidade de 
         itens do vetor.
ACAO:    Exibe todos os itens do vetor.
DEVOLVE: Nada.
------------------------------------------------*/
void exibe_vetor(int a[], int qtd) {
	int i;
	for( i=0; i<qtd; i++ ) printf("%d\n", a[i]);
}

int main(void) {
	int a[50], b[50], tam_a, tam_b;
	scanf("%d", &tam_a);
	le_vetor(a, tam_a);
	tam_b = preenche_vetor(a, tam_a, b); /* modifique apenas esta funcao. */
	exibe_vetor(b, tam_b);
	return 0;
}
