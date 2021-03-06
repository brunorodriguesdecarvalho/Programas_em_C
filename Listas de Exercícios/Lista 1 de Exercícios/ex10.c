#include <stdio.h>
#include <math.h>

int main(void) {
//obter a primeira coordenada
	float x1input, y1input;
	printf("Digite um numero para o X da primeira coordenada:");
	scanf("%f", &x1input);
	printf("Digite um numero para o Y da primeira coordenada:");
	scanf("%f", &y1input);	

//obter a segunda coordenada
	float x2input, y2input;
	printf("Digite um numero para o X da segunda coordenada:");
	scanf("%f", &x2input);
	printf("Digite um numero para o Y da segunda coordenada:");
	scanf("%f", &y2input);

//Mostrar ao usuário o que foi digitado
	printf("Digitado: \n  Posicao 1 -> ( %.1f , %.1f )\n  Posicao 2 -> ( %.1f , %.1f ) \n", x1input, y1input, x2input, y2input);

//Testar se o input está invertido
	float x1adj, x2adj, y1adj, y2adj;

	if(x2input>x1input){
		x1adj = x2input;
		x2adj = x1input;
	} else {
		x1adj = x1input;
		x2adj = x2input;
	};
	if(y2input>y1input){
		y1adj = y2input;
		y2adj = y1input;
	} else {
		y1adj = y1input;
		y2adj = y2input;
	};	

//Realizar o calculo da distancia entre os pontos:
	float xDiff, yDiff;
	xDiff = x2adj - x1adj;
	yDiff = y2adj - y1adj;
	printf("Diferenca X: [%.1f] \nDiferenca Y: [%.1f]\n", xDiff, yDiff);

//Realizar o calculo da hipotenusa:
	float xQ, yQ, hip;
	xQ = pow(xDiff, 2);
	yQ = pow(yDiff, 2);
	printf("  X ao quadrado: [%.1f] \n  Y ao quadrado: [%.1f]\n", xQ, yQ);
	hip = sqrt(xQ + yQ);
	printf("Distancia entre os pontos = %.1f\n", hip);
	return 0;
}
