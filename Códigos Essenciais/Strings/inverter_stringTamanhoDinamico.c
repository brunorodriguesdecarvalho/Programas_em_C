#include <stdio.h>
void inv(char s[],char t[], int n) {
	int i=0;
	for(int i=0; s[i]=t[n-1]; i++){ 
		n--;
	}
}

void exibe(char a[], int n){
	for(int i=0; i<n-1; i++){
		printf("%c", a[i]);
	}
}

int len(char *a){
	int k=0;
	while(*a){
		k++;
		a++;
	}
	return k;
}

int main(void) {
	int n=255;
	char v[n], w[n];
	gets(v);
	n=len(v);
	inv(w, v, n);
	puts(w);
	return 0;
}

