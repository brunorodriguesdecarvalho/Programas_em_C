#include <stdio.h>

int main(void) {
	int a[50], b[50], tam_a=10, tam_b=10;
	for(int i=0; i<10; i++){
		scanf("%d", &a[i]);
		b[i]=a[i];
	};
	for(int i=9; i>0; i--){
		printf("%d\n", b[i]);
	};
	return 0;
}
