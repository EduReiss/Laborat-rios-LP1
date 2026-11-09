//Lab 1: "Caption Filter" – Receber uma string representando a descrição textual (caption) de um
//exame médico e usar funções nativas para buscar a presença de palavras-chave como "anomalia" ou "lesão".

#include <stdio.h>
#include <string.h>
/*
int main() {
    char caption[100];


    printf("Digite o caption: ");
    fgets(caption, 100, stdin);
    char *anomalia = strstr(caption, "anomalia");
    char *lesao = strstr(caption, "lesao");
    int encontrou = 0;

    if (anomalia != NULL) {
        printf("Anomalia detectada!");
        encontrou += 1;
    }
    if (lesao != NULL){
        printf("Lesao detectada!");
        encontrou += 1;
    }
    if (encontrou == 0) {
        printf("Nenhuma palavra-chave detectada.");
    }
    return 0;
}
*/
int main() {
    char caption[100];

    printf("Digite o caption: ");
    scanf(" %99[^\n]", caption);
    int encontrou = 0;
    char *lesao = strstr(caption, "lesao");
    char *anomalia = strstr(caption, "anomalia");
    if (lesao != NULL) {
        printf("Lesao encontrada!");
        encontrou = 1;
    }
    if (anomalia != NULL) {
        printf("Anomalia encontrada!");
        encontrou = 1;
    }
    if (encontrou == 0) {
        printf("Nenhuma palavra-chave encontrada");
    }


}