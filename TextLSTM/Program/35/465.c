int main () {
    int row, col, a [8] [8], i, j, b [8], z = 1, c [8], d, e = 0;
    scanf ("%d,%d", &row, &col);
    for (i = 0; i < row; i++) {
        for (j = 0; j < col; j++) {
            scanf ("%d", &a[i][j]);
        }
    }
    for (i = 0; i < row; i++) {
        for (j = 0; j < col; j++) {
            if (j == 0) {
                b[z] = j;
                c[z] = i;
            }
            if (a[i][j - 1] < a[i][j]) {
                b[z] = j;
                c[z] = i;
            }
        }
        z++;
    }
    for (z = 1; z <= row; z++) {
        d = a[c[z]][b[z]];
        for (i = 0; i < row; i++) {
            if (a[i][b[z]] < a[c[z]][b[z]]) {
                d = a[i][b[z]];
            }
        }
        if (d == a[c[z]][b[z]]) {
            e = e + 1;
            printf ("%d+%d", c[z], b[z]);
        }
    }
    if (e == 0) {
        printf ("No");
    }
    return 0;
}

