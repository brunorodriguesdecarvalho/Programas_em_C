#include <stdio.h>
float soma(float *v, int s){
	float sum=0;
	for(s=3;s>0;s--){
		sum+=*v;
		v++;
	}
	return sum;
}

int main(void) {
	float v[3] = {2.5,1.5,3.0};
	printf("%.1f\n",soma(v,3));
	return 0;
}
