#include <stdio.h>

int main (void) {
	float nota, somanota=0, dividenota=0;
	while(nota!=-1) {
		scanf("%f", &nota);
		if(nota!=-1){
			somanota += nota;
			dividenota++;
		};
	};
	printf("%.2f\n", somanota/dividenota);
	return 0;
};
