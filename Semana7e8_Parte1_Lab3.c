//Lab 3: "Convolução Simples (Blur 3x3)" – Dada uma matriz 3x3 pré-preenchida,
//calcular a média de todos os valores e substituir o pixel central (índice [1][1]) por essa média.
#include <stdio.h>

int main() {
    int matriz[3][3] = {

               {1, 2, 3},
               {6, 11, 20},
               {12, 52, 2}
        }, aux[10] = {}, soma = 0, media = 0, k=0;

    // lê a matriz e guarda valores em um vetor aux
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {

                aux[k] = matriz[i][j];
                k++;
        }
    }
    // somatorio dos valores do vetor
    for (int i = 0; i<9; i++) {
        soma += aux[i];
    } printf("%i\n", soma);

    media = soma / 9; //calcula a media dos valores
    printf("%i\n", media);
    matriz[1][1] = media; //substitui o valor central da matriz

    //printa a matriz com a media no valor cental
    for (int i = 0; i<3; i++) {
        for (int j = 0; j<3; j++) {
            printf("%3i ", matriz[i][j]);
        }
        printf("\n");
    }

    return 0;
}