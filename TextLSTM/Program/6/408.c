int main () {
    int sz [100] [100], n, s [100] = {0}, i, j, len, col, m, sum = 0;
    scanf ("%d", &n);
    for (m = 0; m < n; m++) {
        scanf ("%d%d", &len, &col);
        for (i = 0; i < len; i++) {
            for (j = 0; j < col; j++) {
                scanf ("%d", &sz[i][j]);
                sum += sz[i][j];
            }
        }
        if (col == 1 || len == 1) {
            s[m] = sum;
        }
        else {
            for (j = 0; j < col - 1; j++) {
                s[m] += sz[0][j];
            }
            for (i = 0; i < len - 1; i++) {
                s[m] += sz[i][col - 1];
            }
            for (j = 1; j < col; j++) {
                s[m] += sz[len - 1][j];
            }
            for (i = 1; i < len; i++) {
                s[m] += sz[i][0];
            }
        }
    }
    for (i = 0; i < n; i++) {
        printf ("%d\n", s[i]);
    }
    return 0;
}

