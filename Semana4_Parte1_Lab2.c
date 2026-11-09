//Lab 2: "Distância de Hamming" – Ler duas strings de mesmo tamanho representando sequências genéticas
//(A, C, G, T) e contar em quantas posições os caracteres diferem.
#include <stdio.h>

int main() {
    char gen1[6] = {"ACGTA"};
    char gen2[6] = {"AGCTA"};
    int contador = 0;

    for (int i = 0; i<5; i++) {
            if (gen1[i] != gen2[i]) {
                contador += 1;
                printf("Diferenca na posicao %i: %c != %c\n", i+1, gen1[i], gen2[i]);
            }
    }

    printf("Os caracteres se diferem em %i posicoes", contador);

    return 0;
}