void main () {
    int x1, x2, k, m, i, j;
    char c [100], c1 [100];
    gets (c);
    k = strlen (c);
    x1 = k;
    m = 0;
    for (i = k - 1; i >= 0; i--) {
        if (c[i] == ' ') {
            x2 = i;
            for (j = 0; j < x1 - x2 - 1; j++)
                c1[j + m] = c[j + x2 + 1];
            c1[x1 - x2 + m - 1] = ' ';
            m = m + x1 - x2;
            x1 = x2;
        }
    }
    if (i < 0)
        for (j = 0; j < x1; j++)
            c1[k - x1 + j] = c[j];
    for (i = 0; i < k; i++)
        printf ("%c", c1[i]);
}

