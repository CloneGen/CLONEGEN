void main () {
    int a [30] [30], i, j, k, m, n, t;
    scanf ("%d", &t);
    for (i = 1; i <= t; i++) {
        scanf ("%d%d", &m, &n);
        for (j = 0; j <= n; j++)
            for (k = 0; k <= m; k++)
                a[j][k] = 0;
        for (j = 1; j <= n; j++) {
            a[j][0] = 1;
            a[j][1] = 1;
        }
        for (j = 1; j <= m; j++) {
            a[1][j] = 1;
            a[0][j] = 1;
        }
        for (j = 2; j <= n; j++)
            for (k = 2; k <= m; k++)
                if (k >= j)
                    a[j][k] = a[j - 1][k] + a[j][k - j];
                else
                    a[j][k] = a[j - 1][k];
        printf ("%d\n", a[n][m]);
    }
}

