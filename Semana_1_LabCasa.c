//Desafio (Casa): "CLI Dashboard" – Criar um mini painel no terminal que leia as
//iniciais de um operador e seu ID, imprimindo um crachá virtual estilizado apenas
//com caracteres textuais.
#include <stdio.h>

int main() {
    char iniciais[3];
    int id;

    printf("Por favor, digite suas iniciais (nome e ultimo sobrenome): \n");
    scanf("%s", iniciais);
    printf("Por favor, digite o seu ID: \n");
    scanf("%i", &id);

    printf("+------------------------------------+\n");
    printf("|          CRACHA DE ACESSO          |\n");
    printf("+------------------------------------+\n");
    printf("|     FUNCIONARIO     |      ID      |\n");
    printf("|         %-2s          |     #%i    |\n", iniciais, id);
    printf("+------------------------------------+\n");





    return 0;
}