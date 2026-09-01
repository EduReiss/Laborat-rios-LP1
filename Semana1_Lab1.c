#include <stdio.h>

//Lab 1: "Coleta de Requisitos" – Ler dados do usuário (nome do módulo, versão e ano)
//e imprimir um cabeçalho formatado para um log de execução.

int main() {
    char modulo[20], versao[10];
    int  ano;

    printf("Por favor, digite o nome do modulo, versao e ano: \n");
    scanf("%s %s %i", modulo, versao, &ano);
    printf("===========================\n");
    printf("Modulo: %s\n", modulo);
    printf("Versao: %s\n", versao);
    printf("Ano: %i\n", ano);
    printf("===========================\n");

    return 0;
}
