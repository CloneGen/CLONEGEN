main () {
    char s [100], a [100] = {0};
    int d;
    int l, m, r, i, j, k;
    gets (s);
    l = strlen (s);
    if (l == 1) {
        printf ("0\n");
        puts (s);
    }
    if ((l == 2) && (s[0] == '1')) {
        r = (s[0] - '0') * 10 + s[1] - '0';
        printf ("%d\n", r / 13);
        printf ("%d", r % 13);
    }
    if ((l == 2) && (s[0] != '1')) {
        r = (s[0] - '0') * 10 + s[1] - '0';
        printf ("%d\n", r / 13);
        printf ("%d", r % 13);
    }
    if (l >= 3) {
        for (i = 0; i < l; i++)
            s[i] = s[i] - '0';
        for (i = 0; i < l - 1; i++) {
            r = s[i] * 10 + s[i + 1];
            if (i < l - 2) {
                if (r >= 13) {
                    a[i] = r / 13;
                    s[i + 1] = r % 13;
                }
                else {
                    a[i] = 0;
                    s[i + 1] = s[i] * 10 + s[i + 1];
                }
            }
            else {
                if (r >= 13) {
                    a[i] = r / 13;
                    k = r % 13;
                }
                else {
                    a[i] = 0;
                    k = r;
                }
            }
        }
        if (a[0] != 0)
            for (i = 0; i < l - 1; i++)
                printf ("%d", a[i]);
        else
            for (i = 1; i < l - 1; i++)
                printf ("%d", a[i]);
        printf ("\n");
        printf ("%d", k);
    }
}

