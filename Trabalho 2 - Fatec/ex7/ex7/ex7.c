#include <stdio.h>


int main(void) {
	char text[] = " um , dois , tres . ";
	printf("|%s|\n",compress(text)); // deve exibir |um,dois,tres.|
	return 0;
}
