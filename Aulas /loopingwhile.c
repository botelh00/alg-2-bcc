#include <stdio.h>

int main(){

    int cont = 0;

    while (cont <=18){
        printf("O contador está em %d!\n", cont);
        cont = cont + 1;
        cont += 1;
        cont ++;
   }

    return 0;
}