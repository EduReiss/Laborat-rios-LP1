//1)Usando as funções rand/srand para gerar números aleatórios (#include <stdlib.h> e #include <time.h>),
//escreva um programa que gere 6 sequências de N dezenas com valores entre 01 à 99. Não pode haver repetição
//entre as dezenas sorteadas dentro das sequências (pode usar vetores).
//2) Ampliar o exercício anterior para permitir que a quantidade de sequências, de dezenas e repetições sejam
//escolhidas pelo usuário.

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main() {
    int sequencia[6];
    int min = 1, max = 99;

    srand(time(NULL));
    for (int i = 0; i<6 ; i++) {
        int numAleatorio = (rand() % (max - min +1)) + min;
        for (int j = 0; j<6; j++) {
            if (numAleatorio == sequencia[j]) {
                while (numAleatorio == sequencia[j]) {
                    int numAleatorioDeNovo = (rand() % (max - min +1)) + min;
                    sequencia[i] = numAleatorioDeNovo;
                }

            }
        }
    }
    for (int i=0; i<6; i++) {
        printf("Numeros sorteados: %2i\n", sequencia[i]);
    }

    return 0;
}