//Demonstração (Prof): "Buffer de Sensores" – Preencher um vetor com 10 leituras de temperatura de uma
//câmara de conservação de amostras. Iterar sobre ele para encontrar o pico máximo.

#include <stdio.h>

int main() {
    float temperaturas[5];
    float maior;

    for (int i = 0; i <5; i++) {
        printf("Digite o valor da temperatura %i: \n", i+1);
        scanf("%f", &temperaturas[i]);
    }
    maior = temperaturas[0];

    for (int i = 0; i < 5; i++) {
        if (temperaturas[i] >= maior) {
            maior = temperaturas[i];
        }
    }
    printf("O pico maximo de temperatura foi de %2.f", maior);

    return 0;
}