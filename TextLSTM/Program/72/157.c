int main () {
    int a [20] [20], m, n, i, j, b [400] [2], k = 0;
    scanf ("%d%d", &m, &n);
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++)
            scanf ("%d", &a[i][j]);
    }
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            if (i != 0 && j != 0 && i != m - 1 && j != n - 1) {
                if (a[i][j] >= a[i + 1][j] && a[i][j] >= a[i - 1][j] && a[i][j] >= a[i][j + 1] && a[i][j] >= a[i][j - 1]) {
                    b[k][0] = i;
                    b[k][1] = j;
                    k += 1;
                    continue;
                }
            }
            if (i == 0) {
                if (j == 0) {
                    if (a[i][j] >= a[i][j + 1] && a[i][j] >= a[i + 1][j]) {
                        b[k][0] = i;
                        b[k][1] = j;
                        k += 1;
                        continue;
                    }
                }
                else if (j == n - 1) {
                    if (a[i][j] >= a[i][j - 1] && a[i][j] >= a[i + 1][j]) {
                        b[k][0] = i;
                        b[k][1] = j;
                        k += 1;
                        continue;
                    }
                }
                else {
                    if (a[i][j] >= a[i][j + 1] && a[i][j] >= a[i][j - 1] && a[i][j] >= a[i + 1][j]) {
                        b[k][0] = i;
                        b[k][1] = j;
                        k += 1;
                        continue;
                    }
                }
            }
            if (i == m - 1) {
                if (j == 0) {
                    if (a[i][j] >= a[i][j + 1] && a[i][j] >= a[i - 1][j]) {
                        b[k][0] = i;
                        b[k][1] = j;
                        k += 1;
                        continue;
                    }
                }
                else if (j == n - 1) {
                    if (a[i][j] >= a[i][j - 1] && a[i][j] >= a[i - 1][j]) {
                        b[k][0] = i;
                        b[k][1] = j;
                        k += 1;
                        continue;
                    }
                }
                else {
                    if (a[i][j] >= a[i][j + 1] && a[i][j] >= a[i][j - 1] && a[i][j] >= a[i - 1][j]) {
                        b[k][0] = i;
                        b[k][1] = j;
                        k += 1;
                        continue;
                    }
                }
            }
            if (j == 0) {
                if (a[i][j] >= a[i][j + 1] && a[i][j] >= a[i + 1][j] && a[i][j] >= a[i - 1][j]) {
                    b[k][0] = i;
                    b[k][1] = j;
                    k += 1;
                    continue;
                }
            }
            if (j == n - 1) {
                if (a[i][j] >= a[i][j - 1] && a[i][j] >= a[i + 1][j] && a[i][j] >= a[i - 1][j]) {
                    b[k][0] = i;
                    b[k][1] = j;
                    k += 1;
                }
            }
        }
    }
    for (i = 0; i < k; i++)
        printf ("%d %d\n", b[i][0], b[i][1]);
    return 0;
}

