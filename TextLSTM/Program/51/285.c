main () {
    char a [501];
    int n, i, j, k = 0, b [250], t, s = 0;
    scanf ("%d", &n);
    scanf ("%s", a);
    char c [strlen (a) - n + 1] [n + 1], d [n + 1];
    d[n] = 0;
    for (i = 0; i <= strlen (a) - n; i++) {
        for (j = i; j < n + i; j++)
            d[j - i] = a[j];
        for (j = 0; j < k; j++) {
            if (strcmp (c[j], d) == 0) {
                b[j]++;
                break;
            }
        }
        if (j == k) {
            strcpy (c[k], d);
            b[k] = 1;
            k++;
        }
    }
    t = b[0];
    for (i = 1; i < k; i++) {
        if (b[i] > t)
            t = b[i];
    }
    if (t == 1)
        printf ("NO");
    else {
        printf ("%d\n", t);
        for (i = 0; i < k; i++) {
            if (b[i] == t)
                printf ("%s\n", c[i]);
        }
    }
}

