#include <stdio.h>

int F(int i) {
	if(i<1) return 0;
	if(i<4) return i;
	if(i>3) return F(i-1)+F(i-2)+F(i-3);
}

int main(void) {
	int i;
	for(i=9; i>0; i--){
		printf("F(%d): %d\n", i, F(i));
	}
	return 0;
}
