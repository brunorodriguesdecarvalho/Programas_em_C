#include <stdio.h>
void division(int a, int b, int *q, int *r){
	*q=a/b;
	*r=a%b;
}

int main(void) {
	int q, r;
	division(17,5,&q,&r);
	printf("Quotient.: %d\n", q); // deve exibir Quotient.: 3
	printf("Remainder: %d\n", r); // deve exibir Remainder: 2
	return 0;
}
