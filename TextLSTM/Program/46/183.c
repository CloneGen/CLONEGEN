int main () {
    int n, row, col;
    int i, j, a [ROW] [COL] = {0}, time = 0;
    scanf ("%d%d", &row, &col);
    for (i = 0; i < row; i++) {
        for (j = 0; j < col; j++) {
            scanf ("%d", &a[i][j]);
        }
    }
    for (n = 0; n <= (row - 1) / 2; n++) {
        for (i = n; i < col - n; i++) {
            printf ("%d\n", a[n][i]);
        }
        if (2 * n + 1 == row)
            break;
        for (i = n + 1; i < row - n - 1; i++) {
            printf ("%d\n", a[i][col - n - 1]);
        }
        for (j = col - n - 1; j >= n; j--) {
            printf ("%d\n", a[row - n - 1][j]);
        }
        if (2 * n + 1 == col)
            break;
        for (j = row - n - 2; j > n; j--) {
            printf ("%d\n", a[j][n]);
        }
    }
    return 0;
}

