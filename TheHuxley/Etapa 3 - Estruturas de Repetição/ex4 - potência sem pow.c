#include <stdio.h>

int main (void) {
	float num, fix;
	int pot, i;
	scanf("%f", &num);
	fix = num;
	scanf("%d", &pot);
	if(pot==0){
		printf("1.00");
	} else {
		for(i=pot; i>1; i--){		
			num*=fix;
		};
		printf("%.2f\n", num);
	};
	return 0;
};
