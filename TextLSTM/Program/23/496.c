main () {
    char a [100], *b, c = 1;
    int i, j, n;
    gets (a);
    n = strlen (a);
    char *p = &a[n - 1], *q = &a[n - 1];
    for (i = 0; i <= n - 1, a[i] != '\0'; i++) {
        if (a[i] == ' ')
            c = c + 1;
    }
    if (c != 1) {
        for (; p >= &a[0]; p--) {
            if (*p == ' ') {
                b = p;
                for (; p <= q; p++) {
                    if (*p != ' ')
                        printf ("%c", *p);
                }
                printf (" ");
                p = b - 1;
                q = b - 1;
            }
        }
        for (p = &a[0]; *p != ' '; p++) {
            printf ("%c", *p);
        }
    }
    else
        puts (a);
}

