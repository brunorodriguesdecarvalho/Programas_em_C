#include <stdio.h>
typedef struct { int x; int y; } Ponto;
	void move(Ponto *q,int dx,int dy) {
	(*q).x += dx;
	(*q).y += dy;
}
int main(void) {
	Ponto p = {30,44};
	move(&p,1,-4);
	printf("Posicao: %d,%d\n",p.x,p.y);
	return 0;
}
