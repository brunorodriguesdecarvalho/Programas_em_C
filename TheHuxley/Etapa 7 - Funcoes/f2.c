#include <stdio.h>

int main(void) {
	float a[512];
	float min=-999999;
	for(int i=0; i<4; i++){
		scanf("%f", &a[i]);
	};

	//código para identificar o máximo
	for(int i=0; i<4; i++){
		if(a[i]>min){
			min=a[i];
		}
	};
	
	//informar a média entre o mínimo e o máximo
	printf("%.2f\n",(min));

	return 0;
}
