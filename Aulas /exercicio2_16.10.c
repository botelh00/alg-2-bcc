#include <stdio.h>

void selection_sort(int v[], int n) {
    int i, j, menor_indice, temp;
    for (i = 0; i < n - 1; i++) {
        menor_indice = i;
        for (j = i + 1; j < n; j++) {
            //if (v[j] < v[menor_indice]) {   Linha para ordenar da forma normal
            if (v[j] > v[menor_indice]){ //linha ordenando ao contrário
                menor_indice = j;
            }
        }
        if (menor_indice != 1){
            temp = v[i];
            v[i] = v[menor_indice];
            v[menor_indice] = temp;
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

    selection_sort(v, n);

    imprime(v, n);

    return 0;
}