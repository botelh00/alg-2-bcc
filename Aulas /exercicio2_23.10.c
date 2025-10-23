#include <stdio.h>

int soma(int a){
    if(a<0){
        printf("ERRO: número negativo\n");
        return 0;
    }
    if(a<10){
        return a;
    }
    return (a%10) + soma(a/10);
}

int main(){
   int c = soma(0git );
   printf("%d\n", c);
   return 0;
}