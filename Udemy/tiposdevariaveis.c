#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

void main() {

	int a;
	float b;
	char c;
	bool d;

	a = 5;
	b = 2.5;
	c = 'a';
	d = true;

	printf("\n O valor de A eh: %d\n", a);
	printf("\n O valor de B eh: %.1f\n", b);
	printf("\n O valor de C eh: %c\n", c);
	printf("\n O valor de D eh: %d\n", d);

	scanf("%d", &a);
	scanf("%f", &b);
	scanf(" %c", &c);
	scanf("%d", &d);

	printf("\n O valor de A eh: %d\n", a);
	printf("\n O valor de B eh: %.3f\n", b);
	printf("\n O valor de C eh: %c\n", c);
	printf("\n O valor de D eh: %d\n", d);

	system("pause");
}
