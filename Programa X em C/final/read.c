#include <stdio.h>

int main() {
    FILE * file_pointer;
    char buffer[30], c;
	char arq[] = "";
	printf("Digite o nome ou o caminho do arquivo que deseja ler (incluindo a extensao): ");
	scanf("%s", &arq);

    file_pointer = fopen(arq, "r");
    printf("----read a line----\n");
    fgets(buffer, 1000000, file_pointer);
    printf("%s\n", buffer);

    fclose(file_pointer);
    return 0;
}
