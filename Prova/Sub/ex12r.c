#include <stdio.h>
typedef struct{
int quocient;
int remainder;
}Pair;
Pair division(int x, int y){
Pair *resultado;
int q=x/y;
int r=x%y;
(*resultado).quocient=q;
(*resultado).remainder=r;
return *resultado;
}
int main(void) {
Pair p = division(17,5);
printf("|Quotient.: %d|\n", p.quocient); // deve exibir |Quotient.: 3|
printf("|Remainder: %d|\n", p.remainder); // deve exibir |Remainder: 2|
return 0;
}
