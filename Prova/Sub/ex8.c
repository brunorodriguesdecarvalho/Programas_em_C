#include <stdio.h>
#include <string.h>
int main(void) {
char a[] = "uno", b[] = "one";
puts(strlen(a) == strlen(b) ? "sim" : "nao");
return 0;
}
