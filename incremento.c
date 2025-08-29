#include <stdio.h>

int main(){

    int x = 10;

    //atibui a y e depois incrementa x
    int y = x++;

    //incrementa a x e depois atribui o valor incrementado a z
    int z = ++x;

    printf("Valor de y = %d\n", y);
    printf("Valor de z = %d\n", z);


    return 0;
}