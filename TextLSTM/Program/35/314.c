int main () {
    int n, m, s1 [8] [8], s2 [8] [8], h [8] [8], l [8] [8], i, j, k, e;
    scanf ("%d,%d", &n, &m);
    for (i = 0; i < n; i++) {
        for (j = 0; j < m; j++) {
            scanf ("%d", &s1[i][j]);
            s2[i][j] = s1[i][j];
            h[i][j] = i;
            l[i][j] = j;
        }
    }
    for (i = 0; i < n; i++) {
        for (j = 1; j <= m; j++) {
            for (k = 0; k < m - j; k++) {
                if (s1[i][k] > s1[i][k + 1]) {
                    e = s1[i][k];
                    s1[i][k] = s1[i][k + 1];
                    s1[i][k + 1] = e;
                    e = h[i][k];
                    h[i][k] = h[i][k + 1];
                    h[i][k + 1] = e;
                }
            }
        }
    }
    for (j = 0; j < m; j++) {
        for (i = 1; i <= n; i++) {
            for (k = 0; k < n - i; k++) {
                if (s2[k][j] > s2[k + 1][j]) {
                    e = s2[k][j];
                    s2[k][j] = s2[k + 1][j];
                    s2[k + 1][j] = e;
                    e = l[k][j];
                    l[k][j] = l[k + 1][j];
                    l[k + 1][j] = e;
                }
            }
        }
    }
    e = 0;
    for (i = 0; i < n; i++) {
        for (j = 0; j < m; j++) {
            if (s2[0][j] == s1[i][m - 1]) {
                e++;
                printf ("%d+%d\n", h[i][m - 1], l[0][j]);
            }
        }
    }
    if (e == 0)
        printf ("No\n");
    return 0;
}

