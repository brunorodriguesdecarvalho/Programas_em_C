#include <stdio.h>

int main() {
    FILE * file_pointer;
    char buffer[100000000], c;
	char arq[] = "";
	printf("Digite o nome ou o caminho do arquivo que deseja ler (incluindo a extens: ");
	scanf("%s", &arq);

    file_pointer = fopen(arq, "r");
    printf("----read a line----\n");
    fgets(buffer, 50, file_pointer);
    printf("%s\n", buffer);

    printf("----read and parse data----\n");
    file_pointer = fopen(arq, "r"); //reset the pointer
    char str1[10], str2[2], str3[20], str4[2];
    fscanf(file_pointer, "%s %s %s %s", str1, str2, str3, str4);
    printf("Read String1 |%s|\n", str1);
    printf("Read String2 |%s|\n", str2);
    printf("Read String3 |%s|\n", str3);
    printf("Read String4 |%s|\n", str4);

    fclose(file_pointer);
    return 0;
}
