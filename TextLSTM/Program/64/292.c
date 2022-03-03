int main () {
    int n, x [100], y [100], z [100], i, j, k, a [100], b [100], c [100], d [100], e [100], f [100], m, o;
    double dis [1000], p;
    scanf ("%d", &n);
    m = (n - 1) * n / 2;
    for (i = 1; i <= n; i++) {
        scanf ("%d%d%d", &x[i], &y[i], &z[i]);
    }
    for (i = 1, k = 1; i <= n - 1; i++) {
        for (j = i + 1; j <= n; j++) {
            a[k] = x[i];
            b[k] = y[i];
            c[k] = z[i];
            d[k] = x[j];
            e[k] = y[j];
            f[k] = z[j];
            dis[k] = sqrt ((1.0 * a[k] - d[k]) * (a[k] - d[k]) + (b[k] - e[k]) * (b[k] - e[k]) + (c[k] - f[k]) * (c[k] - f[k]));
            k++;
        }
    }
    for (i = 1; i <= m; i++) {
        for (k = 1; k <= m - i; k++) {
            if (dis[k] < dis[k + 1]) {
                o = a[k + 1];
                a[k + 1] = a[k];
                a[k] = o;
                o = b[k + 1];
                b[k + 1] = b[k];
                b[k] = o;
                o = c[k + 1];
                c[k + 1] = c[k];
                c[k] = o;
                o = d[k + 1];
                d[k + 1] = d[k];
                d[k] = o;
                o = e[k + 1];
                e[k + 1] = e[k];
                e[k] = o;
                o = f[k + 1];
                f[k + 1] = f[k];
                f[k] = o;
                p = dis[k + 1];
                dis[k + 1] = dis[k];
                dis[k] = p;
            }
        }
    }
    for (i = 1; i <= m; i++) {
        printf ("(%d,%d,%d)-(%d,%d,%d)=%.2lf\n", a[i], b[i], c[i], d[i], e[i], f[i], dis[i]);
    }
    return 0;
}

