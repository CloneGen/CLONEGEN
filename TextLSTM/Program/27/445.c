int main () {
    int n, i;
    double a, b, c;
    double delta, x1, x2, k1, k2;
    cin >> n;
    for (i = 1; i <= n; i++) {
        cin >> a >> b >> c;
        delta = b * b - 4 * a * c;
        if (delta > 0) {
            x1 = (-b + sqrt (delta)) / (2 * a);
            x2 = (-b - sqrt (delta)) / (2 * a);
            if (x1 < 0.000001 && x1 > -0.000001) {
                x1 = 0;
            }
            cout << fixed;
            cout << setprecision (5) << "x1=" << x1 << ";" << "x2=" << x2 << endl;
        }
        else if (delta == 0) {
            x1 = -b / (2 * a);
            x2 = -b / (2 * a);
            if (x1 < 0.000001 && x1 > -0.000001)
                x1 = 0;
            if (x2 < 0.000001 && x1 > -0.000001)
                x2 = 0;
            cout << fixed;
            cout << setprecision (5) << "x1=x2=" << x1 << endl;
        }
        else if (delta < 0) {
            k1 = -b / (2 * a);
            k2 = sqrt (-delta) / (2 * a);
            if (k1 < 0.000001 && k1 > -0.000001)
                k1 = 0;
            if (k2 < 0.000001 && k1 > -0.000001)
                k2 = 0;
            cout << fixed;
            cout << setprecision (5) << "x1=" << k1 << "+" << k2 << "i;x2=" << k1 << "-" << k2 << "i" << endl;
        }
    }
    return 0;
}

