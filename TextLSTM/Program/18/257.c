int main () {
    int a [100] [100], i, j, k, l, m, n, x, y, min, sum;
    scanf ("%d", &n);
    for (i = 0; i < n; i++) {
        sum = 0;
        for (x = 0; x < n; x++) {
            for (y = 0; y < n; y++) {
                scanf ("%d", &a[x][y]);
            }
        }
        for (j = n; j > 1; j--) {
            for (x = 0; x < j; x++) {
                min = a[x][0];
                for (y = 1; y < j; y++) {
                    if (a[x][y] < min) {
                        min = a[x][y];
                    }
                }
                for (y = 0; y < j; y++) {
                    a[x][y] = a[x][y] - min;
                }
            }
            for (y = 0; y < j; y++) {
                min = a[0][y];
                for (x = 1; x < j; x++) {
                    if (a[x][y] < min) {
                        min = a[x][y];
                    }
                }
                for (x = 0; x < j; x++) {
                    a[x][y] = a[x][y] - min;
                }
            }
            for (k = 2; k < j; k++) {
                a[0][k - 1] = a[0][k];
            }
            for (k = 2; k < j; k++) {
                a[k - 1][0] = a[k][0];
            }
            sum = sum + a[1][1];
            for (x = 2; x < j; x++) {
                for (y = 2; y < j; y++) {
                    a[x - 1][y - 1] = a[x][y];
                }
            }
        }
        printf ("%d\n", sum);
    }
    return 0;
}

