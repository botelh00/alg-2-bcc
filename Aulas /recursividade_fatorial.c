#include <stdio.h>

int fatorial(int n){
    int f;
    if(n==1 || n==0){
        return 1;
    }
    f = fatorial(n-1)*n;
    return f;
}