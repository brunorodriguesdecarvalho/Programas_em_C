#include <stdio.h>
void putstr(char *s) {
	while( *s ) {
		putchar(*s);
		s++;
	}
}

int main(void) {
	putstr("Oi!\n");
	return 0;
}
