#include <stdio.h>

int main(void) {
	int voto=1, c4=0, c5=0, c9=0;
	while(voto!=0){
		scanf("%d", &voto);
		if(voto==4){
			c4+=1;
		} else if(voto==5){
			c5+=1;
		} else if(voto==9){
			c9+=1;
		} else {};
	};
	if(c9>c5 && c9>c4){
		if (c4>c5) {
			printf("canal 9: %d\n", c9);
			printf("canal 4: %d\n", c4);
			printf("canal 5: %d\n", c5);
		} else {
			printf("canal 9: %d\n", c9);
			printf("canal 5: %d\n", c5);
			printf("canal 4: %d\n", c4);
		};
	} else if (c5>c9 && c5>c4) {
		if (c4>c9) {
			printf("canal 5: %d\n", c5);
			printf("canal 4: %d\n", c4);
			printf("canal 9: %d\n", c9);
		} else {
			printf("canal 5: %d\n", c5);
			printf("canal 9: %d\n", c9);
			printf("canal 4: %d\n", c4);
		};
	} else if (c4>c5 && c4>c9) {
		if (c5>c9) {
			printf("canal 4: %d\n", c4);
			printf("canal 5: %d\n", c5);
			printf("canal 9: %d\n", c9);
		} else {
			printf("canal 4: %d\n", c4);
			printf("canal 9: %d\n", c9);
			printf("canal 5: %d\n", c5);
		};
	};
	return 0;
};
