#include <stdio.h>

int ler(x){
	if(x<0){return 1;}
	else {return 0;};
}

int main (void) {
	int x;
	scanf("%d",&x);
	if(ler(x)==1){
		printf("menor");
	}
	else {
		printf("nao menor");
	};
};
