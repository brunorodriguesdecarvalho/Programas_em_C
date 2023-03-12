// ILP-010 (Prof. Dr. Silvio do Lago Pereira)

//------------------------------------------------------------
// Exemplo 7
//------------------------------------------------------------

#include <stdio.h>

typedef struct {
   int dia;
   int mes;
   int ano;
} Data;

typedef struct {
   int codigo;
   char nome[21];
   float salario;
   Data admissao;
} Func;

int main(void) {
   Func f;
   printf("Codigo..: "); scanf("%d%*c",&f.codigo);
   printf("Nome....: "); gets(f.nome);
   printf("Salario.: "); scanf("%f",&f.salario);
   printf("Admissao: "); scanf("%d/%d/%d",&f.admissao.dia,
                                          &f.admissao.mes,
                                          &f.admissao.ano);
   printf("Func....: %d %s %.2f %02d/%02d/%d\n",
          f.codigo,f.nome,f.salario,
          f.admissao.dia,f.admissao.mes,f.admissao.ano);
   return 0;
}

//------------------------------------------------------------
// Exemplo 8
//------------------------------------------------------------

#include <stdio.h>

typedef struct {
   int dia;
   int mes;
   int ano;
} Data;

typedef struct {
   int codigo;
   char nome[21];
   float salario;
   Data admissao;
} Func;

int main(void) {
   Func f1 = {413,"Fred Barbosa",8750.00,{25,10,2017}};
   Func f2 = f1;
   printf("f2 = {%d,%s,%.2f,{%d,%d,%d}}\n",
          f2.codigo,f2.nome,f2.salario,
          f2.admissao.dia,f2.admissao.mes,f2.admissao.ano);
   return 0;
}

//------------------------------------------------------------
// Exemplo 9
//------------------------------------------------------------

#include <stdio.h>

typedef struct {
   int dia;
   int mes;
   int ano;
} Data;

typedef struct {
   int codigo;
   char nome[21];
   float salario;
   Data admissao;
} Func;

void reajuste(Func g) {
   g.salario *= 1.10; // altera apenas a copia da estrutura!
   printf("{%d,%s,%.2f,{%d,%d,%d}}\n",
          g.codigo,g.nome,g.salario,
          g.admissao.dia,g.admissao.mes,g.admissao.ano);
}

int main(void) {
   Func f = {295,"Ana Teixeira",6100.00,{5,9,2015}};
   reajuste(f);
   reajuste(f);
   return 0;
}


//------------------------------------------------------------
// Exemplo 10
//------------------------------------------------------------

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

typedef struct { float x1; float x2; } Raizes;

Raizes equacao(float a, float b, float c) {
   float d = pow(b,2) - 4*a*c;
   if( a==0 || d<0 ) { puts("Erro!"); abort(); }
   Raizes s = {(-b - sqrt(d))/(2*a),(-b + sqrt(d))/(2*a)};
   return s;
}

int main(void) {
   Raizes r = equacao(1,-5,6);  // x^2 - 5x + 6 = 0
   printf("Raizes da equacao = {%.1f,%.1f}\n",r.x1,r.x2);
   return 0;
}

//------------------------------------------------------------
// Exemplo 11
//------------------------------------------------------------

#include <stdio.h>
#include <string.h>

typedef struct {
   int dia;
   int mes;
   int ano;
} Data;

typedef struct {
   int codigo;
   char nome[21];
   float salario;
   Data admissao;
} Func;

void exibe(Func f) {
    printf("{%d,%s,%.2f,{%d,%d,%d}}\n",
          f.codigo,f.nome,f.salario,
          f.admissao.dia,f.admissao.mes,f.admissao.ano);
}

int main(void) {
   Func a = {295,"Ana Teixeira",6100.00,{5,9,2015}};
   Func b = {102,"Catia Telles",7300.00,{3,8,2014}};
   exibe(a.codigo<b.codigo ? a : b);
   exibe(strcmp(a.nome,b.nome)<0 ? a : b);
   return 0;
}

//------------------------------------------------------------
// Exemplo 12
//------------------------------------------------------------

Func v[] = {{561,"Eva Maranhao",9200.00,{2,7,2012}},
            {295,"Ana Teixeira",6100.00,{5,9,2015}},
            {473,"Denise Lagoa",8500.00,{1,6,2013}},
            {102,"Catia Telles",7300.00,{3,8,2014}},
            {384,"Beatriz Lira",5400.00,{4,9,2016}}};

//------------------------------------------------------------
// Exercicio 2
//------------------------------------------------------------

void bsort(int v[],int n) {
   for(int i=1; i<=n-1; i++)
      for(int j=0; j<n-i; j++)
         if( v[j]>v[j+1] )
            troca(v,j,j+1);
}

//------------------------------------------------------------
// Exercicio 7
//------------------------------------------------------------

int main(void) {
   Ponto a = le_ponto(1);
   Ponto b = le_ponto(2);
   printf("Distancia: %.1f\n",distancia(a,b));
   return 0;
}


//------------------------------------------------------------
// Exercicio 8
//------------------------------------------------------------

int main(void) {
   Ponto v[4] = {{0,2},{2,2},{2,0},{0,0}};
   printf("Perimetro: %.1f\n",perimetro(v,4));
   return 0;
}

//------------------------------------------------------------
// Exemplo 13
//------------------------------------------------------------

#include <stdio.h>

typedef struct {int origem; int destino; } Via; 

int pertence(int x,int r[],int n) {
   for(int i=0; i<n; i++)
      if( x==r[i] ) return 1;
   return 0;
}

void exibe(int r[],int n) {
   for(int j=0; j<n; j++) printf("%d,",r[j]); 
   printf("\b.\n");
}

void rotas(int x,int y,Via v[],int n) {
   static int r[100], i=0;
   r[i++] = x;
   if( x==y ) exibe(r,i);
   else
      for(int j=0; j<n; j++)
         if( v[j].origem==x && !pertence(v[j].destino,r,i) ) 
            rotas(v[j].destino,y,v,n); 
   i--;
}

int main(void) {
   Via v[10] = {{1,2},{1,3},
                {2,1},{2,4},
                {3,2},{3,4},{3,5},
                {4,3},{4,5},
                {5,4}};
   rotas(1,5,v,10);
   return 0;
}
