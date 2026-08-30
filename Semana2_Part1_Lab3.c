#include <stdio.h>
#include <math.h>

int main () {
    float Vo, tempo,gravidade, Y = 0;

    printf("Informe a velocidade inicial do projetil em m/s: \n");
    scanf("%f", &Vo);

    printf("Informe o tempo de voo em segundos: \n");
    scanf("%f", &tempo);

    printf("Informe o valor da gravidade do seu planeta ou satelite: \n"); //nunca se sabe quando a NASA vai usar meu codigo ne kkkk
    scanf("%f", &gravidade);


    Y = Vo * tempo - (0.5 * gravidade * pow(tempo, 2));

    printf("O valor da posicao do projetil eh de %.2f m \n", Y);
    return 0;



}

