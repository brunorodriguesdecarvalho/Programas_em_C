#include <stdio.h>

int main(void) {
	int a[20], b[20];
	float min=10, max=0;
	for(int i=0; i<20; i++){
		scanf("%d", &a[i]);
	};
	//código para identificar o mínimo
	for(int i=0; i<20; i++){
		if(a[i]<min){
			min=a[i];
		}
	};

	//código para identificar o máximo
	for(int i=0; i<20; i++){
		if(a[i]>max){
			max=a[i];
		}
	};
	
	//informar a média entre o mínimo e o máximo
	printf("media: %.2f\n",(max+min)/2);

	//apresentar as notas maiores que a média
	for(int i=0; i<20; i++){
		if(a[i]>((max+min)/2)){
			printf("%d\n", a[i]);
		}
	};

	return 0;
}
