int main () {
    int row, col, a [100] [100], i, j, max, s;
    scanf ("%d %d", &row, &col);
    max = row;
    if (max < col)
        max = col;
    for (i = 0; i < max; i++) {
        for (j = 0; j < max; j++) {
            a[i][j] = -1;
        }
    }
    for (i = 0; i < row; i++) {
        for (j = 0; j < col; j++) {
            scanf ("%d", &a[i][j]);
        }
    }
    if (max == 1)
        printf ("%d", a[0][0]);
    else {
        i = 0;
        j = 0;
        while (j < max) {
            if (a[i][j] != -1)
                printf ("%d\n", a[i][j]);
            if (j == 0) {
                j = i + 1;
                i = 0;
            }
            else {
                i = i + 1;
                j = j - 1;
            }
        }
        j = max - 1;
        i = 1;
        while (i != max - 1 || j != max - 1) {
            if (a[i][j] != -1)
                printf ("%d\n", a[i][j]);
            if (i == max - 1) {
                i = j + 1;
                j = max - 1;
            }
            else {
                i = i + 1;
                j = j - 1;
            }
        }
        if (a[max - 1][max - 1] != -1)
            printf ("%d\n", a[max - 1][max - 1]);
    }
    return 0;
}

