#include <stdio.h>

/* copy input to output; 1st version  */

int main(){

char c;

c = getchar();

while (c != EOF) {

           putchar(c);

           c = getchar();

       }

return 0;

}