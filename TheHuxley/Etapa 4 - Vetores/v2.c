#include <stdio.h>

int main(void) {
	int a[50], b[1];
	b[0]=99999;
	for(int i=0; i<50; i++){
		scanf("%d", &a[i]);
		if(a[i]<b[0]){
			b[0]=a[i];
		};
	};
	printf("%d\n", b[0]);
	return 0;
}
