#include <stdio.h>
int count(char busca, char txt[]){
	int tam=0;
	while(*txt){
		if(*txt==busca) tam++; 
		txt++;
	}
	return tam;
}

int main(void) {
	char text1[] = "banana";
	char text2[] = "bananada";
	printf("|%d|\n",count('a',text1)); // deve exibir |3|
	printf("|%d|\n",count('a',text2)); // deve exibir |4|
	return 0;
}
