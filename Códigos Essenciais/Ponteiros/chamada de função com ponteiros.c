#include <stdio.h>
#include <math.h>
int main(void) {
	double (*p)(double);
	p = sqrt;
	printf("Raiz: %f\n",p(9));
	return 0;
}
