int main () {
    int n, h [10], z [10], s [10], a [100], b [100], c [100], d [100], e [100], f [100], i, j, l, m, o, q, r, t, k;
    double g [100], p;
    scanf ("%d", &n);
    for (i = 0; i < n; i++) {
        scanf ("%d%d%d", &h[i], &z[i], &s[i]);
    }
    k = 0;
    for (i = 0; i < n; i++) {
        for (j = i + 1; j < n; j++) {
            g[k] = pow ((h[i] - h[j]) * (h[i] - h[j]) + (z[i] - z[j]) * (z[i] - z[j]) + (s[i] - s[j]) * (s[i] - s[j]), 0.5);
            a[k] = h[i];
            b[k] = z[i];
            c[k] = s[i];
            d[k] = h[j];
            e[k] = z[j];
            f[k] = s[j];
            k++;
        }
    }
    for (k = 0; k < n * (n - 1) / 2; k++) {
        for (i = 0; i < n * (n - 1) / 2 - k; i++) {
            if (g[i] < g[i + 1]) {
                p = g[i];
                g[i] = g[i + 1];
                g[i + 1] = p;
                l = a[i];
                a[i] = a[i + 1];
                a[i + 1] = l;
                m = b[i];
                b[i] = b[i + 1];
                b[i + 1] = m;
                o = c[i];
                c[i] = c[i + 1];
                c[i + 1] = o;
                q = d[i];
                d[i] = d[i + 1];
                d[i + 1] = q;
                r = e[i];
                e[i] = e[i + 1];
                e[i + 1] = r;
                t = f[i];
                f[i] = f[i + 1];
                f[i + 1] = t;
            }
        }
    }
    for (i = 0; i < n * (n - 1) / 2; i++) {
        printf ("(%d,%d,%d)-(%d,%d,%d)=%.2lf\n", a[i], b[i], c[i], d[i], e[i], f[i], g[i]);
    }
    return 0;
}

