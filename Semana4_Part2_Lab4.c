//4) Faça um programa para interpretar operações em conjuntos de números inteiros. As operações que devem
//ser implementadas são interseção e união. O usuário deve informar a expressão como um comando no terminal,
//sendo que ele usará a letra u para união e a letra i para intersecção. O programa deve ter suporte para 3
//vetores (A, B, e C) de 5 valores cada. Exemplos de expressão:
//
// AuB
// AiC
// AuBiC
// AiAuB
//
// *os conjuntos internamente podem ter elementos repetidos. Os resultados das operações não podem ter repetições


#include <stdio.h>
#include <string.h>

int main(void) {
    int A[5] = {1, 2, 3, 4, 5};
    int B[5] = {4, 5, 6, 7, 8};
    int C[5] = {9, 10, 11, 12, 12};

    char exp[200];
    int R[15], aux[15], atual[5];
    int rLen = 0, tLen = 0;
    int i, j, k, achou, len, valido;
    char letra, op;

    do {
        printf("Digite a expressao (ex: AuB, AiC, AuBiC...): \n");
        scanf("%s", exp);
        len = strlen(exp);

        valido = 1;

        if (len % 2 == 0) {
            valido = 0;
        }

        for (i = 0; i < len && valido; i++) {
            if (i % 2 == 0) {
                if (exp[i] != 'A' && exp[i] != 'B' && exp[i] != 'C') {
                    valido = 0;
                }
            } else {
                if (exp[i] != 'u' && exp[i] != 'i') {
                    valido = 0;
                }
            }
        }

        if (valido == 0) {
            printf("expressao invalida, tem que comecar e terminar em A, B ou C. tenta de novo\n");
        }

    } while (valido == 0);

    letra = exp[0];
    if (letra == 'A') {
        for (j = 0; j < 5; j++) atual[j] = A[j];
    } else if (letra == 'B') {
        for (j = 0; j < 5; j++) atual[j] = B[j];
    } else {
        for (j = 0; j < 5; j++) atual[j] = C[j];
    }

    for (j = 0; j < 5; j++) {
        achou = 0;
        for (k = 0; k < rLen; k++) {
            if (R[k] == atual[j]) {
                achou = 1;
                break;
            }
        }
        if (achou == 0) {
            R[rLen] = atual[j];
            rLen++;
        }
    }

    for (i = 1; i < len; i = i + 2) {
        op = exp[i];
        letra = exp[i + 1];

        if (letra == 'A') {
            for (j = 0; j < 5; j++) atual[j] = A[j];
        } else if (letra == 'B') {
            for (j = 0; j < 5; j++) atual[j] = B[j];
        } else {
            for (j = 0; j < 5; j++) atual[j] = C[j];
        }

        tLen = 0;

        if (op == 'u') {
            for (k = 0; k < rLen; k++) {
                aux[tLen] = R[k];
                tLen++;
            }
            for (j = 0; j < 5; j++) {
                achou = 0;
                for (k = 0; k < tLen; k++) {
                    if (aux[k] == atual[j]) {
                        achou = 1;
                        break;
                    }
                }
                if (achou == 0) {
                    aux[tLen] = atual[j];
                    tLen++;
                }
            }
        } else {
            for (k = 0; k < rLen; k++) {
                achou = 0;
                for (j = 0; j < 5; j++) {
                    if (R[k] == atual[j]) {
                        achou = 1;
                        break;
                    }
                }
                if (achou == 1) {
                    aux[tLen] = R[k];
                    tLen++;
                }
            }
        }

        rLen = tLen;
        for (k = 0; k < rLen; k++) {
            R[k] = aux[k];
        }
    }

    printf("Resultado: { ");
    for (k = 0; k < rLen; k++) {
        printf("%d ", R[k]);
    }
    printf("}\n");

    return 0;
}
