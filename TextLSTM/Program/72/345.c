int main () {
    int i = 0, j = 0, m = 0, n = 0, x = 0;
    int b [400], c [400];
    int a [20] [20];
    scanf ("%d%d", &m, &n);
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            scanf ("%d", &a[i][j]);
        }
    }
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            if (i == 0 && j == 0) {
                if (a[0][0] >= a[0][1] && a[0][0] >= a[1][0]) {
                    b[x] = i;
                    c[x] = j;
                    x++;
                }
            }
            if (i == 0 && j == n - 1) {
                if (a[0][n - 1] >= a[0][n - 2] && a[0][n - 1] >= a[1][n - 1]) {
                    b[x] = i;
                    c[x] = j;
                    x++;
                }
            }
            if (i == 0 && j != 0 && j != n - 1) {
                if (a[0][j] >= a[0][j - 1] && a[0][j] >= a[0][j + 1] && a[0][j] >= a[1][j]) {
                    b[x] = i;
                    c[x] = j;
                    x++;
                }
            }
            if (j == 0 && i != 0 && i != m - 1) {
                if (a[i][0] >= a[i - 1][0] && a[i][0] >= a[i + 1][0] && a[i][0] >= a[i][1]) {
                    b[x] = i;
                    c[x] = j;
                    x++;
                }
            }
            if (j == 0 && i == m - 1) {
                if (a[m - 1][0] >= a[m - 2][0] && a[m - 1][0] >= a[m - 1][1]) {
                    b[x] = i;
                    c[x] = j;
                    x++;
                }
            }
            if (i == m - 1 && j != 0 && j != n - 1) {
                if (a[i][j] >= a[i - 1][j] && a[i][j] >= a[i][j - 1] && a[i][j] >= a[i][j + 1]) {
                    b[x] = i;
                    c[x] = j;
                    x++;
                }
            }
            if (i == m - 1 && j == n - 1) {
                if (a[i][j] >= a[i][j - 1] && a[i][j] >= a[i - 1][j]) {
                    b[x] = i;
                    c[x] = j;
                    x++;
                }
            }
            if (j == n - 1 && i != 0 && i != m - 1) {
                if (a[i][j] >= a[i - 1][j] && a[i][j] >= a[i + 1][j] && a[i][j] >= a[i][j - 1]) {
                    b[x] = i;
                    c[x] = j;
                    x++;
                }
            }
            if (i != 0 && j != 0 && i != m - 1 && j != n - 1) {
                if (a[i][j] >= a[i - 1][j] && a[i][j] >= a[i + 1][j] && a[i][j] >= a[i][j - 1] && a[i][j] >= a[i][j + 1]) {
                    b[x] = i;
                    c[x] = j;
                    x++;
                }
            }
        }
    }
    for (i = 0; i < x; i++) {
        printf ("%d %d", b[i], c[i]);
        if (i != x - 1) {
            printf ("\n");
        }
    }
    return 0;
}

