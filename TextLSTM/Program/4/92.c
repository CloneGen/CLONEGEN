void main () {
    int a [100] [100], i, j, k, l, m, n, col, row;
    scanf ("%d%d", &row, &col);
    for (i = 0; i < row; i++) {
        for (j = 0; j < col; j++) {
            scanf ("%d", &a[i][j]);
        }
    }
    if (col >= row) {
        for (k = 0; k < col; k++) {
            for (l = 0; l < row && l <= k; l++) {
                printf ("%d\n", a[l][k - l]);
            }
        }
        for (m = 1; m < row; m++) {
            for (n = 0; n < row - m; n++)
                printf ("%d\n", a[m + n][col - 1 - n]);
        }
    }
    else {
        for (k = 0; k < col; k++) {
            for (l = 0; l < row && l <= k; l++) {
                printf ("%d\n", a[l][k - l]);
            }
        }
        for (m = 1; m < row; m++) {
            for (n = 0; n < row - m && n < col; n++)
                printf ("%d\n", a[m + n][col - 1 - n]);
        }
    }
}

