#include <stdio.h>

int main(void) {
	int idade;
	float salario;
	char h[2] = "h";
	char m[2] = "m";
	char s[2];
	gets(s);
	scanf("%d", &idade);
	scanf("%f", &salario);
	if(strcmp(s,h)==0 && idade>15) {
		printf("%f", salario*1.2);
	} else if (strcmp(s,m)==0 && idade>10) {
		printf("%f", salario*1.25);
	} else {
		printf("200");
	};
	return 0;
}	
