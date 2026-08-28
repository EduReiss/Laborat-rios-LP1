#include <stdio.h>
#include <locale.h>


int main() {
    float forca;
    float arma;
    float defesa_inimigo;
    float dano_final = 0;

    printf("Informe os pontos de forca: ");
    scanf("%f", &forca);

    printf("Informe os pontos de dano da arma: ");
    scanf("%f", &arma);

    printf("Informe os pontos de defesa do inimigo: ");
    scanf("%f", &defesa_inimigo);

    dano_final = (forca * 1.5) + (arma - defesa_inimigo);
    printf("O dano final eh %2.f:", dano_final);

    return 0;



}
