#include <stdio.h>
int main (void) {
	int a, b, c;
	scanf("%d", &a);
	scanf("%d", &b);
	scanf("%d", &c);
	if ( a<(b+c) && b<(a+c) && c<(a+b) ) {
		printf("podem formar um triangulo\n");
		if( a==b && b==c ) {
			printf("equilatero");
		}
      	else if( a==b || a==c || b==c) {
			printf("isosceles");
		}
      	else {
			printf("escaleno");
		}
	} else {
		printf("nao podem formar um triangulo");
	}
	return 0;
}
