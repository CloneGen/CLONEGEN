int main () {
    int m, n;
    int i, j;
    int a [20] [20];
    scanf ("%d%d", &m, &n);
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            scanf ("%d", &a[i][j]);
        }
    }
    for (i = 0; i < m; i++) {
        if (i == 0) {
            if (a[0][0] >= a[0][1] && a[0][0] >= a[1][0])
                printf ("0 0\n");
            for (j = 1; j < n - 1; j++) {
                if (a[0][j] >= a[0][j - 1] && a[0][j] >= a[0][j + 1] && a[0][j] >= a[1][j]) {
                    printf ("0 %d\n", j);
                }
            }
            if (a[0][n - 1] >= a[0][n - 2] && a[0][n - 1] >= a[1][n - 1]) {
                printf ("0 %d\n", n - 1);
            }
        }
        if (i > 0 && i < m - 1) {
            for (i = 1; i < m - 1; i++) {
                if (a[i][0] >= a[i - 1][0] && a[i][0] >= a[i + 1][0] && a[i][0] >= a[i][1]) {
                    printf ("%d 0\n", i);
                }
                for (j = 1; j < n - 1; j++) {
                    if (a[i][j] >= a[i - 1][j] && a[i][j] >= a[i + 1][j] && a[i][j] >= a[i][j - 1] && a[i][j] >= a[i][j + 1]) {
                        printf ("%d %d\n", i, j);
                    }
                }
                if (a[i][n - 1] >= a[i - 1][n - 1] && a[i][n - 1] >= a[i + 1][n - 1] && a[i][n - 1] >= a[i][n - 2]) {
                    printf ("%d %d\n", i, n - 1);
                }
            }
        }
        if (i == m - 1) {
            if (a[m - 1][0] >= a[m - 1][1] && a[m - 1][0] >= a[m - 2][0])
                printf ("%d 0\n", m - 1);
            for (j = 1; j < n - 1; j++) {
                if (a[m - 1][j] >= a[m - 1][j - 1] && a[m - 1][j] >= a[m - 1][j + 1] && a[m - 1][j] >= a[m - 2][j]) {
                    printf ("%d %d\n", m - 1, j);
                }
            }
            if (a[m - 1][n - 1] >= a[m - 1][n - 2] && a[m - 1][n - 1] >= a[m - 2][n - 1]) {
                printf ("%d %d\n", m - 1, n - 1);
            }
        }
    }
    return 0;
}

