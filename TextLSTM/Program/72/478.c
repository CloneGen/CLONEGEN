void main () {
    int a [21] [21] = {0};
    int i, j, m, n;
    scanf ("%d%d", &m, &n);
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++)
            scanf ("%d", &a[i][j]);
    }
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            if (i == 0 && j == 0) {
                if ((a[i][j] >= a[i + 1][j]) && (a[i][j] >= a[i][j + 1]))
                    printf ("%d %d\n", i, j);
            }
            else if (i == 0) {
                if ((a[i][j] >= a[i + 1][j]) && (a[i][j] >= a[i][j - 1]) && (a[i][j] >= a[i][j + 1]))
                    printf ("%d %d\n", i, j);
            }
            else if (j == 0) {
                if ((a[i][j] >= a[i - 1][j]) && (a[i][j] >= a[i + 1][j]) && (a[i][j] >= a[i][j + 1]))
                    printf ("%d %d\n", i, j);
            }
            else {
                if ((a[i][j] >= a[i - 1][j]) && (a[i][j] >= a[i + 1][j]) && (a[i][j] >= a[i][j - 1]) && (a[i][j] >= a[i][j + 1]))
                    printf ("%d %d\n", i, j);
            }
        }
    }
}

