int main () {
    int m, n;
    int i, j, k, p, q;
    int b [9] [9] [5] = {0};
    scanf ("%d %d", &m, &n);
    b[4][4][0] = m;
    for (i = 1; i <= n; i++) {
        for (j = 1; j < 8; j++) {
            for (k = 1; k < 8; k++) {
                while (b[j][k][i - 1] != 0) {
                    b[j][k + 1][i] += b[j][k][i - 1];
                    b[j][k - 1][i] += b[j][k][i - 1];
                    b[j - 1][k - 1][i] += b[j][k][i - 1];
                    b[j - 1][k][i] += b[j][k][i - 1];
                    b[j - 1][k + 1][i] += b[j][k][i - 1];
                    b[j + 1][k - 1][i] += b[j][k][i - 1];
                    b[j + 1][k][i] += b[j][k][i - 1];
                    b[j + 1][k + 1][i] += b[j][k][i - 1];
                    b[j][k][i] += 2 * b[j][k][i - 1];
                    break;
                }
            }
        }
    }
    for (p = 0; p <= 8; p++) {
        for (q = 0; q < 8; q++)
            printf ("%d ", b[p][q][n]);
        printf ("%d\n", b[p][8][n]);
    }
    return 0;
}

