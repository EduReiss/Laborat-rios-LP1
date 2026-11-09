//Lab 2: "Filtro de Exsudatos" – Em uma matriz representando o fundo do olho, manchas muito brilhantes
//indicam problemas. Percorrer a matriz, contar quantos pixels superam o valor 200 e emitir um alerta
//se o limite for excedido.


#include <stdio.h>

int main()
{
    int imagem[5][5] = {
        {255, 20, 198, 32, 88},
        {180, 255,  12,  90, 130},
        {  0, 128, 129, 220,  75},
        {210,  60, 110, 140, 250},
        { 95, 170,  30, 115, 190}
    },
    alerta = 0;

    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 5; j++){
            if (imagem[i][j] > 200){
                alerta++;
                printf("Anomalia detectada na Linha %i Coluna %i \n\n", i, j);
            }
        }
    }

    if(alerta == 0) {
        printf("Nenhuma anomalia detectada!");
    }




    return 0;
}
