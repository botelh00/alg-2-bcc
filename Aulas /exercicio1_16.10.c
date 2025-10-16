#include <stdio.h>

void bubble_sort(int v[], int n) {
    int i, j, tmp;
    for (i = 0; i < n - 1; i++) {
        int trocou = 0;
        for (j = 0; j < n - 1 - i; j++) {
            //if (v[j] > v[j + 1]) {   Linha para ordenar da forma normal
            if (v[j]<v[j+1]){ //linha ordenando ao contrário
                tmp = v[j];
                v[j] = v[j + 1];
                v[j + 1] = tmp;
                trocou = 1;
            }
        }
        if (!trocou){
            break; 
        }
    }
}

void imprime(int v[], int n) {
    int i;
    for (i = 0; i < n; i++) {
        printf("%d ", v[i]);
    }
    printf("\n");
}

int main(){
    
    int i;
    int v[10];
    int n = 10;

    for(i=0; i<10; i++){
        printf("Insira o %dº número: ", i+1);
        scanf("%d", &v[i]);
    }

    imprime(v, n);

    bubble_sort(v, n);

    imprime(v, n);

    return 0;
}