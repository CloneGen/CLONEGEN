void main () {
    int i, j, ii, jj, real = 1, m, n, truth = 0, num [8] [8];
    scanf ("%d,%d", &m, &n);
    for (i = 0; i < m; i++)
        for (j = 0; j < n; j++)
            scanf ("%d", &num[i][j]);
    for (i = 0; i < m; i++)
        for (j = 0; j < n; j++) {
            real = 1;
            for (ii = 0; ii < m; ii++) {
                if (i == ii)
                    continue;
                if (num[ii][j] < num[i][j])
                    real = 0;
                if (real == 0)
                    break;
            }
            for (jj = 0; jj < n; jj++) {
                if (j == jj)
                    continue;
                if (num[i][jj] > num[i][j])
                    real = 0;
                if (real == 0)
                    break;
            }
            if (real == 1) {
                printf ("%d+%d", i, j);
                truth = 1;
            }
        }
    if (truth == 0)
        printf ("No");
}

