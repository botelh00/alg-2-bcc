#include <stdio.h>

int main(){

    int celsius;
    printf("Insira a temperatura em Celsius: ");
    scanf("%d", &celsius);

    float fahren = celsius*(9/5)+32;

    printf("A temperatura em Fahrenheit é: %f °F\n", fahren);
    
    return 0;
}