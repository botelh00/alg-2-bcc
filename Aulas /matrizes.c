#include <stdio.h>

void imprimeMatriz(int l, int c, int m[l][c]){

    int i,j;

    //print da matriz
    for(i=0; i<8; i++){
        for(j=0; j<8; j++){
            //printf("Elemento i = %d, j = %d: %d\n", i, j, elementos[i][j]);
            printf("%d ", m[i][j]);
        }
        printf("\n");
    }
}

void zeraMatriz(int l, int c, int m [l][c]){

    int i,j;

    for(i=0; i<8; i++){
        for(j=0; j<8; j++){
            m[i][j] = 0;
        }
    }
}

int main(){

    int elementos[8][8];

    int i,j;

    //percorrendo a matriz
    
    for(i=0; i<8; i++){
        for(j=0; j<8; j++){
            elementos[i][j] = i*j;
        }
    }

    //print da matriz
    /*
    for(i=0; i<5; i++){
        for(j=0; j<5; j++){
            printf("Elemento i = %d, j = %d: %d\n", i, j, elementos[i][j]);
            //printf("%d ", elementos[i][j]);
        }
        //printf("\n");
    }*/

    imprimeMatriz(8, 8, elementos);
    zeraMatriz(8, 8, elementos);
    printf("\n");
    imprimeMatriz(8, 8, elementos);

    return 0;
}