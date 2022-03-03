int main () {
    int n;
    cin >> n;
    int x [n], y [n], z [n];
    int t = n * (n - 1) / 2;
    int d [t];
    int a [t], b [t];
    int k = 0, i, j;
    for (i = 0; i < n; i++) {
        cin >> x[i] >> y[i] >> z[i];
    }
    for (i = 0; i < n; i++) {
        for (j = i + 1; j < n; j++) {
            d[k] = ((x[i] - x[j]) * (x[i] - x[j]) + (y[i] - y[j]) * (y[i] - y[j]) + (z[i] - z[j]) * (z[i] - z[j]));
            a[k] = i;
            b[k] = j;
            k++;
        }
    }
    for (int c = 1;
    c < t; c++) {
        for (int r = 0;
        r < (k - c); r++) {
            if (d[r] < d[r + 1]) {
                swap (d[r], d[r + 1]);
                swap (a[r], a[r + 1]);
                swap (b[r], b[r + 1]);
            }
        }
    }
    for (int w = 0;
    w < t; w++) {
        cout << "(" << x[a[w]] << "," << y[a[w]] << "," << z[a[w]] << ")-(" << x[b[w]] << "," << y[b[w]] << "," << z[b[w]] << ")=" << fixed << setprecision (2) << sqrt (d[w]) << endl;
    }
    return 0;
}

