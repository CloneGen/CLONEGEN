void main () {
    int array [100] [100] = {0}, i, j, row, col, h = 0, n, k, r, c, m;
    scanf ("%d%d", &row, &col);
    r = row;
    c = col;
    for (i = 0; i < row; i++) {
        for (j = 0; j < col; j++) {
            scanf ("%d", &array[i][j]);
        }
    }
    if (r <= c) {
        n = (r * 2 - 1) / 4;
        m = 2 * r - 1;
    }
    else {
        n = (c * 2) / 4;
        m = c * 2;
    }
    for (k = 0; k < n; k++) {
        for (i = h, j = h; j < col; j++) {
            printf ("%d\n", array[i][j]);
        }
        for (j = col - 1, i = h + 1; i < row; i++) {
            printf ("%d\n", array[i][j]);
        }
        for (i = row - 1, j = col - 2; j >= h; j--) {
            printf ("%d\n", array[i][j]);
        }
        for (j = h, i = row - 2; i >= h + 1; i--) {
            printf ("%d\n", array[i][j]);
        }
        h++;
        col--;
        row--;
    }
    if (m % 4 == 1) {
        for (i = h, j = h; j < col; j++) {
            printf ("%d\n", array[i][j]);
        }
    }
    if (m % 4 == 2) {
        for (i = h, j = h; j < col; j++) {
            printf ("%d\n", array[i][j]);
        }
        for (j = col - 1, i = h + 1; i < row; i++) {
            printf ("%d\n", array[i][j]);
        }
    }
    if (m % 4 == 3) {
        for (i = h, j = h; j < col; j++) {
            printf ("%d\n", array[i][j]);
        }
        for (j = col - 1, i = h + 1; i < row; i++) {
            printf ("%d\n", array[i][j]);
        }
        for (i = row - 1, j = col - 2; j >= h; j--) {
            printf ("%d\n", array[i][j]);
        }
    }
}

