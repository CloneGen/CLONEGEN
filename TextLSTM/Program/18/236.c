int main () {
    int a [100] [100], e, sum = 0;
    int n, m, i, j, k, l;
    scanf ("%d", &n);
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            for (k = 0; k < n; k++) {
                scanf ("%d", &a[j][k]);
            }
        }
        m = n;
        for (l = 0; l < m - 1; l++) {
            for (j = 0; j < n; j++) {
                e = a[j][0];
                for (k = 0; k < n; k++) {
                    if (a[j][k] < e) {
                        e = a[j][k];
                    }
                }
                for (k = 0; k < n; k++) {
                    a[j][k] -= e;
                }
            }
            for (k = 0; k < n; k++) {
                e = a[0][k];
                for (j = 0; j < n; j++) {
                    if (a[j][k] < e) {
                        e = a[j][k];
                    }
                }
                for (j = 0; j < n; j++) {
                    a[j][k] -= e;
                }
            }
            sum += a[1][1];
            for (j = 0; j < n; j++) {
                for (k = 1; k < n; k++) {
                    a[j][k] = a[j][k + 1];
                }
            }
            for (k = 0; k < n - 1; k++) {
                for (j = 1; j < n; j++) {
                    a[j][k] = a[j + 1][k];
                }
            }
            n -= 1;
        }
        printf ("%d\n", sum);
        sum = 0;
        n = m;
    }
    return 0;
}

