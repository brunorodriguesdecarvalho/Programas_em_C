#include <stdio.h>

int len(char *a){
	int k=0;
	while(*a){
		k++;
		a++;
	}
	return k;
}

int main(void) {
	printf("%d\n",len("abob oras"));
	return 0;
}
