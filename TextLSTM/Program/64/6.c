int main () {
    int n, i, j, k = 0, d, e, x [100], y [100], z [100];
    double m, a [100] [100] = {-1}, b [500] = {-1}, c [500];
    scanf ("%d", &n);
    for (i = 0; i < n; i++)
        scanf ("%d%d%d", &x[i], &y[i], &z[i]);
    for (i = 0; i < n - 1; i++) {
        for (j = i + 1; j < n; j++) {
            a[i][j] = sqrt ((x[i] - x[j]) * (x[i] - x[j]) + (y[i] - y[j]) * (y[i] - y[j]) + (z[i] - z[j]) * (z[i] - z[j]));
            b[k] = a[i][j];
            k++;
        }
    }
    for (i = 0; i < k - 1; i++) {
        for (j = 0; j < k - i - 1; j++) {
            if (b[j] < b[j + 1]) {
                m = b[j];
                b[j] = b[j + 1];
                b[j + 1] = m;
            }
        }
    }
    e = 1;
    for (i = 0; i < k - 1; i++) {
        if (b[i] == b[i + e]) {
            for (e = 1; 1; e++) {
                if (b[i] == b[i + e])
                    b[i + e] = -1;
                else
                    break;
            }
        }
    }
    j = 0;
    for (i = 0; i < k; i++) {
        if (b[i] != -1) {
            c[j] = b[i];
            j++;
        }
    }
    for (i = 0; i < j; i++) {
        for (k = 0; k < n - 1; k++) {
            for (d = k + 1; d < n; d++) {
                if (a[k][d] == c[i])
                    printf ("(%d,%d,%d)-(%d,%d,%d)=%.2lf\n", x[k], y[k], z[k], x[d], y[d], z[d], c[i]);
            }
        }
    }
    return 0;
}

