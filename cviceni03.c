#include <stdlib.h>
#include <stdio.h>
#include <string.h>

double **soucet_matic(int radky, int sloupce, double **A, double **B) {
    double** matice = (double**) malloc(sizeof(double*) * radky);
    int i, j;
    for (i = 0; i < radky; i++) {
        matice[i] = (double*) malloc(sizeof(double) * sloupce);
        for (j = 0; j < sloupce; j++) {
            matice[i][j] = A[i][j] + B[i][j];
        }
    }
    return matice;
}

char** casti_abecedy(int* delky, int pocet) {
    char** retezce = (char**)malloc(sizeof(char*) * pocet);
    int i, j;
    for (i = 0; i < pocet; i++) {
        retezce[i] = (char*)malloc(sizeof(char) * (delky[i] + 1));
        for (j = 0; j < delky[i]; j++) {
            retezce[i][j] = 'a' + j;
        }
        retezce[i][j] = '\0';
    }
    return retezce;
}

char** prolom_sifru(const char* text) {
    int length = strlen(text);
    char** opentexts = (char**) malloc(sizeof(char*) * 26);
    char character;
    for (int i = 0; i < 26; ++i) {
        opentexts[i] = (char*) malloc(length + 1);
        opentexts[i][length] = 0;
    }

    for (int i = 0; i < 26; ++i)
    {
        for (int j = 0; j < length; ++j)
        {
            character = text[j] - i;
            opentexts[i][j] = character >= 'A' ? character : character + 26;
        }
    }

    return opentexts;
}
