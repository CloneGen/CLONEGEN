int main () {
    int n;
    int i, j, k, p;
    int x, y, z;
    int m;
    scanf ("%d", &n);
    m = n * (n - 1) / 2;
    double c [m], t, t0;
    int a [n] [3];
    double b [n] [n];
    for (i = 0; i < n; i++) {
        scanf ("%d %d %d", &a[i][0], &a[i][1], &a[i][2]);
    }
    k = 0;
    for (i = 0; i < n - 1; i++) {
        for (j = i + 1; j < n; j++) {
            x = a[i][0] - a[j][0];
            y = a[i][1] - a[j][1];
            z = a[i][2] - a[j][2];
            b[i][j] = sqrt (x * x + y * y + z * z);
            c[k] = b[i][j];
            k++;
        }
    }
    for (i = k - 1; i > 0; i--) {
        for (j = 0; j < i; j++) {
            if (c[j] < c[j + 1]) {
                t = c[j];
                c[j] = c[j + 1];
                c[j + 1] = t;
            }
        }
    }
    t0 = c[0] + 1;
    for (i = 0; i < k; i++) {
        if (c[i] == t0)
            continue;
        if (c[i] != t0) {
            t0 = c[i];
            for (j = 0; j < n - 1; j++) {
                for (p = j + 1; p < n; p++) {
                    if (b[j][p] == c[i]) {
                        printf ("(%d,%d,%d)-(%d,%d,%d)=%.2lf\n", a[j][0], a[j][1], a[j][2], a[p][0], a[p][1], a[p][2], b[j][p]);
                    }
                }
            }
        }
    }
    return 0;
}

