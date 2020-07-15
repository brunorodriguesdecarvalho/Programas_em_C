#include <stdio.h>
#include <stdlib.h>

void leia(float v[],int n) {
   for(int i=0; i<n; i++) {
      printf("%do numero? ",i+1);
      scanf("%f",&v[i]);
   }
}

float media(float v[], int n) {
   float s = 0;
   for(int i=0; i<n; i++) 
      s += v[i];
   return s/n;
}

int main(void) {
   int n;
   printf("Tamanho da sequencia? ");
   scanf("%d",&n);
   float *v = malloc(n*sizeof(float)); // cria vetor!
   leia(v,n);
   printf("Media = %.2f\n",media(v,n));
   return 0;
}
