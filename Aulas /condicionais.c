#include <stdio.h>

int main(){

    int idade;
    printf("Digite a idade: ");
    scanf("%d", &idade);

    if(idade >= 0){
        if(idade >= 18){
            printf("Você pode votar!!! Você tem %d anos!\n", idade);
        }

        else{
        printf("Você é menor de idade e não pode votar. Você tem só %d anos! \n", idade);
        }

        // Forma reduzida de condicional (só funciona quando tem uma linha)
        //if(idade >= 18) printf("Você pode votar!!! Você tem %d anos!\n", idade);
        //else printf("Você é menor de idade e não pode votar. Você tem só %d anos! \n", idade);

        if(idade >= 60){
            printf("Você é senior...\n");
        }
        else if(idade >= 18){
            printf("Você é um adulto\n");
        }
        else{
            printf("Você é uma criança\n");
        }
    }
    else{
        printf("Valor inválido!\n");
    }
   
    
    return 0;
}