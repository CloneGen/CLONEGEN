int dist (int x1, int y1, int z1, int x2, int y2, int z2) {
    return (x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2) + (z1 - z2) * (z1 - z2);
}

int main () {
    int x [10], y [10], z [10], d [100], i, j, n, m, k, a1 [100], b1 [100], c1 [100], a2 [100], b2 [100], c2 [100];
    scanf ("%d", &n);
    for (i = 0; i < n; i++) {
        scanf ("%d%d%d", &x[i], &y[i], &z[i]);
    }
    k = 0;
    for (i = 0; i < n - 1; i++) {
        for (j = i + 1; j < n; j++) {
            d[k] = dist (x[i], y[i], z[i], x[j], y[j], z[j]);
            a1[k] = x[i];
            b1[k] = y[i];
            c1[k] = z[i];
            a2[k] = x[j];
            b2[k] = y[j];
            c2[k] = z[j];
            k++;
        }
    }
    for (i = 0; i < k - 1; i++)
        for (j = 0; j < k - i - 1; j++) {
            if (d[j] < d[j + 1]) {
                m = d[j];
                d[j] = d[j + 1];
                d[j + 1] = m;
                m = a1[j];
                a1[j] = a1[j + 1];
                a1[j + 1] = m;
                m = b1[j];
                b1[j] = b1[j + 1];
                b1[j + 1] = m;
                m = c1[j];
                c1[j] = c1[j + 1];
                c1[j + 1] = m;
                m = a2[j];
                a2[j] = a2[j + 1];
                a2[j + 1] = m;
                m = b2[j];
                b2[j] = b2[j + 1];
                b2[j + 1] = m;
                m = c2[j];
                c2[j] = c2[j + 1];
                c2[j + 1] = m;
            }
        }
    for (i = 0; i < k; i++)
        printf ("(%d,%d,%d)-(%d,%d,%d)=%.2lf\n", a1[i], b1[i], c1[i], a2[i], b2[i], c2[i], sqrt (d[i]));
    return 0;
}

