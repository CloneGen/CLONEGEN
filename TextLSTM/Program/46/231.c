int main () {
    int sz [100] [100], col, row, i, k, count = 0;
    scanf ("%d%d", &row, &col);
    for (i = 0; i < row; i++) {
        for (k = 0; k < col; k++) {
            scanf ("%d", &sz[i][k]);
        }
    }
    i = 0;
    k = 0;
    for (1; 1; 1) {
        for (k = k; k < col; k++) {
            printf ("%d\n", sz[i][k]);
            sz[i][k] = 0;
            count++;
            if (sz[i][k + 1] == 0 || k + 1 == col) {
                i = i + 1;
                break;
            }
        }
        if (count >= col * row) {
            break;
        }
        for (i = i; i < row; i++) {
            printf ("%d\n", sz[i][k]);
            sz[i][k] = 0;
            count++;
            if (sz[i + 1][k] == 0 || i + 1 == row) {
                k = k - 1;
                break;
            }
        }
        if (count >= col * row) {
            break;
        }
        for (k = k; k >= 0; k--) {
            printf ("%d\n", sz[i][k]);
            sz[i][k] = 0;
            count++;
            if (sz[i][k - 1] == 0 || k == 0) {
                i = i - 1;
                break;
            }
        }
        if (count >= col * row) {
            break;
        }
        for (i = i; i >= 0; i--) {
            printf ("%d\n", sz[i][k]);
            sz[i][k] = 0;
            count++;
            if (sz[i - 1][k] == 0 || i == 0) {
                k = k + 1;
                break;
            }
        }
        if (count >= col * row) {
            break;
        }
    }
    return 0;
}

