#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int busca, tam, k=0;
    scanf("%d", &busca);
    scanf("%d", &tam);
    int v[tam];
    for(int i=0; i<tam; i++){
        scanf("%d", &v[i]);
    }
    for(int i=0; i<tam; i++){
		if(v[i]=busca){k++;}
    }
	printf("%d\n",k);
	return 0;
}
