#include <stdio.h>

int len(char *a){
	int k=0;
	while(*a){
		k++;
		a++;
	}
	return k;
}

char* compress(char *txt){
	int n=len(txt);
	for(int i=0; i<n;i++){
		if(txt[i]==' '){
			for(int j=i; j<n; j++){
				txt[j]=txt[j+1];
			}
		}
	}
	return txt;
}

int main(void) {
	char text[] = " um , dois , tres . ";
	printf("|%s|\n",compress(text)); // deve exibir |um,dois,tres.|
	return 0;
}
