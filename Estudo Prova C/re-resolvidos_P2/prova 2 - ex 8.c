#include <stdio.h>
char* replace(char txt[], char a, char b){
	for(int i=0; txt[i]; i++){
		if(txt[i]==a){
			txt[i]=b;
		}
	}
	return txt;
}


int main(void) {
	char text[] = "nona";
	printf("|%s|\n",replace(text,'a','o')); // deve exibir |nono|
	return 0;
}
