main () {
    int n, i, j, k;
    char words [33];
    scanf ("%d", &n);
    for (i = 0; i < n; i++) {
        for (j = 0; j < 33; j++)
            words[j] = '\0';
        scanf ("%s", words);
        k = strlen (words);
        if (k > 2) {
            if (words[k - 1] == 'g') {
                if (words[k - 2] == 'n') {
                    if (words[k - 3] == 'i') {
                        for (j = 1; j < 4; j++)
                            words[k - j] = '\0';
                    }
                }
            }
        }
        if (k > 1) {
            if (words[k - 1] == 'r') {
                if (words[k - 2] == 'e') {
                    for (j = 1; j < 3; j++)
                        words[k - j] = '\0';
                }
            }
        }
        if (k > 1) {
            if (words[k - 1] == 'y') {
                if (words[k - 2] == 'l') {
                    for (j = 1; j < 3; j++)
                        words[k - j] = '\0';
                }
            }
        }
        printf ("%s\n", words);
    }
}

