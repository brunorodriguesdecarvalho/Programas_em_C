#include <stdio.h>

void division(int x,int y,int *q,int *r) {
	*q = x/y;
	*r = x%y;
}

int main(void) {
	int q, r;
	division(17,5,&q,&r);
	printf("Quotient.: %d\n", q); // deve exibir Quotient.: 3
	printf("Remainder: %d\n", r); // deve exibir Remainder: 2
	return 0;
}
