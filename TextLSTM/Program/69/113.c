main () {
    char a [251], b [251], c [252];
    int m, n, i, t = 0;
    gets (a);
    gets (b);
    m = strlen (a);
    n = strlen (b);
    if (m < n) {
        strcpy (c, a);
        strcpy (a, b);
        strcpy (b, c);
        i = m;
        m = n;
        n = i;
    }
    for (i = 0; i < n; i++) {
        c[i] = (a[m - 1 - i] + b[n - 1 - i] - '0' * 2 + t) % 10 + '0';
        t = (a[m - 1 - i] + b[n - 1 - i] - '0' * 2 + t) / 10;
    }
    for (i = n; i < m; i++) {
        c[i] = (a[m - 1 - i] - '0' + t) % 10 + '0';
        t = (a[m - 1 - i] - '0' + t) / 10;
    }
    if (t) {
        c[i] = 1 + '0';
        i++;
    }
    c[i] = '\0';
    m = strlen (c);
    t = n = 0;
    while (m--) {
        t += *(c + m) - '0';
        if (t) {
            printf ("%c", *(c + m));
            n++;
        }
    }
    if (n == 0)
        printf ("0");
}

