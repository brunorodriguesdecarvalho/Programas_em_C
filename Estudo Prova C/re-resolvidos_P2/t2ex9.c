#include <stdio.h>
typedef struct{
	int min;
	int max;
} Pair;

Pair getmm(int *v, int n){
	Pair par;
	int minaux=+10, maxaux=-10;
	for(int i=0; i<9; i++){
		if(v[i]<minaux){
			minaux=v[i];
		} 
		if(v[i]>maxaux){
			maxaux=v[i];
		}
	}
	par.min = minaux;
	par.max = maxaux;
	return v;
}


int main(void) {
	int v[9] = {5,7,2,8,-3,1,9,6,4};
	Pair p = getmm(v,9);
	printf("Minimum item: %+d\n",p.min); // deve exibir Minimum item: -3
	printf("Maximum item: %+d\n",p.max); // deve exibir Maximum item: +9
	return 0;
}
