#include <stdio.h>

int main(void) {
	int v[512], x[1], busca=0, tamA;
	scanf("%d", &busca);
	scanf("%d", &tamA);
	for(int i=0; i<tamA; i++){
		scanf("%d", &v[i]);
	};
	for(int i=0; i<tamA;i--){
		if(busca==v[i]){
			x[0]+=1;
		};
	};
	printf("%d", x[0]);
	return 0;
}
