int plati_pro_vsechna(int(*predikat)(char), const char *retezec) {
    int i;
    for (i = 0; retezec[i] != '\0'; i++) {
        if (!predikat(retezec[i])) {
            return 0;
        }
    }
    return 1;
}

void serad(int *pole, int delka, int(*komparator)(int, int)) {
    int i, j, temp;
    for (i = 0; i < delka - 1; i++) {
        for (j = delka - 1; j >= i + 1; j--) {
            if (komparator(pole[j], pole[j - 1]) <= -1) {
                temp = pole[j];
                pole[j] = pole[j - 1];
                pole[j - 1] = temp;
            }
        }
    }
}
