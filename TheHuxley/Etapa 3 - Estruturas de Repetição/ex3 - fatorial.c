#include <stdio.h>

int main (void) {
	int num, i;
	scanf("%d", &num);
	for(i=num; i>1; i--){
		num *= (i-1);
	};
	if(num==0){
		printf("1");
	} else {
		printf("%d", num);
	};
	return 0;
};
