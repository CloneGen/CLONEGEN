int main () {
    int array [100] [100], s [10000], row, col, i, j, k, l, h, a, b, c;
    scanf ("%d%d", &row, &col);
    for (i = 0; i < row; i++) {
        for (j = 0; j < col; j++) {
            scanf ("%d", &array[i][j]);
        }
    }
    b = row;
    c = col;
    if (b > c) {
        a = b;
        b = c;
        c = a;
    }
    a = b;
    if (a % 2 == 0) {
        l = a / 2;
    }
    else {
        l = a / 2 + 1;
    }
    k = 0;
    for (h = 0; h < l; h++) {
        for (j = h; j < col - h; j++) {
            s[k] = array[h][j];
            k++;
        }
        for (i = h + 1; i < row - h; i++) {
            s[k] = array[i][col - 1 - h];
            k++;
        }
        for (j = col - 2 - h; j >= h; j--) {
            s[k] = array[row - 1 - h][j];
            k++;
        }
        for (i = row - 2 - h; i > h; i--) {
            s[k] = array[i][h];
            k++;
        }
    }
    for (k = 0; k < row * col; k++) {
        printf ("%d\n", s[k]);
    }
    return 0;
}

