int main () {
    int x [1000], y [1000], z [1000], n, i, m, j, u [1000], v [1000], c, d;
    double s [100], b;
    b = 0;
    c = 0;
    d = 0;
    m = 0;
    scanf ("%d", &n);
    for (i = 0; i < n; i++)
        scanf ("%d%d%d", &x[i], &y[i], &z[i]);
    for (i = 0; i < n; i++) {
        for (j = n - 1; j > i; j--) {
            b = (x[i] - x[j]) * (x[i] - x[j]) + (y[i] - y[j]) * (y[i] - y[j]) + (z[i] - z[j]) * (z[i] - z[j]);
            s[m] = sqrt (b);
            u[m] = i;
            v[m] = j;
            m++;
        }
    }
    for (i = 0; i < n * (n - 1) / 2; i++) {
        if (n == 2)
            break;
        for (j = 0; j < n * (n - 1) / 2; j++) {
            if (s[j] < s[j + 1]) {
                b = s[j];
                s[j] = s[j + 1];
                s[j + 1] = b;
                c = u[j];
                u[j] = u[j + 1];
                u[j + 1] = c;
                d = v[j];
                v[j] = v[j + 1];
                v[j + 1] = d;
            }
        }
    }
    for (i = 0; i < n * (n - 1) / 2; i++) {
        if (n == 2)
            break;
        if (s[i] == s[i + 1]) {
            if (u[i] > u[i + 1]) {
                c = u[i];
                u[i] = u[i + 1];
                u[i + 1] = c;
                d = v[i];
                v[i] = v[i + 1];
                v[i + 1] = d;
            }
            if (u[i] == u[i + 1]) {
                if (v[i] > v[i + 1]) {
                    c = u[i];
                    u[i] = u[i + 1];
                    u[i + 1] = c;
                    d = v[i];
                    v[i] = v[i + 1];
                    v[i + 1] = d;
                }
            }
        }
    }
    for (i = 0; i < n * (n - 1) / 2; i++) {
        if (n == 2)
            printf ("(%d,%d,%d)-(%d,%d,%d)=%.2lf\n", x[u[0]], y[u[0]], z[u[0]], x[v[0]], y[v[0]], z[v[0]], s[0]);
        else {
            printf ("(%d,%d,%d)-(%d,%d,%d)=%.2lf\n", x[u[i]], y[u[i]], z[u[i]], x[v[i]], y[v[i]], z[v[i]], s[i]);
        }
    }
    return 0;
}

