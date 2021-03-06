#include <stdio.h>

int bb(int x, int v[], int i, int j) {
	if( i>j ) return 0;
	int m = (i+j)/2;
	if( x<v[m] ) return bb(x,v,i=m+1,j);
	if( x>v[m] ) return bb(x,v,i,j=m-1);
	return 1;
}

int main(void) {
	int v[9] = {90,82,79,64,51,46,35,27,13};
	printf("bb(35,v,0,8) = %d\n", bb(35,v,0,8));
	printf("bb(81,v,0,8) = %d\n", bb(81,v,0,8));
	return 0;
}
