#include <stdio.h>

int main (void) {
	int lido=-1, max=0;
	while(lido!=0){
		scanf("%d", &lido);
		if(lido>max){
			max=lido;
		};
	};
	printf("%d", max);
	return 0;
};
