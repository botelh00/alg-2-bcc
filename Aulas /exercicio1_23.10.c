#include <stdio.h>

int expoente(int a, int b){
    int e;
    if(b==1){
        return a;
    }
    if(b==0){
        return 1;
    }
    if(b<0){
        printf("ERRO: expoente negativo!");
        return 0;
    }
    return expoente(a, b-1)*a;
}

int main(){
    
    int f = 0;
    int a = 2;
    int b = 5;
    f = expoente(a, b);

    printf("%d\n", f);

    return 0;
}