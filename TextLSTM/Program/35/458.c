main () {
    int s [8] [8], i, j, k, l, m, n, a, b, c = 0;
    scanf ("%d,%d", &m, &n);
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++)
            scanf ("%d", &s[i][j]);
    }
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            a = 0;
            b = 0;
            for (k = 0; k < m; k++) {
                if (s[i][j] < s[k][j] && i != k)
                    a++;
            }
            for (l = 0; l < n; l++) {
                if (s[i][j] > s[i][l] && j != l)
                    b++;
            }
            if ((a == m - 1) && (b == n - 1)) {
                printf ("%d+%d", i, j);
                c++;
            }
        }
    }
    if (c == 0)
        printf ("No");
}

