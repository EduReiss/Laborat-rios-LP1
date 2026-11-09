//Um labirinto qualquer pode ser representado em termos de espaços em branco e *. As paredes são
//representadas com * e os espaços em branco como caminho. Existe ainda uma marcação da posição inicial
//com a letra E e da saída com a letra S. Considere ainda que o labirinto pode ser de qualquer tamanho e que
//os movimentos só podem ser realizados para a casa adjacente, a 1 casa de  distância (8 direções).
//Obs: não pode andar por fora ;)
/*Ex: Labirinto 10x10
*********S
*   *    *
* * * ** *
* *   *  *
* *** ** *
*   *    *
*** * ** *
*   *    *
* *** ****
E********


Dado este labirinto, implemente:
a) um função, interativa, para encontrar um caminho da entrada até a saída.
No fim, a função deve imprimir as posições do caminho.*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int acha(char **mapa, int n, int k, int l, int c, int *caminhoL, int *caminhoC, int *contador)
{
    int dl[8] = {-1, -1, -1, 0, 0, 1, 1, 1};
    int dc[8] = {-1, 0, 1, -1, 1, -1, 0, 1};
    int d, nl, nc;
    char antes;

    caminhoL[*contador] = l;
    caminhoC[*contador] = c;
    (*contador)++;

    if (mapa[l][c] == 'S') {
        return 1;
    }

    antes = mapa[l][c];
    mapa[l][c] = '.';

    for (d = 0; d < 8; d++) {
        nl = l + dl[d];
        nc = c + dc[d];
        if (nl >= 0 && nl < n && nc >= 0 && nc < k) {
            if (mapa[nl][nc] == ' ' || mapa[nl][nc] == 'S') {
                if (acha(mapa, n, k, nl, nc, caminhoL, caminhoC, contador)) {
                    return 1;
                }
            }
        }
    }

    mapa[l][c] = antes;
    (*contador)--;
    return 0;
}

int main(void)
{
    int n, k, i, j, el, ec, contador = 0;
    char **mapa;
    int *caminhoL, *caminhoC;

    printf("Digite o numero de linhas e colunas: ");
    scanf("%d %d", &n, &k);
    getchar();

    mapa = malloc(n * sizeof(char *));
    for (i = 0; i < n; i++) {
        mapa[i] = malloc((k + 2) * sizeof(char));
    }

    printf("Digite o labirinto:\n");
    for (i = 0; i < n; i++) {
        fgets(mapa[i], k + 2, stdin);
        mapa[i][strcspn(mapa[i], "\n")] = '\0';
    }

    el = -1;
    ec = -1;
    for (i = 0; i < n; i++) {
        for (j = 0; j < k; j++) {
            if (mapa[i][j] == 'E') {
                el = i;
                ec = j;
            }
        }
    }

    if (el == -1) {
        printf("Nao achei a entrada E\n");
    } else {
        caminhoL = malloc(n * k * sizeof(int));
        caminhoC = malloc(n * k * sizeof(int));

        if (acha(mapa, n, k, el, ec, caminhoL, caminhoC, &contador)) {
            printf("Caminho:\n");
            for (i = 0; i < contador; i++) {
                printf("(%d, %d)\n", caminhoL[i], caminhoC[i]);
            }
        } else {
            printf("Nao existe caminho\n");
        }

        free(caminhoL);
        free(caminhoC);
    }

    for (i = 0; i < n; i++) {
        free(mapa[i]);
    }
    free(mapa);

    return 0;
}