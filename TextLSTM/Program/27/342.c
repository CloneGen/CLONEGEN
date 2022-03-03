int main () {
    float a = 0, b = 0, c = 0;
    int i, n;
    double d, e;
    cin >> n;
    for (i = 1; i <= n; i = i + 1) {
        cin >> a >> b >> c;
        if (b * b - 4 * a * c > 0) {
            d = (-b + sqrt (b * b - 4 * a * c)) / (2 * a);
            e = (-b - sqrt (b * b - 4 * a * c)) / (2 * a);
            if (d > -0.00001)
                d = fabs (d);
            if (e > -0.00001)
                e = fabs (e);
            cout << "x1=" << fixed << setprecision (5) << d << ";x2=" << fixed << setprecision (5) << e << endl;
        }
        else if (b * b - 4 * a * c == 0) {
            d = -b / (2 * a);
            if (d > -0.00001)
                d = fabs (d);
            cout << "x1=x2=" << fixed << setprecision (5) << d << endl;
        }
        else {
            d = -b / (2 * a);
            if (d > -0.00001)
                d = fabs (d);
            cout << "x1=" << fixed << setprecision (5) << d << "+" << fixed << setprecision (5) << sqrt (-b * b + 4 * a * c) / (2 * a) << "i" << ";x2=" << fixed << setprecision (5) << d << "-" << fixed << setprecision (5) << sqrt (-b * b + 4 * a * c) / (2 * a) << "i" << endl;
        }
    }
    return 0;
}

