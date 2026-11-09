//"Suavização de Ruído" – Ler 5 distâncias de um sensor ultrassônico. Substituir qualquer valor discrepante
//(< 0 ou > 1000) pelo valor da posição anterior.
#include <stdio.h>
int main() {
    float sensor[5];

    for (int i = 0; i<5; i++) {
        printf("Sensor %i:  \t", i+1);
        scanf("%f", &sensor[i]);
        if (i>0 && (sensor[i] < 0 || sensor[i] > 1000)) {
            sensor[i] = sensor[i-1];
        }
    }
    for (int i = 0; i<5; i++) {
        printf("Sensor %i: %.2f\n", i+1, sensor[i]);
    }
    return 0;
}