#include <stdio.h>

int main(void) {
	int a[50], b[50], tam_a=50, tam_b=50;
	for(int i=0; i<50; i++){
		scanf("%d", &a[i]);
		if(a[i]<0){
			a[i]*=(-1);
		};
		b[i]=a[i];
	};
	for(int i=0; i<50; i++){
		printf("%d\n", b[i]);
	};
	return 0;
}
