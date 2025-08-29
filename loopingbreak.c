#include <stdio.h> 

int main(){
    
    int a;

    for(a=0; a<10; a++){

        if(a == 3){
            printf("Seguindo a iteração...\n");
            continue; //o continue faz o looping passar forçadamente para a próxima etapa, ou seja, nesse caso aqui ele vai até 2, chega na 3 ele dá a mensagem e printa então a 4, sem mostrar a 3
        }
    
    
        printf("O valor de A = %d\n", a);

        if (a == 8){
            printf("Parada na iteração...\n");
            break;
        }
    }
    return 0;

}