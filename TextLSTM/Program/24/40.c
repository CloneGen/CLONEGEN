int main () {
    char zfc [5000];
    char words [200] [50];
    int k [200];
    gets (zfc);
    int len = strlen (zfc);
    int i, j, w = 0;
    for (i = 0; i < len; i++) {
        if (zfc[i] != ' ' && zfc[i] != ',') {
            for (j = i; zfc[j] != ' ' && zfc[i] != ',' && j < len; j++) {
                words[w][j - i] = zfc[j];
            }
            words[w][j - i] = '\0';
            w++;
            i = j;
        }
    }
    for (i = 0; i < w; i++) {
        k[i] = strlen (words[i]);
    }
    int min = k[0], p = 0;
    for (i = 1; i < w; i++) {
        if (k[i] < min) {
            min = k[i];
            p = i;
        }
    }
    int max = k[0], q = 0;
    for (i = 1; i < w; i++) {
        if (k[i] > max) {
            max = k[i];
            q = i;
        }
    }
    printf ("%s\n", words[q]);
    printf ("%s\n", words[p]);
    return 0;
}

