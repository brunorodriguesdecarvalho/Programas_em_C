#include<stdio.h>

int n, x;

int func(int x, int n) {
	if(n==0) {
		return 2;
	} else if (n>0)	{
		return ( x*func( x,(n-1) ) );
	}
}

int main (void){
	printf("%d\n", func(3,5));
	return 0;
}
