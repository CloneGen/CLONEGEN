int main () {
    int row, col, a [100] [100], i, j, k = 0, b [10000], s;
    scanf ("%d %d", &row, &col);
    for (i = 0; i < row; i++) {
        for (j = 0; j < col; j++) {
            scanf ("%d", &a[i][j]);
        }
    }
    if (row >= col) {
        for (s = 0; s < col; s++) {
            for (i = 0; i <= s; i++) {
                b[k] = a[i][s - i];
                k++;
            }
        }
        for (s = col; s < row; s++) {
            for (i = s - col + 1; i <= s; i++) {
                b[k] = a[i][s - i];
                k++;
            }
        }
        for (s = row; s < row + col - 1; s++) {
            for (i = s - col + 1; i < row; i++) {
                b[k] = a[i][s - i];
                k++;
            }
        }
    }
    else {
        for (s = 0; s < row; s++) {
            for (i = 0; i <= s; i++) {
                b[k] = a[i][s - i];
                k++;
            }
        }
        for (s = row; s < col; s++) {
            for (i = 0; i < row; i++) {
                b[k] = a[i][s - i];
                k++;
            }
        }
        for (s = col; s < col + row - 1; s++) {
            for (i = s - col + 1; i < row; i++) {
                b[k] = a[i][s - i];
                k++;
            }
        }
    }
    for (i = 0; i < k; i++) {
        printf ("%d\n", b[i]);
    }
    return 0;
}

