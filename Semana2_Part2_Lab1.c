//Lab 1: "Árvore de Decisão de Triagem Médico-Hospitalar" – Desenvolver um sistema interativo
//em terminal que coleta respostas binárias (1 para Sim, 0 para Não) referentes a múltiplos
//sintomas (febre alta, tosse persistente, dor no peito, falta de ar). Demonstrar o encadeamento
//de estruturas condicionais if/else e operadores lógicos (&&, ||) para direcionar o paciente a
//níveis de prioridade de atendimento (emergência, urgência ou ambulatório) e gerar um
//diagnóstico preliminar básico.

#include <stdio.h>
#include <locale.h>


int main(void) {
    setlocale(LC_ALL, "Portuguese");
    int febre, tosse, dor_peito, falta_ar;
    printf("Caso o paciente apresente os seguintes sintomas, digite '1'. Caso não, digite '0':\n");


    printf("Febre alta: ");
    scanf("%i", &febre);


    printf("Tosse persistente: ");
    scanf("%i", &tosse);


    printf("Dor no peito: ");
    scanf("%i", &dor_peito);


    printf("Falta de ar: ");
    scanf("%i", &falta_ar);


    if (dor_peito == 1 && falta_ar ==1) {
        printf("Paciente em situação de emergência");
    }


    else if (febre == 1 && (tosse == 1 || dor_peito == 1 )) {
        printf("Paciente em situação de urgência");
    }


    else {
        printf("Paciente em prioridade baixa");
    }


    return 0;
}
