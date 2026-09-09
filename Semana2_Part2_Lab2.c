//Lab 2: "Classificador Multiclasse de Estágios de Anomalia" – Receber um valor de pontuação contínuo
//ou percentual (0 a 100), simulando o parâmetro de saída (score de confiança) de um modelo de
//Inteligência Artificial de visão computacional. Construir uma estrutura de condicionais aninhadas
//(if / else if / else) para categorizar o nível de gravidade da patologia (ex.: retinopatia ausente,
//leve, moderada, severa ou proliferativa), validando limites e tratando entradas inválidas.

#include <stdio.h>

int main() {
    float valor;

    printf("+===============================================+\n");
    printf("CLASSIFICADOR MULTICLASSE DE ESTAGIOS DE ANOMALIA\n");
    printf("+===============================================+\n");
    printf("Digite o score de confianca em valor percentual: \n");
    scanf("%f", &valor);

    if (valor < 0 || valor > 100) {
        printf("+=====================ERRO======================+\n");
        printf("Digite um valor valido (entre 0 e 100)\n");
        printf("+===============================================+");
    }

    else
        if (valor <= 20) {
            printf("+===================RESULTADO===================+\n");
            printf("Retinopatia ausente\n");
            printf("+===============================================+");
        }
        else if (valor <= 40) {
            printf("+===================RESULTADO===================+\n");
            printf("Retinopatia leve\n");
            printf("+===============================================+");
        }
        else if (valor <= 60) {
            printf("+===================RESULTADO===================+\n");
            printf("Retinopatia moderada\n");
            printf("+===============================================+");
        }
        else if (valor <= 80) {
            printf("+===================RESULTADO===================+\n");
            printf("Retinopatia severa\n");
            printf("+===============================================+");
        }
        else {
            printf("+===================RESULTADO===================+\n");
            printf("Retinopatia proliferativa\n");
            printf("+===============================================+");
        }



    return 0;
}