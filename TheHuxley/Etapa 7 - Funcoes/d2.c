#include <stdio.h>
#define ast '*'
int ler(x) {
	int j;
	char v[512];
	for(j=0; j<x; j++){
		v[j]=ast;	
	};
	return j;
};

int main (void) {
	int x;
	scanf("%d",&x);
	for(int i=0; i<x; i++){
		printf("%s", puts(ler(x)));	
	};
	return 0;
}
