main () {
    int x [10], y [10], z [10], a1 [50], b1 [50], c1 [50], a2 [50], b2 [50], c2 [50], n, i, j, k, m;
    float d [50], q;
    scanf ("%d", &n);
    for (i = 0; i < n; i++) {
        scanf ("%d", &x[i]);
        scanf ("%d", &y[i]);
        scanf ("%d", &z[i]);
    }
    k = 0;
    for (i = 0; i < n; i++) {
        for (j = i + 1; j < n; j++) {
            d[k] = sqrt ((x[i] - x[j]) * (x[i] - x[j]) + (y[i] - y[j]) * (y[i] - y[j]) + (z[i] - z[j]) * (z[i] - z[j]));
            a1[k] = x[i];
            b1[k] = y[i];
            c1[k] = z[i];
            a2[k] = x[j];
            b2[k] = y[j];
            c2[k] = z[j];
            k++;
        }
    }
    for (i = 0; i < (n * (n - 1)) / 2 - 1; i++) {
        for (j = 0; j < (n * (n - 1)) / 2 - 1 - i; j++) {
            if (d[j] < d[j + 1]) {
                q = d[j + 1];
                d[j + 1] = d[j];
                d[j] = q;
                m = a1[j + 1];
                a1[j + 1] = a1[j];
                a1[j] = m;
                m = b1[j + 1];
                b1[j + 1] = b1[j];
                b1[j] = m;
                m = c1[j + 1];
                c1[j + 1] = c1[j];
                c1[j] = m;
                m = a2[j + 1];
                a2[j + 1] = a2[j];
                a2[j] = m;
                m = b2[j + 1];
                b2[j + 1] = b2[j];
                b2[j] = m;
                m = c2[j + 1];
                c2[j + 1] = c2[j];
                c2[j] = m;
            }
        }
    }
    for (i = 0; i < (n * (n - 1)) / 2; i++) {
        printf ("(%d,%d,%d)-(%d,%d,%d)=%.2f\n", a1[i], b1[i], c1[i], a2[i], b2[i], c2[i], d[i]);
    }
}

