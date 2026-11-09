// "Engine de Validação Heurística de Movimentos no Xadrez" – Ler as coordenadas Cartesianas numéricas
// (X, Y) de uma peça Cavalo e de uma peça Peão em um tabuleiro 8x8. Sem utilizar laços de repetição ou
// bibliotecas externas, aplicar exclusivamente expressões lógicas condicionais baseadas nas regras geométricas
// do movimento do Cavalo (diferença absoluta de 2 unidades em um eixo e 1 unidade no outro) para determinar se
// a peça Peão está sob alcance direto de ataque no próximo turno.
#include <stdio.h>

int main() {
    int corCavaloX, corCavaloY , corPeaoX, corPeaoY;
    int difX, difY;

    printf("Coordenada X e Y do cavalo: ");
    scanf("%i %i", &corCavaloX, &corCavaloY);
    printf("Coordenada X e Y do peao: ");
    scanf("%i %i", &corPeaoX, &corPeaoY);

    difX = corCavaloX - corPeaoX;
    difY = corCavaloY - corPeaoY;

    if (difX < 0) {
        difX = -difX;
    }
    if (difY < 0) {
        difY = -difY;
    }

    if ((difX == 2 && difY == 1) || (difX == 1 && difY == 2)) {
        printf("O peao está no alcance do cavalo");
    }
    else {
        printf("O peao NAO esta no alcance do cavalo");
    }
    return 0;
}
