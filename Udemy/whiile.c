#include <stdio.h>

int main (void) {
	int x = 7/2;
	int y = 7/2.0;
	printf("%d \n", sizeof(x));
	printf("%d \n", sizeof(y));
	return 0;
}
