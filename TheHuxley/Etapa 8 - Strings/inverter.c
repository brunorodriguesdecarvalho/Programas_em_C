#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void inverter(char s[]){
	for(int i=6-1;i>=0;i--){
		printf("%s", s[i]);
	}
}

int main() {
	char s[6];
	char o[6];
	gets(s);
	inverter(s);
	return 0;
}
