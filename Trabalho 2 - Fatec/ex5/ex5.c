#include <stdio.h>
int main(void) {
	int v, *p;
	p = &v;
	puts(v == *p ? "sim" : "nao");
	return 0;
}
