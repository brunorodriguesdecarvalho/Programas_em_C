#include <stdio.h>

typedef struct{
	int idade;
	int amigos;
	int fotos;
	char nome[50];
	char sexo[8];
	char estado[8];
} pessoa;

int main (void) {
	int qtdUsuarios;
	pessoa user[500];	
	
	//Ler a quantidade de usuários
	scanf("%d", &qtdUsuarios);

	for(int i=0; i<qtdUsuarios; i++){
		//Ler a idade
		scanf("%d", &user[i].idade);
		//Ler o nome
		scanf("%s", &user[i].nome);
		//Ler o sexo
		scanf("%s", &user[i].sexo);
		//Ler o estado civil
		scanf("%s", &user[i].estado);
		//Ler a quantidade de amigos
		scanf("%d", &user[i].amigos);
		//Ler a quantidade de fotos do perfil
		scanf("%d", &user[i].fotos);	
	};

	for(int i=0; i<qtdUsuarios; i++) {
		printf("Idade: %d\n", user[i].idade);
		printf("Nome: %s\n", user[i].nome);
		printf("Sexo: %s\n", user[i].sexo);
		printf("Estado Civil: %s\n", user[i].estado);
		printf("Numero de amigos: %d\n", user[i].amigos);
		printf("Numero de fotos: %d\n", user[i].fotos);
		puts("\n");
	};
	for(int i=0; i<1; i++) {puts("\n");}
	return 0;
};
