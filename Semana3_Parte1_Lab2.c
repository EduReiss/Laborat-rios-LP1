//Lab 2: "Handshake (Retry)" – Usar um while para simular a conexão a um servidor. O programa pede uma
//"Chave de Acesso" e continua em loop até que o usuário acerte ou erre 3 vezes (Timeout).

#include <stdio.h>

int main() {
    int chave = 12345 , tentativa, numTentativas = 0;

   while (numTentativas < 3) {
       printf("Digite a chave de acesso: \n");
       scanf("%i", &tentativa);
       numTentativas++;
       if (tentativa == chave) {
           printf("Acesso liberado!");
           return 0;
       }
       printf("Chave invalida!\n");
   }
    printf("Limite de tentativas atingido. Encerrando programa...");

    return 0;
}