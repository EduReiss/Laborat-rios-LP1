//"Simulador de Ping" – Usar um laço for para simular o envio de 4 pacotes ICMP, gerando valores de
//latência aleatórios e calculando a média.

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    float media;
    int soma = 0, latencia;

    srand(time(NULL));

    for (int i =0; i <= 4; i++) {
        latencia = rand () % 91 + 10;
        printf("Pacote %i: %i\n", i, latencia);
        soma += latencia;
    }
    media = soma / 4;
    printf("A media eh de %2.f ms\n", media);


    return 0;
}