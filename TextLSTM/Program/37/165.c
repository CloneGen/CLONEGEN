main () {
    int t, i;
    scanf ("%d\n", &t);
    for (i = 1; i <= t; i++) {
        int l, j, k, m;
        char a [100000];
        gets (a);
        l = strlen (a);
        for (j = 0; j < l; j++) {
            m = 0;
            for (k = 0; k < j; k++) {
                if (a[j] == a[k]) {
                    m = 1;
                    break;
                }
            }
            if (m == 0) {
                for (k = j + 1; k < l; k++) {
                    if (a[j] == a[k]) {
                        m = 1;
                        break;
                    }
                }
            }
            if (m == 0 && i != t) {
                printf ("%c\n", a[j]);
                break;
            }
            if (m == 0 && i == t) {
                printf ("%c", a[j]);
                break;
            }
        }
        if (m == 1 && i != t)
            printf ("no\n");
        if (m == 1 && i == t)
            printf ("no");
    }
    getchar ();
    getchar ();
}

