//"Traceroute Textual" – Simular o salto de pacotes por roteadores. Para cada salto (de 1 até N),
//ler o nome do roteador e o tempo de resposta, interrompendo o laço imediatamente com break se o tempo for
//negativo (simulando perda de rota).
#include <stdio.h>
int main() {
    int numSaltos, tempo;
    char nome[50];
    printf("Digite o numero de saltos: ");
    scanf("%i", &numSaltos);

    for (int i=1; i<= numSaltos; i++) {
        printf("Nome do roteador: \n");
        scanf("%s", nome);
        printf("Tempo de resposta de %s: \n", nome);
        scanf("%i", &tempo);
        if (tempo < 0) {
            printf("Perda de rota!");
            break;
        }
    }

    return 0;
}