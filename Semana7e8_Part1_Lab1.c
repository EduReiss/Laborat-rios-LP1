//Lab 1: "Representação de Pixels" – Criar uma matriz 5x5 em tons de cinza. Aplicar um
//algoritmo de binarização (Threshold): valores > 128 viram 255 (branco), menores viram 0 (preto).

#include <stdio.h>

int main()
{
    int imagem[5][5] = {
        {255, 20, 198, 32, 88},
        {180, 255,  12,  90, 130},
        {  0, 128, 129, 220,  75},
        {210,  60, 110, 140, 250},
        { 95, 170,  30, 115, 190}
    };

    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 5; j++){
            if (imagem[i][j] > 128){
                imagem[i][j] = 255;
            }
            else {
                imagem[i][j] = 0;
            }
        }
    }

    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 5; j++){
            printf("%3i ", imagem[i][j]);
        }
        printf("\n");
    }




    return 0;
}
