#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int busca, tam;
    scanf("%d", &busca);
    scanf("%d", &tam);
    int v[tam];
    for(int i=0; i<tam; i++){
        scanf("%d", &v[i]);
    }
    for(int i=0; i<tam; i++){
        printf("%d\n",v[i]);
    }
	return 0;
}
