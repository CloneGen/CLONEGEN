void main () {
    char a [260], b [260], c [260];
    int m, i, n;
    gets (a);
    gets (b);
    m = strlen (a) - strlen (b);
    if (m > 0) {
        for (i = strlen (b); i >= 0; i--)
            b[i + m] = b[i];
        for (i = m - 1; i >= 0; i--)
            b[i] = 48;
    }
    if (m < 0) {
        for (i = strlen (a); i >= 0; i--)
            a[i - m] = a[i];
        for (i = -m - 1; i >= 0; i--)
            a[i] = 48;
    }
    n = strlen (a);
    for (i = 0; i < n; i++)
        c[i] = 48;
    c[n] = '\0';
    for (i = n - 1; i > 0; i--) {
        c[i] = c[i] + a[i] + b[i] - 96;
        if (c[i] > 57) {
            c[i] = c[i] - 10;
            c[i - 1]++;
        }
    }
    c[0] = c[0] + a[0] + b[0] - 96;
    if (c[0] > 57) {
        c[0] = c[0] - 10;
        for (i = n; i >= 0; i--)
            c[i + 1] = c[i];
        c[0] = 49;
    }
    while (c[0] == 48) {
        for (i = 0; i <= strlen (c); i++)
            c[i] = c[i + 1];
    }
    if (c[0] == '\0')
        printf ("0");
    else
        printf ("%s", c);
}

