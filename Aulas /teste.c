#include <stdio.h>
#include <ctype.h> // Para a função toupper

int main() {
    // Matriz 26x5 para armazenar o código Morse de cada letra do alfabeto.
    // Cada linha corresponde a uma letra (A-Z).
    // As colunas armazenam os caracteres do código Morse ('.', '-').
    // Usamos um caractere nulo '\0' para indicar o fim do código.
    int morse[26][4] = {
        {'.', '-', '\0', '\0'}, // A
        {'-', '.', '.', '.'}, // B
        {'-', '.', '-', '.'}, // C
        {'-', '.', '.', '\0'}, // D
        {'.', '\0', '\0', '\0'}, // E
        {'.', '.', '-', '.'}, // F
        {'-', '-', '.', '\0'}, // G
        {'.', '.', '.', '.'}, // H
        {'.', '.', '\0', '\0'}, // I
        {'.', '-', '-', '-'}, // J
        {'-', '.', '-', '\0'}, // K
        {'.', '-', '.', '.'}, // L
        {'-', '-', '\0', '\0'}, // M
        {'-', '.', '\0', '\0'}, // N
        {'-', '-', '-', '\0'}, // O
        {'.', '-', '-', '.'}, // P
        {'-', '-', '.', '-'}, // Q
        {'.', '-', '.', '\0'}, // R
        {'.', '.', '.', '\0'}, // S
        {'-', '\0', '\0', '\0'}, // T
        {'.', '.', '-', '\0'}, // U
        {'.', '.', '.', '-'}, // V
        {'.', '-', '-', '\0'}, // W
        {'-', '.', '.', '-'}, // X
        {'-', '.', '-', '-'}, // Y
        {'-', '-', '.', '.'}  // Z
    };

    // Exibindo o abecedário com seu respectivo código Morse
    printf("--- Abecedario em Codigo Morse ---\n");
    for (int i = 0; i < 26; i++) {
        // A letra é calculada somando o índice 'i' ao caractere 'A'.
        // 'A' + 0 = 'A', 'A' + 1 = 'B', e assim por diante.
        char letra = 'A' + i;
        printf("Letra %c: ", letra);

        // Loop para percorrer o vetor (colunas) do código Morse da letra atual
        for (int j = 0; j < 4; j++) {
            // Se encontrarmos o caractere nulo, paramos de imprimir
            if (morse[i][j] == '\0') {
                break;
            }
            printf("%c", morse[i][j]);
        }
        printf("\n"); // Pula para a próxima linha
    }

    // Exemplo de como usar a matriz para traduzir uma letra
    char letra_usuario;
    printf("\n--- Teste de busca ---\n");
    printf("Digite uma letra para ver seu codigo Morse: ");
    scanf(" %c", &letra_usuario);

    // Converte a letra para maiúscula para garantir a correspondência
    letra_usuario = toupper(letra_usuario);

    // Verifica se o caractere é uma letra do alfabeto
    if (letra_usuario >= 'A' && letra_usuario <= 'Z') {
        // O índice da matriz é a diferença entre a letra e 'A'
        int indice = letra_usuario - 'A';

        printf("O codigo Morse para %c e: ", letra_usuario);
        for (int j = 0; j < 4; j++) {
            if (morse[indice][j] == '\0') {
                break;
            }
            printf("%c", morse[indice][j]);
        }
        printf("\n");
    } else {
        printf("Caractere invalido. Por favor, digite uma letra de A a Z.\n");
    }

    return 0;
}