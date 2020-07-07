#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int i, idade, max, min;
    for(i=1; i<100; i++) {
        scanf("%d", &idade);
        if(idade>max){
            max=idade;
        };
        if(idade<min){
           min=idade; 
        } else {};
    };
    printf("mais novo: %d\n", min);
    printf("mais velho: %d", max);
	return 0;
}