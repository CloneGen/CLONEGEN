int main () {
    int row, col, sz [100] [100], i, j;
    scanf ("%d%d", &row, &col);
    for (i = 0; i < row; i++) {
        for (j = 0; j < col; j++) {
            scanf ("%d", &sz[i][j]);
        }
    }
    for (i = 0; i < col; i++) {
        for (j = 0; j < i + 1; j++) {
            if (j >= row) {
                break;
            }
            else {
                printf ("%d\n", sz[j][i - j]);
            }
        }
    }
    for (i = 1; i < row; i++) {
        for (j = 0; j < col; j++) {
            if (i + j >= row) {
                break;
            }
            else {
                printf ("%d\n", sz[i + j][col - j - 1]);
            }
        }
    }
    return 0;
}

