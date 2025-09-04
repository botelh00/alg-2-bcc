#include <stdio.h>

void zeraVetor(int v[], int s){
    int i;

    for(i=0; i<s; i++){
        v[i] = 0;
    }
}

void imprimeVetor(int v[], int s){
    int i;

    for(i=0; i<s; i++){
        printf("Vetor na posição %d: %d\n", i, v[i]);
    }
}

int main(){

    //vetot
    int numeros[10];
    int a;

    for(a=0; a<10; a++){
        numeros[a] = 2*a;

        //printf("Insira o valor: ");
        //scanf("%d", numeros[a]);
    }
    /*
    for(a=0; a<10; a++){
        printf("Vetor na posição %d: %d\n", a,numeros[a]);
    }*/

    imprimeVetor(numeros, 10);
    zeraVetor(numeros, 10);
    imprimeVetor(numeros, 10);


    return 0;
}