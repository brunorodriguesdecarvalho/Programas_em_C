#include <stdio.h>

int main (void) {
	float a = (11974.83+13029+5400+1200+2700), b=3000;
	int i=0;
	while(a>0) {
		a -= 3500;
		a += b;
		i += 1;
	};
	printf("Qtd de meses: %d", i);
};
