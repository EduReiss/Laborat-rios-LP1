
//2) Escreva um programa em C para inverter a ordem das palavras em uma determinada string.
//* Use gets para ler a string com espaços
#include <stdio.h>
#include <string.h>

int main() {
    char palavras[100];

    printf("Digite as palavras: ");
    fgets(palavras, 100, stdin);

    for (int i=0; i<strlen(palavras); i++) {
        palavras[i] = palavras[strlen(palavras) - 1 -i];
    }
    printf("Ordem invertida: \n %s", palavras);

    return 0;
}
