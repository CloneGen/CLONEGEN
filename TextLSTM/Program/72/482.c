void main () {
    int a [20] [20], put [100] [2];
    int m, n, i, j, k = 0;
    scanf ("%d%d", &m, &n);
    for (i = 0; i <= m - 1; i++)
        for (j = 0; j <= n - 1; j++)
            scanf ("%d", &a[i][j]);
    if (a[0][0] >= a[0][1] && a[0][0] >= a[1][0]) {
        put[k][0] = 0;
        put[k][1] = 0;
        k++;
    }
    for (j = 1; j <= n - 2; j++)
        if (a[0][j] >= a[0][j + 1] && a[0][j] >= a[1][j] && a[0][j] >= a[0][j - 1]) {
            put[k][0] = 0;
            put[k][1] = j;
            k++;
        }
    if (a[0][n - 1] >= a[0][n - 2] && a[0][n - 1] >= a[1][n - 1]) {
        put[k][0] = 0;
        put[k][1] = n - 1;
        k++;
    }
    for (i = 1; i <= m - 2; i++) {
        if (a[i][0] >= a[i][1] && a[i][0] >= a[i - 1][0] && a[i][0] >= a[i + 1][0]) {
            put[k][0] = i;
            put[k][1] = 0;
            k++;
        }
        for (j = 1; j <= n - 2; j++) {
            if (a[i][j] >= a[i - 1][j] && a[i][j] >= a[i][j - 1] && a[i][j] >= a[i + 1][j] && a[i][j] >= a[i][j + 1]) {
                put[k][0] = i;
                put[k][1] = j;
                k++;
            }
        }
        if (a[i][n - 1] >= a[i][n - 2] && a[i][n - 1] >= a[i - 1][n - 1] && a[i][n - 1] >= a[i + 1][n - 1]) {
            put[k][0] = i;
            put[k][1] = n - 1;
            k++;
        }
    }
    if (a[m - 1][0] >= a[m - 1][1] && a[m - 1][0] >= a[m - 2][0]) {
        put[k][0] = m - 1;
        put[k][1] = 0;
        k++;
    }
    for (j = 1; j <= n - 2; j++)
        if (a[m - 1][j] >= a[m - 1][j + 1] && a[m - 1][j] >= a[m - 2][j] && a[m - 1][j] >= a[m - 1][j - 1]) {
            put[k][0] = m - 1;
            put[k][1] = j;
            k++;
        }
    if (a[m - 1][n - 1] >= a[m - 1][n - 2] && a[m - 1][n - 1] >= a[m - 2][n - 1]) {
        put[k][0] = m - 1;
        put[k][1] = n - 1;
        k++;
    }
    for (i = 0; i <= k - 1; i++)
        printf ("%d %d\n", put[i][0], put[i][1]);
}

