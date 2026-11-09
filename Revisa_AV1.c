//
// Created by Eduardo Reis on 03/10/2026.
//
#include <stdio.h>
/*
void mesclarOrdenado(int n, int v1[], int v2[], int v3[]) {
    for (int i=0, j=0, k=0; i<2*n; i++) {
        if (j<n && (k >= n || v1[j] <= v2[k])) {
            v3[i] = v1[j];
            j++;
        }
        else if (v1[j] >= v2[k]) {
            v3[i] = v2[k];
            k++;
        }
    }
}

int main () {
    int v1[] = {1, 3, 5, 6, 8};
    int v2[] = {2, 5, 7, 8, 9};
    int n = sizeof(v1)/sizeof(v1[0]);
    int v3[2*n];
    mesclarOrdenado(n,v1, v2, v3);

    for (int l=0; l < 2*n;l++) {
        printf("%d ", v3[l]);
    }
    return 0;
}
*/
/*
#define  MAX 10
void multiplicaMatrizes(int A[MAX][MAX], int B[MAX][MAX], int C[MAX][MAX], int n, int m, int p) {
    int i, j, k;
    for (i = 0; i < n; i++) {
        for (j = 0; j < p; j++) {
            C[i][j] = 0;
            for (k=0 ; k < m; k++) {
                C[i][j] += A[k][j] * B[k][j];
            }
        }
    }

}
*/
/*
int main() {
    char frase[2049];
    char palavra [100][101];
    printf("Digite uma frase: ");
    scanf(" %[^\n]", frase);

    int p = 0, l = 0, d = 0;

    for (int i = 0; frase[i] != '\0'; i++) {
        if (frase[i] != ' ' && frase[i] != ',' && frase[i] != '.' && frase[i] != ';') {
            palavra[p][l] = frase[i];
            l++;
        }
        else if (l>0) {
            palavra[p][l] = '\0';
            p++;
            l=0;
        }
    }

    for (int i=0; i<p; i++) {
        printf("Palava %d: %s\n", i+1, palavra[i]);
    }


    return 0;
}

*/
// "Engine de Validação Heurística de Movimentos no Xadrez" – Ler as coordenadas Cartesianas numéricas
// (X, Y) de uma peça Cavalo e de uma peça Peão em um tabuleiro 8x8. Sem utilizar laços de repetição ou
// bibliotecas externas, aplicar exclusivamente expressões lógicas condicionais baseadas nas regras geométricas
// do movimento do Cavalo (diferença absoluta de 2 unidades em um eixo e 1 unidade no outro) para determinar se
// a peça Peão está sob alcance direto de ataque no próximo turno.
#include <stdio.h>
#include <string.h>
/*
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
*/
//Escreva um programa em C que leia uma frase (string) e separa as palavras contidas nela[1].
//A frase pode conter até 2048 caracteres, e cada palavra possui tamanho máximo de 100 caracteres[1].
//Na frase, as palavras estão separadas por espaço em branco, ponto e vírgula e ponto fina

int separadorPalavra(char caractere) {
        if (caractere == ' ' || caractere == '.' || caractere == ',' || caractere == ';') {
            return 1;
        }
    } else {
        return 0;
}

void separarPalavras(char frase[]) {
    char palavra[100];
    int j = 0;
    for (int i = 0; frase[i] != '\0'; i++) {
        if (separadorPalavra(frase[i]) == 1) {
            palavra[j] = '\0';
            printf("%s\n", palavra);
            j = 0;
        } else {
            palavra[j] = frase[i];
            j++;
        }
    }
    palavra[j] = '\0';
    printf("%s\n", palavra);
}