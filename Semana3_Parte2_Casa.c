//Filtro de Janela Deslizante" – Preencher um vetor de 12 posições com leituras de frequência cardíaca.
//Gerar um segundo vetor onde cada posição é a média móvel das 3 leituras adjacentes, imprimindo o
//resultado para análise de tendências.
#include <stdio.h>

int main() {
    float freqCard[12], mediaMovel[10];
    float soma = 0, media = 0;

    for (int i = 0; i < 12; i++) {
        printf("Insira a frequencia cardiaca numero %i: ", i+1);
        scanf("%f", &freqCard[i]);
    }
    for (int i = 0; i< 10; i++) {
        soma = freqCard[i] + freqCard[i+1] + freqCard[i+2];
        media = soma / 3;
        mediaMovel[i] = media;
    }
    for (int i = 0; i < 10; i++) {
        printf("A media movel das frequencias eh %.2f\n", mediaMovel[i]);
    }
    return 0;
}