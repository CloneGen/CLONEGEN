int main () {
    int k, i, j, l, sum, temp, c, d, e, q, w, r, t;
    int a [100] [100];
    scanf ("%d", &k);
    int m [100], n [100];
    for (i = 0; i < k; i++) {
        scanf ("%d%d", &m[i], &n[i]);
        for (j = 0; j < m[i]; j++) {
            for (l = 0; l < n[i]; l++) {
                scanf ("%d", &a[j][l]);
            }
        }
        sum = 0;
        temp = 0;
        c = 0;
        d = 0;
        e = 0;
        for (j = 0; j < n[i]; j++) {
            temp = temp + a[0][j];
        }
        for (j = 0; j < n[i]; j++) {
            c = c + a[m[i] - 1][j];
        }
        for (j = 0; j < m[i]; j++) {
            d = d + a[j][0];
        }
        for (j = 0; j < m[i]; j++) {
            e = e + a[j][n[i] - 1];
        }
        if (m[i] == 1 && n[i] == 1) {
            sum = a[0][0];
            printf ("%d\n", sum);
        }
        if (m[i] == 1 && n[i] != 1) {
            for (j = 0; j < n[i]; j++) {
                sum = sum + a[0][j];
            }
            printf ("%d\n", sum);
        }
        if (m[i] != 1 && n[i] == 1) {
            for (j = 0; j < n[i]; j++) {
                sum = sum + a[j][0];
            }
            printf ("%d\n", sum);
        }
        if (m[i] != 1 && n[i] != 1) {
            q = a[0][0];
            w = a[0][n[i] - 1];
            r = a[m[i] - 1][0];
            t = a[m[i] - 1][n[i] - 1];
            sum = c + d + e + temp - q - w - r - t;
            printf ("%d\n", sum);
        }
    }
    return 0;
}

