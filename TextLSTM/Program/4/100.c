int main () {
    int a [num] [num];
    int row, col;
    int i, j;
    scanf ("%d%d", &row, &col);
    for (i = 0; i < row; i++)
        for (j = 0; j < col; j++)
            scanf ("%d", &a[i][j]);
    for (j = 0; j < col; j++) {
        if (j < row) {
            for (i = 0; i <= j; i++)
                printf ("%d\n", a[i][j - i]);
        }
        else {
            for (i = 0; i < row; i++)
                printf ("%d\n", a[i][j - i]);
        }
    }
    for (j = col; j < col + row - 1; j++) {
        for (i = j - col + 1; j - i >= 0; i++) {
            if (i < row)
                printf ("%d\n", a[i][j - i]);
        }
    }
    return 0;
}

