int main () {
    int t = 0, i = 0, j = 0, k = 0, l = 0, *n, m = 0;
    char **p, a;
    n = (int *) malloc (26 * sizeof (int));
    scanf ("%d", &t);
    a = getchar ();
    p = (char **) malloc (100 * sizeof (char *));
    for (i = 0; i < t; i++) {
        for (k = 0; k < 26; k++) {
            *(n + k) = -1;
        }
        *(p + i) = (char *) malloc (100000 * sizeof (char));
        gets (*(p + i));
        l = strlen (*(p + i));
        for (j = 0; j < l; j++) {
            for (k = 0; k < 26; k++) {
                if (*(*(p + i) + j) == (97 + k)) {
                    if (*(n + k) == -1) {
                        *(n + k) = j;
                    }
                    else if (*(n + k) != -1) {
                        *(n + k) = -2;
                    }
                }
            }
        }
        m = l;
        for (k = 0; k < 26; k++) {
            if ((*(n + k) < m) && (*(n + k) != -1) && (*(n + k) != -2)) {
                m = *(n + k);
            }
        }
        if (m != l)
            printf ("%c\n", *(*(p + i) + m));
        else
            printf ("no\n");
    }
    return 0;
}

