#include <stdio.h>


int fat(int n) {
if(n==0) return 1;
else return n*fat(n-1);
}

int main (void) {
	int n;
	printf("Num?");
	scanf("%d", &n);
	printf("fat = %.1f", fat(n));
	return 0;
}
