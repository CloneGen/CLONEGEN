int main () {
    int a, b, c, n, i, m, j, sz [100] [100];
    scanf ("%d%d", &m, &n);
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            scanf ("%d", &(sz[i][j]));
        }
    }
    c = 0;
    for (i = 0; c < n * m; i++) {
        a = i % 4;
        b = i / 4;
        if (a == 0) {
            for (j = b; j < n - b; j++) {
                printf ("%d\n", sz[b][j]);
                c = c + 1;
            }
        }
        if (a == 1) {
            for (j = b + 1; j < m - b; j++) {
                printf ("%d\n", sz[j][n - 1 - b]);
                c = c + 1;
            }
        }
        if (a == 2) {
            for (j = n - 2 - b; j >= b; j--) {
                printf ("%d\n", sz[m - 1 - b][j]);
                c = c + 1;
            }
        }
        if (a == 3) {
            for (j = m - 2 - b; j > b; j--) {
                printf ("%d\n", sz[j][b]);
                c = c + 1;
            }
        }
    }
    return 0;
}

