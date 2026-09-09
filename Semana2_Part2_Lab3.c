//Lab 4: "Bot de Navegação Autônoma e Máquina de Estados" – Implementar um controle de movimentação para um
//robô explorador utilizando a estrutura seletiva switch/case. O algoritmo deve ler caracteres de comando
//digitados pelo usuário ('W', 'A', 'S', 'D' ou variações em minúsculo), acionar os atuadores correspondentes
//para alterar a orientação/posição e incluir a cláusula default para tratar comandos desconhecidos ou paradas
//de emergência.

#include <stdio.h>

int main() {
    char comando;
    char estado = 'P';

    printf("=== BOT DE NAVEGACAO AUTONOMA ===\n\n");

    printf("Comandos disponiveis:\n");
    printf("W - Frente\n");
    printf("A - Esquerda\n");
    printf("S - Tras\n");
    printf("D - Direita\n");
    printf("X - Parada de emergencia\n\n");


    printf("Digite o comando para o robo: \n");
    scanf("%c", &comando);

    switch (comando) {
        case 'W':
        case 'w':
            estado = 'F';
            printf("O robo esta se movendo para o norte\n");
            printf("+=======================================+");
            break;

        case 'S':
        case 's':
            estado = 'T';
            printf("O robo esta se movendo para o sul\n");
            printf("+=======================================+");
            break;

        case 'A':
        case 'a':
            estado =  'E';
            printf("O robo esta se movendo para o leste\n");
            printf("+=======================================+");
            break;

        case 'D':
        case 'd':
            estado = 'D';
            printf("O robo esta se movendo para o oeste\n");
            printf("+=======================================+");
            break;

        case 'X':
        case 'x':
            estado = 'P';
            printf("O comando de parada de emergencia foi acionado\n");
            printf("+=======================================+");
            break;

        default:
            estado = 'P';
            printf("Comando invalido. O robo ficou confuso e explodiu. BUM!\n");
            printf("+=======================================+");
            break;


    }
    printf("\nEstado atual do robo: \n");
    switch (estado) {
        case 'F':
            printf("O robo esta virado para a frente\n");
            printf("+=======================================+");
            break;

        case 'T':
            printf("O robo esta virado para tras\n");
            printf("+=======================================+");
            break;

        case 'E':
            printf("O robo esta virado para a esquerda\n");
            printf("+=======================================+");
            break;

        case 'D':
            printf("O robo esta virado para a direita\n");
            printf("+=======================================+");
            break;

        default:
            printf("O robo esta parado (ou destruido)\n");
            printf("+=======================================+");
            break;


    }




    return 0;
}