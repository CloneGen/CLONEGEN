void main () {
    int i, j, n, k, k1, k2, x [101], y [101], z [101];
    char a [11] [101], b [11] [101];
    scanf ("%d", &n);
    for (i = 1; i <= n; i++) {
        for (j = 1; j <= 100; j++) {
            a[i][j] = '\0';
            b[i][j] = '\0';
        }
    }
    for (i = 1; i <= n; i++) {
        scanf ("%s", &a[i]);
        scanf ("%s", &b[i]);
    }
    for (i = 1; i <= n; i++) {
        for (j = 0; j <= 100; j++) {
            x[j] = 0;
            y[j] = 0;
            z[j] = 0;
        }
        for (j = 100; j >= 0; j--) {
            if (a[i][j] != '\0') {
                k1 = j + 1;
                for (j = j; j >= 0; j--)
                    a[i][j] = a[i][j] - 48;
                if (j == -1)
                    break;
            }
        }
        for (j = 100; j >= 0; j--) {
            if (b[i][j] != '\0') {
                k2 = j + 1;
                for (j = j; j >= 0; j--)
                    b[i][j] = b[i][j] - 48;
                if (j == -1)
                    break;
            }
        }
        for (j = 100; j >= 101 - k1; j--)
            x[j] = a[i][j - 101 + k1];
        for (j = 100; j >= 101 - k2; j--)
            y[j] = b[i][j - 101 + k2];
        for (j = 100, k = 0; j >= 101 - k1; j--) {
            if (x[j] - k >= y[j]) {
                z[j] = x[j] - k - y[j];
                k = 0;
            }
            if (x[j] - k < y[j]) {
                z[j] = x[j] + 10 - k - y[j];
                k = 1;
            }
        }
        for (j = 0; i <= 100; j++) {
            if (j == 100 && z[j] == 0)
                printf ("0\n");
            if (z[j] != 0) {
                for (j = j; j <= 100; j++)
                    printf ("%d", z[j]);
                if (j == 101) {
                    printf ("\n");
                    break;
                }
            }
        }
    }
}

