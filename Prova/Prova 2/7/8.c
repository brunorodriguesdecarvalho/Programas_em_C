#include <stdio.h>

char* replace(char s[], char x, char y) {
	for(int a = 0; s[a]; a++) {
		if(s[a] == x) s[a] = y;
	}
	return s;
}

int main(void) {
	char text[] = "nona";
	printf("|%s|\n",replace(text,'a','o')); // deve exibir |nono|
return 0;
}

