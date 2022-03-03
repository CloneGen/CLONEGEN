int main () {
    int n, k;
    double a, b, c;
    double d, x1, x2, x3;
    cin >> n;
    for (k = 0; k < n; k++) {
        cin >> a >> b >> c;
        d = b * b - 4 * a * c;
        if (d >= 0)
            if (d > 0) {
                x1 = (-b + sqrt (d)) / (2 * a);
                x2 = (-b - sqrt (d)) / (2 * a);
                cout << fixed << setprecision (5) << "x1=" << x1 << ";" << "x2=" << x2 << endl;
            }
            else {
                x1 = (-b) / (2 * a);
                cout << fixed << setprecision (5) << "x1=x2=" << x1 << endl;
            }
        else {
            x3 = (-b) / (2 * a);
            x1 = sqrt (-d) / (2 * a);
            x2 = -sqrt (-d) / (2 * a);
            if (fabs (x3) < 0.0000000001)
                x3 = 0;
            cout << fixed << setprecision (5) << "x1=" << x3 << "+" << x1 << "i" << ";" << "x2=" << x3 << x2 << "i" << endl;
        }
    }
    return 0;
}

