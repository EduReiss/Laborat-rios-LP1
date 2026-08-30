#include <stdio.h>
#include <locale.h>


int main() {
    float ouro_encontrado;

    printf("Informe a quantidade de moedas de ouro encontrados: ");
    scanf("%f", &ouro_encontrado);

    int total_cobre = 0, total_prata = 0, cobre = 0;

    total_cobre = ouro_encontrado * 100; // converte pra menor unidade

    total_prata  = total_cobre / 10;
    cobre = total_cobre % 10;



    printf("Prata: %i \n", total_prata);
    printf("Cobre: %i \n", cobre);




    return 0;
}