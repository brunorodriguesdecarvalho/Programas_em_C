#include <stdio.h>
void inv(char s[],char t[]) {
	int i=0;
	int j=4;
	for(int a=0; s[i]=t[j]; a++){ 
		i++;
		j--;
	}
}

void exibe(char a[], int n){
	for(int i=0; i<n; i++){
		printf("%c", a[i]);
	}
}

int main(void) {
	int n=5;
	char v[255], w[255];
	gets(v);
	inv(w, v);
	exibe(w, n);
	return 0;
}

