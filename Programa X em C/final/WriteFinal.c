#include <stdio.h>
int main() {
	printf("Iniciando criador de JSON\n");
	int qtd = 0;
	printf("\nDigite a quantidade de entradas: ");
	scanf("%d", &qtd);
	char sep[]=",";
	//printf("\nDigite o separador padrão: ");
	//scanf("%s", &sep);
	char nome[1024];
	printf("\nDigite o que nome do arquivo com a extensao: ");
	scanf("%s", &nome);
	char str[1024];
	printf("\nDigite o que quer escrever: ");
	scanf("%s", &str);

    int i;
    FILE * fptr;
    char fn[50];
    //char str[] = "{'nome':'Bruno Rodrigues de Carvalho'}, \n";
    fptr = fopen(nome, "w"); // "w" defines "writing mode"
 	
	printf("\nIniciando gravacao...\n");
	char com[8] = "{";
	for (int k = 0; com[k] != '\0'; k++) {
    	/* write to file using fputc() function */
    	fputc(com[k], fptr);
	}

	for (int j=0 ; j<qtd ; j++) {
		for (i = 0; str[i] != '\0'; i++) {
        	/* write to file using fputc() function */
        	fputc(str[i], fptr);
    	}
		for (i = 0; sep[i] != '\0'; i++) {
        	/* write to file using fputc() function */
        	fputc(sep[i], fptr);
    	}
	}
	
	char fim[8] = "}";
	for (int l = 0; fim[l] != '\0'; l++) {
    	/* write to file using fputc() function */
    	fputc(fim[l], fptr);
	}

    fclose(fptr);

	printf("\nFim do Programa...\n");

    return 0;
}
