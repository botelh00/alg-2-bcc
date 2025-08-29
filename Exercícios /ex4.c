#include <stdio.h>

int main(){
    
    int a;
    int b;

    printf("Escreva o valor de a:\n");
    scanf("%d", &a);
    printf("Escreva o valor de b:\n");
    scanf("%d", &b);

    int soma = a+b;
    float media = (a+b)/2;

    printf("O resultado da soma de A e B é: %d\n", soma);
    printf("A média dos números a A e B é: %f\n", media);
    
    return 0;

}