#include <stdlib.h>

double prumer(int matice[][5], int pocet_radku) {
    int i, j, soucet = 0;
    for (i = 0; i < pocet_radku; i++) {
        for (j = 0; j < 5; j++) {
            soucet += matice[i][j];
        }
    }

    return soucet / (pocet_radku * 5.0);
}

int* suma_radku(int prvky[][4], int radku) {
    int i, j, soucet;
    int* suma = (int*)malloc(radku * sizeof(int));
    for (i = 0; i < radku; i++) {
        soucet = 0;
        for (j = 0; j < 4; j++) {
            soucet += prvky[i][j];
        }
        suma[i] = soucet;
    }
    return suma;
}