//Lab 2: "Layout de Relatório" – Ler três valores decimais representando o tempo de resposta
//de um servidor e imprimi-los em uma tabela perfeitamente alinhada usando especificadores
//(ex: %8.2f).

#include <stdio.h>

int main() {
    float valor_1, valor_2, valor_3;

    printf("Liste os tempos de resposta: ");
    scanf("%f %f %f", &valor_1, &valor_2, &valor_3);

    printf("============================ \n");
    printf("|  Servidor  |  Tempo(ms)  | \n");
    printf("|Requisicao 1| %11.2f |\n", valor_1);
    printf("|Requisicao 2| %11.2f |\n", valor_2);
    printf("|Requisicao 3| %11.2f |\n", valor_3);
    printf("============================ \n");



    return 0;
}
