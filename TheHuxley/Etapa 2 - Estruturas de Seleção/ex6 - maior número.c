#include <stdio.h>
int main (void) {
	int numum;
	int numdois;
	scanf("%d", &numum);
	scanf("%d", &numdois);
	if (numum > numdois) {
		printf("%d", numum);
	} else {
		printf("%d", numdois); 
	}
	return 0;
}
