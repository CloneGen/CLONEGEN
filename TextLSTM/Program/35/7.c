void main () {
    int a [8] [8], b [8], c [8], i, j, m, n, k, l = 0, s;
    scanf ("%d,%d", &m, &n);
    for (i = 0; i < m; i++)
        for (j = 0; j < n; j++)
            scanf ("%d", &a[i][j]);
    for (i = 0; i < m; i++) {
        b[i] = a[i][0];
        c[i] = 0;
        k = 1;
        for (j = 0; j < n; j++) {
            if (b[i] < a[i][j]) {
                b[i] = a[i][j];
                c[i] = j;
            }
        }
        s = c[i];
        for (j = 0; j < m; j++)
            if (b[i] < a[j][s])
                k++;
        if (k == m) {
            printf ("%d+%d", i, c[i]);
            l++;
        }
    }
    if (l == 0)
        printf ("No");
}

