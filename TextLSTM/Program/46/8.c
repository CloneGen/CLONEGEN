int main () {
    int i, j, row, col, state;
    int sz [100] [100], zt [100] [100] = {0};
    scanf ("%d%d", &row, &col);
    for (i = 0; i < row; i++) {
        for (j = 0; j < col; j++) {
            scanf ("%d", &sz[i][j]);
        }
    }
    state = 0;
    i = 0;
    j = 0;
    if (row >= 2 && col >= 2) {
        while (1) {
            if (zt[i][j] == 1)
                break;
            else {
                if (state == 0 && j + 1 < col && zt[i][j + 1] == 0) {
                    printf ("%d\n", sz[i][j]);
                    zt[i][j] = 1;
                    j++;
                }
                else if (state == 0) {
                    printf ("%d\n", sz[i][j]);
                    zt[i][j] = 1;
                    i++;
                    state = 1;
                }
                else if (state == 1 && i + 1 < row && zt[i + 1][j] == 0) {
                    printf ("%d\n", sz[i][j]);
                    zt[i][j] = 1;
                    i++;
                }
                else if (state == 1) {
                    printf ("%d\n", sz[i][j]);
                    zt[i][j] = 1;
                    j--;
                    state = 2;
                }
                else if (state == 2 && j - 1 >= 0 && zt[i][j - 1] == 0) {
                    printf ("%d\n", sz[i][j]);
                    zt[i][j] = 1;
                    j--;
                }
                else if (state == 2) {
                    printf ("%d\n", sz[i][j]);
                    zt[i][j] = 1;
                    i--;
                    state = 3;
                }
                else if (state == 3 && i - 1 >= 0 && zt[i - 1][j] == 0) {
                    printf ("%d\n", sz[i][j]);
                    zt[i][j] = 1;
                    i--;
                }
                else if (state == 3) {
                    printf ("%d\n", sz[i][j]);
                    zt[i][j] = 1;
                    j++;
                    state = 0;
                }
            }
        }
    }
    else if (row == 1 && col == 1) {
        printf ("%d\n", sz[0][0]);
    }
    else if (row == 1 && col >= 2) {
        for (i = 0; i < col; i++) {
            printf ("%d\n", sz[0][i]);
        }
    }
    else if (row >= 2 && col == 1) {
        for (i = 0; i < row; i++) {
            printf ("%d\n", sz[i][0]);
        }
    }
    return 0;
}

