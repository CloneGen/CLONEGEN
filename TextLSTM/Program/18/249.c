void main () {
    int n, a [100] [100], m, i, j, k, x, p, q, s = 0;
    scanf ("%d", &n);
    m = n;
    for (k = 0; k < m; k++) {
        for (i = 0; i < m; i++)
            for (j = 0; j < m; j++)
                scanf ("%d", &a[i][j]);
        for (p = 1; p < m; p++) {
            for (i = 0; i < n; i++) {
                x = a[i][0];
                for (j = 0; j < n; j++)
                    if (a[i][j] < x)
                        x = a[i][j];
                if (x != 0)
                    for (j = 0; j < n; j++)
                        a[i][j] = a[i][j] - x;
            }
            for (j = 0; j < n; j++) {
                x = a[0][j];
                for (i = 0; i < n; i++)
                    if (a[i][j] < x)
                        x = a[i][j];
                if (x != 0)
                    for (i = 0; i < n; i++)
                        a[i][j] = a[i][j] - x;
            }
            s = s + a[1][1];
            for (i = 2; i < n; i++) {
                a[i - 1][0] = a[i][0];
                a[0][i - 1] = a[0][i];
            }
            for (i = 2; i < n; i++)
                for (j = 2; j < n; j++) {
                    a[i - 1][j - 1] = a[i][j];
                }
            n--;
        }
        printf ("%d\n", s);
        s = 0;
        n = m;
    }
}

