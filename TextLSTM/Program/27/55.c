int main () {
    int n;
    double a, b, c, x1, x2, p, i, d;
    cin >> n;
    cout << fixed << setprecision (5);
    for (int k = 1;
    k <= n; k++) {
        cin >> a >> b >> c;
        d = b * b - 4 * a * c;
        if (d < 0) {
            i = sqrt (-d) / (2 * a);
            p = -b / (2 * a);
            if (p == -0)
                p = 0;
            cout << "x1=" << p << "+" << i << "i;x2=" << p << "-" << i << "i" << endl;
        }
        else {
            if (d > 0) {
                x1 = (-b + sqrt (d)) / (2 * a);
                x2 = (-b - sqrt (d)) / (2 * a);
                cout << "x1=" << x1 << ";x2=" << x2 << endl;
            }
            else
                cout << "x1=x2=" << -b / (2 * a) << endl;
        }
    }
    return 0;
}

