#include <stdio.h>

int main(){

    // Declare as variáveis sempre no início
    int i;
    int x = 50;
    int a;

    i = 10;

    printf("Número informado: %d\n", i);
    printf("Número informado: %d \n", x);

    printf("Insira um valor de A: ");
    scanf("%d", &a);

    printf("Valor inserido em A: %d \n", a);

    //printf("Endereço de memória de a: %x", a);


    return 0;
}