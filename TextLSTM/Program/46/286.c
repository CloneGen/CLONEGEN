int main () {
    int a [100] [100], b [10000], i, j, r, c, k = 0, row, col, p;
    scanf ("%d%d", &row, &col);
    for (i = 0; i < row; i++)
        for (j = 0; j < col; j++)
            scanf ("%d", &a[i][j]);
    r = row;
    c = col;
    if (r >= c) {
        for (c = col; c > col / 2; c--) {
            p = 0;
            for (j = col - c; j < c; j++) {
                b[k] = a[row - r][j];
                k++;
                p++;
            }
            if (p == 0)
                break;
            else
                p = 0;
            for (j = row - r + 1; j < r; j++) {
                b[k] = a[j][c - 1];
                k++;
                p++;
            }
            if (p == 0)
                break;
            else
                p = 0;
            for (j = c - 2; j >= col - c; j--) {
                b[k] = a[r - 1][j];
                k++;
                p++;
            }
            if (p == 0)
                break;
            else
                p = 0;
            for (j = r - 2; j > row - r; j--) {
                b[k] = a[j][col - c];
                k++;
                p++;
            }
            if (p == 0)
                break;
            else
                p = 0;
            r--;
        }
    }
    if (r < c) {
        for (r = row; r > row / 2; r--) {
            p = 0;
            for (j = col - c; j < c; j++) {
                b[k] = a[row - r][j];
                k++;
                p++;
            }
            if (p == 0)
                break;
            else
                p = 0;
            for (j = row - r + 1; j < r; j++) {
                b[k] = a[j][c - 1];
                k++;
                p++;
            }
            if (p == 0)
                break;
            else
                p = 0;
            for (j = c - 2; j >= col - c; j--) {
                b[k] = a[r - 1][j];
                k++;
                p++;
            }
            if (p == 0)
                break;
            else
                p = 0;
            for (j = r - 2; j > row - r; j--) {
                b[k] = a[j][col - c];
                k++;
                p++;
            }
            if (p == 0)
                break;
            else
                p = 0;
            c--;
        }
    }
    printf ("%d", b[0]);
    for (i = 1; i < k; i++)
        printf ("\n%d", b[i]);
    return 0;
}

