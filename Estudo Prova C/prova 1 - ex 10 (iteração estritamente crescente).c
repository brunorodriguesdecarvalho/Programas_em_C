#include <stdio.h>
int ec(int v[], int n) {
	for(int i=0;i<n-1;i++)
		if(v[i]>=v[i+1])
			return 0;
		return 1;
}


int main(void) {
	int a[5] = {1,3,4,7,8};
	int b[6] = {1,3,4,4,7,8};
	int c[7] = {1,3,4,4,7,9,8};
	printf("%d\n", ec(a,5)); // deve exibir 1
	printf("%d\n", ec(b,6)); // deve exibir 0
	printf("%d\n", ec(c,7)); // deve exibir 0
	return 0;
}
