#include <stdio.h>
#include <stdio.h>

void minimax(int *v, int i, int *min, int *max){
	*min=1000;
	for(int j=0; j<i; j++) {
		if(v[j]<*min) {
			*min=v[j];
		} else if(v[j]>*max){
			*max=v[j];
		}
	}
}

int main(void) {
	int v[5] = {26,55,89,14,77};
	int min, max;
	minimax(v,5,&min,&max);
	printf("Min: %d\n",min);
	printf("Max: %d\n",max);
	return 0;
}
