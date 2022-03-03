int main () {
    int n, i, j, t, q, s;
    cin >> n;
    t = n * (n - 1) / 2;
    int x [n + 1], y [n + 1], z [n + 1], a [t + 1], b [t + 1];
    float dis [t + 1], p;
    for (i = 1; i <= n; i++) {
        cin >> x[i] >> y[i] >> z[i];
    }
    for (i = 1; i <= n - 1; i++) {
        for (j = i + 1; j <= n; j++) {
            dis[(2 * n - i) * (i - 1) / 2 + j - i] = sqrt ((x[i] - x[j]) * (x[i] - x[j]) + (y[i] - y[j]) * (y[i] - y[j]) + (z[i] - z[j]) * (z[i] - z[j]));
            a[(2 * n - i) * (i - 1) / 2 + j - i] = i;
            b[(2 * n - i) * (i - 1) / 2 + j - i] = j;
        }
    }
    for (j = 1; j <= t; j++) {
        for (i = 1; i <= t; i++) {
            if (dis[i] < dis[i + 1]) {
                p = dis[i];
                dis[i] = dis[i + 1];
                dis[i + 1] = p;
                q = a[i];
                a[i] = a[i + 1];
                a[i + 1] = q;
                s = b[i];
                b[i] = b[i + 1];
                b[i + 1] = s;
            }
        }
    }
    for (i = 1; i <= t; i++) {
        cout << "(" << x[a[i]] << "," << y[a[i]] << "," << z[a[i]] << ")-(" << x[b[i]] << "," << y[b[i]] << "," << z[b[i]] << ")=" << fixed << setprecision (2) << dis[i] << endl;
    }
    return 0;
}

