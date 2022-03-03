int main () {
    int n;
    double a, b, c, x1, x2, xr, xi;
    cin >> n;
    while (n--) {
        cin >> a >> b >> c;
        if ((b * b - 4 * a * c) == 0) {
            x1 = (-b) / (2 * a);
            cout << fixed << setprecision (5) << "x1=x2=" << x1 << endl;
        }
        else if ((b * b - 4 * a * c) < 0) {
            xr = (-b) / (2 * a);
            if (fabs (xr) < (1e-6))
                xr = 0;
            xi = sqrt (4 * a * c - b * b) / (2 * a);
            cout << fixed << setprecision (5) << "x1=" << xr << "+" << xi << "i;x2=" << xr << "-" << xi << "i" << endl;
        }
        else {
            x1 = (-b + sqrt (b * b - 4 * a * c)) / (2 * a);
            x2 = (-b - sqrt (b * b - 4 * a * c)) / (2 * a);
            if (fabs (x1) < (1e-6))
                x1 = 0;
            if (fabs (x2) < (1e-6))
                x2 = 0;
            cout << fixed << setprecision (5) << "x1=" << x1 << ";x2=" << x2 << endl;
        }
    }
    return 0;
}

