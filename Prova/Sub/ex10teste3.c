#include <stdio.h>
#include <string.h>
int main(void) {
	int v = 10;
	int *p = &v;
	printf("%d", *p);
	v = 20;
	printf("%d", *p);
	return 0;
}
