#include <stdio.h>
void cpy(char s[],char t[]) {
	int i=0;
	while( s[i]=t[i] )
	i++;
}

int main(void) {
	char v[5], w[5];
	gets(v);
	cpy(w, v);
	puts(w);
	return 0;
}

