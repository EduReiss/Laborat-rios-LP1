//Desafio (Casa): "Cifra de César" – Ler uma mensagem investigativa sensível e aplicar um deslocamento
//de +3 na tabela ASCII em cada caractere para criptografar o texto antes do armazenamento.
#include <stdio.h>
#include <string.h>

int main() {
    char mensagem[100];
    char cifra[100];

    printf("Digite a mensagem que vc quer criptografar: \n");
    scanf("%99[^\n]", mensagem);

    for (int i=0; i<strlen(mensagem); i++) {
        cifra[i] = mensagem[i]+3;
    }
        cifra[strlen(mensagem)] = '\0';

        printf("%s", cifra);

    return 0;
}
