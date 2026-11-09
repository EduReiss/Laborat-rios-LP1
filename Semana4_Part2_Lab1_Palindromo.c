//1) Escreva um programa em C para verificar se uma string é palíndromo ou não.
#include <stdbool.h>
#include <stdio.h>
#include <string.h>
int main() {
    char palavra[50];
    bool palindromo = true;


    printf("Digite a palavra que voce deseja verificar: \n");
    scanf("%s", palavra);
    for (int i=0; i<(strlen(palavra)/2); i++) {
        for (int j = strlen(palavra) - 1; j > strlen(palavra)/2 ; j--) {
            if (palavra[i] != palavra[j]) {
                palindromo = false;
                break;
            }

        }
    }
    if (palindromo) {
        printf("A palavra eh um palindromo!");
    }
    else {
        printf("A palavra nao eh um palindromo!");
    }
    return 0;
}
