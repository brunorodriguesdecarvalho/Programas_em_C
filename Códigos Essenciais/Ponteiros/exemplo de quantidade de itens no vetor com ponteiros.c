#include <stdio.h>
int main(void) {
	int v[5] = {27,55,18,34,47};
	int *p = v, *q = v+4;
	printf("v : %P\n",v);
	printf("p : %P\n",p);
	printf("q : %P\n",q);
	printf("p+1: %P\n",p+1);
	printf("q-1: %P\n",q-1);
	printf("q-p: %ld\n",q-p+1);
	return 0;
}
