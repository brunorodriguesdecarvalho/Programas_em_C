#include <stdio.h>
#include <stdlib.h>
typedef struct node {
	int item;
	struct node *next;
} *List;

List node(int item, List next) {
	List new = malloc(sizeof(struct node));
	new->item = item;
	new->next = next;
	return new;
}
void print(List L) {
	printf("[");
	while( L ) {
		printf("%d", L->item);
		if( L->next ) printf(",");
		L = L->next;
	}
	printf("]\n");
}
…
int main(void) {
	List A = node(5,node(1,node(3,NULL)));
	List B = node(5,node(1,node(3, node(7,node(2,NULL)))));;
	print(A); // deve exibir [5,1,3]
	print(B); // deve exibir [5,1,3,7,2]
	printf("average(A) = %.1f\n", average(A)); // deve exibir average(A) = 3.0
	printf("average(B) = %.1f\n", average(B)); // deve exibir average(B) = 3.6
	return 0;
}
