#include <stdio.h>
int main (void) {
	int idade;
	scanf("%d", &idade);
	if (idade<11) printf("infantil");
	else if (idade<15) printf("junior");
	else if (idade<21) printf("adolescente");
	else if (idade<36) printf("jovem");
	else if (idade>35) printf("master");
	return 0;
}
