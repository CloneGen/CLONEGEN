int main () {
    int a [101] [101];
    int m, n, i, j, s, t;
    scanf ("%d%d", &m, &n);
    for (i = 1; i <= m; i++) {
        for (j = 1; j <= n; j++) {
            scanf ("%d", &a[i][j]);
        }
    }
    if (m > n) {
        s = n;
    }
    else {
        s = m;
    }
    i = 1;
    if (s % 2 == 0) {
        for (t = 1; t <= s / 2; t++) {
            for (j = t; j <= n - t + 1; j++) {
                printf ("%d\n", a[i][j]);
            }
            for (i = 1 + t; i <= m + 1 - t; i++) {
                printf ("%d\n", a[i][j - 1]);
            }
            i = i - 1;
            for (j = n - t; j >= t; j--) {
                printf ("%d\n", a[i][j]);
            }
            j = j + 1;
            for (i = m - t; i >= t + 1; i--) {
                printf ("%d\n", a[i][j]);
            }
            i = i + 1;
        }
    }
    else {
        i = 1;
        for (t = 1; t <= (s - 1) / 2; t++) {
            for (j = t; j <= n - t + 1; j++) {
                printf ("%d\n", a[i][j]);
            }
            for (i = 1 + t; i <= m + 1 - t; i++) {
                printf ("%d\n", a[i][j - 1]);
            }
            i = i - 1;
            for (j = n - t; j >= t; j--) {
                printf ("%d\n", a[i][j]);
            }
            j = j + 1;
            for (i = m - t; i >= t + 1; i--) {
                printf ("%d\n", a[i][j]);
            }
            i = i + 1;
        }
        if (m < n) {
            for (j = (s + 1) / 2; j <= (n - (s - 1) / 2); j++) {
                printf ("%d\n", a[(s + 1) / 2][j]);
            }
        }
        else {
            for (i = (s + 1) / 2; i <= (m - (s - 1) / 2); i++) {
                printf ("%d\n", a[i][(s + 1) / 2]);
            }
        }
    }
    return 0;
}

