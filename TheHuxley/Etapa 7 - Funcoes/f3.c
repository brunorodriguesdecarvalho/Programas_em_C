#include <stdio.h>

int main(void) {
	int entrada=0;
	scanf("%d", &entrada);
	if((entrada%2)==0){
		printf("par\n");
	} else {printf("nao par\n");};
	return 0;
}
