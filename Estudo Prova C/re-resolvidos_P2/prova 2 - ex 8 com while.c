#include <stdio.h>
char* replace(char txt[], char a, char b){
	int i=0;
	while(txt[i]){
		if(txt[i]==a){
			txt[i]=b;
		}
		i++;
	}
	return txt;
}


int main(void) {
	char text[] = "nona";
	printf("|%s|\n",replace(text,'a','o')); // deve exibir |nono|
	return 0;
}
