#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int len(char *a){
	int k=0;
	while(*a){
		k++;
		a++;
	}
	return k;
}

int main() {
	char s[255];
	gets(&s);
	printf("%d", len(s));
	return 0;
}
