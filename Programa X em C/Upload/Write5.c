#include <stdio.h>
int main() {
	printf("Iniciando criador de JSON\n");
	int qtd = 0;
	printf("Digite a quantidade de entradas: ");
	scanf("%d", &qtd);
	char str[1024];
	printf("Digite o que quer escrever: ");
	scanf("%s", &str);
	char sep[32];
	printf("Digite o separador padrão: ");
	scanf("%s", &sep);

    int i;
    FILE * fptr;
    char fn[50];
    //char str[] = "{'nome':'Bruno Rodrigues de Carvalho'}, \n";
    fptr = fopen("bruno.json", "w"); // "w" defines "writing mode"
 	
	printf("\nIniciando gravacao...\n");

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
	//fprintf(fptr, "\n");
    fclose(fptr);

	printf("\nFim do Programa...\n");

    return 0;
}
