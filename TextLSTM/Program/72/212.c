main () {
    int m, n, i, j, k = 0;
    int di [20] [20], ding [400] [2];
    scanf ("%d%d", &m, &n);
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++)
            scanf ("%d", &di[i][j]);
    }
    if (di[0][0] >= di[1][0] && di[0][0] >= di[0][1]) {
        ding[k][0] = 0;
        ding[k][1] = 0;
        k++;
    }
    for (j = 1; j < n - 1; j++) {
        if (di[0][j] >= di[0][j - 1] && di[0][j] >= di[0][j + 1] && di[0][j] >= di[1][j]) {
            ding[k][0] = 0;
            ding[k][1] = j;
            k++;
        }
    }
    if (di[0][n - 1] >= di[0][n - 2] && di[0][n - 1] >= di[1][n - 1]) {
        ding[k][0] = 0;
        ding[k][1] = n - 1;
        k++;
    }
    for (i = 1; i < m - 1; i++) {
        if (di[i][0] >= di[i - 1][0] && di[i][0] >= di[i][1] && di[i][0] >= di[i + 1][0]) {
            ding[k][0] = i;
            ding[k][1] = 0;
            k++;
        }
        for (j = 1; j < n - 1; j++) {
            if (di[i][j] >= di[i][j - 1] && di[i][j] >= di[i][j + 1] && di[i][j] >= di[i + 1][j] && di[i][j] >= di[i - 1][j]) {
                ding[k][0] = i;
                ding[k][1] = j;
                k++;
            }
        }
        if (di[i][n - 1] >= di[i][n - 2] && di[i][n - 1] >= di[i + 1][n - 1] && di[i][n - 1] >= di[i - 1][n - 1]) {
            ding[k][0] = i;
            ding[k][1] = n - 1;
            k++;
        }
    }
    if (di[m - 1][0] >= di[m - 2][0] && di[m - 1][0] >= di[m - 1][1]) {
        ding[k][0] = m - 1;
        ding[k][1] = 0;
        k++;
    }
    for (j = 1; j < n - 1; j++) {
        if (di[m - 1][j] >= di[m - 1][j - 1] && di[m - 1][j] >= di[m - 1][j + 1] && di[m - 1][j] >= di[m - 2][j]) {
            ding[k][0] = m - 1;
            ding[k][1] = j;
            k++;
        }
    }
    if (di[m - 1][n - 1] >= di[m - 1][n - 2] && di[m - 1][n - 1] >= di[m - 2][n - 1]) {
        ding[k][0] = m - 1;
        ding[k][1] = n - 1;
        k++;
    }
    for (i = 0; i < k; i++)
        printf ("%d %d\n", ding[i][0], ding[i][1]);
}

