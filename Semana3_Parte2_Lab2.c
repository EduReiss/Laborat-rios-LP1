//"Giro de Estoque" – Criar um vetor de 7 posições (domingo a sábado) e registrar a quantidade de
//insumos hospitalares consumidos, mostrando a média diária ao final.
#include <stdio.h>
int main() {
    char dia[7][10] = {"Domingo", "Segunda", "Terca", "Quarta", "Quinta", "Sexta", "Sabado"};
    int insumos,soma = 0;
    float media;

    for (int i = 0; i<7; i++) {
        printf("Total de insumos consumidos no(a) %s: ", dia[i]);
        scanf("%i", &insumos);
        soma += insumos;
    }
    media = soma / 7.0;
    printf("A media diaria de insumos consumidos eh de: %.2f", media);
    return 0;
}
