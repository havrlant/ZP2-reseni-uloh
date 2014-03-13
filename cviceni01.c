int soucet_mocnin(int cislo) {
    int soucet = 0, zbytek;

    while (cislo > 0) {
        zbytek = cislo % 10;
        soucet += zbytek * zbytek;
        cislo /= 10;
    }

    return soucet;
}

int terminator_posloupnosti(int x) {
    int soucet;

    if (x == 1 || x == 89) {
        return x;
    } 

    return terminator_posloupnosti(soucet_mocnin(x));
}

int puleni(int cisla[], int a, int b, int hledane) {
    int stred = (a + b) / 2;
    if (cisla[stred] == hledane) 
        return stred;
    if (a == b) 
        return -1;
    if (cisla[stred] > hledane)
        return puleni(cisla, a, stred, hledane);
    else
        return puleni(cisla, stred + 1, b, hledane);
}