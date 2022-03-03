int main () {
    int n;
    cin >> n;
    double a [n], b [n], c [n], x [n], y [n];
    double p [n];
    for (int i = 0;
    i < n; i++) {
        cin >> a[i] >> b[i] >> c[i];
    }
    for (int i = 0;
    i < n; i++) {
        p[i] = b[i] * b[i] - 4 * a[i] * c[i];
        x[i] = b[i] / (2 * a[i]);
        if (p[i] > 0) {
            y[i] = sqrt (p[i]) / (2 * a[i]);
            cout << "x1=" << fixed << setprecision (5) << -x[i] + y[i] << ";x2=" << -x[i] - y[i] << endl;
        }
        if (p[i] < 0) {
            y[i] = sqrt (-p[i]) / (2 * a[i]);
            if (x[i] == 0) {
                cout << "x1=" << 0.00000 << '+' << abs (y[i]) << 'i' << ";x2=" << 0.00000 << '-' << abs (y[i]) << 'i' << endl;
            }
            else
                cout << "x1=" << fixed << setprecision (5) << -x[i] << '+' << abs (y[i]) << 'i' << ";x2=" << -x[i] << '-' << abs (y[i]) << 'i' << endl;
        }
        if (p[i] == 0)
            cout << "x1=x2=" << fixed << setprecision (5) << -x[i] << endl;
    }
    return 0;
}

