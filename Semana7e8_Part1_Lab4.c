//Lab 4: "Extração de Borda (Sobel Simplificado)" – Em uma matriz 4x4, gerar uma matriz resultante onde o
//valor de cada célula é a diferença absoluta entre ela e seu vizinho da direita. Os maiores valores
//indicam as "bordas" da imagem.
#include <stdio.h>
#include <stdlib.h>
int main() {
    int matriz[4][4] = {
        {4, 2, 9, 2},
        {32, 14, 3, 2},
        {23, 44, 1, 2},
        {3, 5, 22, 1}
    };
    int matrizResultado[4][3] = {};
    int diferencaAbs = 0, maior = 0;

    for (int i =0; i<4;i++) {
        for (int j=0; j<3;j++) {
            diferencaAbs = abs(matriz[i][j] - matriz[i][j+1]);
            matrizResultado[i][j] = diferencaAbs;
            if (diferencaAbs > maior) {
                maior = diferencaAbs;
            }
            printf("%3i", matrizResultado[i][j]);
        } printf("\n");
    }

    for (int i =0; i<4; i++) {
        for (int j =0; j<3; j++) {
            if (matrizResultado[i][j] == maior) {
                printf("Borda detectada na Linha: %i Coluna: %i\n", i+1, j+1);
            }
        }
    }

    return 0;
}
