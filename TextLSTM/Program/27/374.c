int main () {
    double a, b, c;
    int n;
    cin >> n;
    for (int i = 1;
    i <= n; i++) {
        cin >> a >> b >> c;
        double d = b * b - 4 * a * c;
        if (d > 0) {
            double x1, x2;
            x1 = (-b + sqrt (d)) / (2 * a);
            x2 = (-b - sqrt (d)) / (2 * a);
            cout << fixed << setprecision (5) << "x1=" << x1 << ";" << "x2=" << x2 << endl;
        }
        if (d == 0) {
            double x1, x2;
            x1 = -b / (2 * a);
            x2 = x1;
            cout << fixed << setprecision (5) << "x1=x2=" << x1 << endl;
        }
        if (d < 0) {
            d = -d;
            if (b != 0)
                cout << fixed << setprecision (5) << "x1=" << (-b) / (2 * a) << "+" << sqrt (d) / (2 * a) << "i" << ";" << "x2=" << (-b) / (2 * a) << "-" << sqrt (d) / (2 * a) << "i" << endl;
            else
                cout << fixed << setprecision (5) << "x1=" << b << "+" << sqrt (d) / (2 * a) << "i" << ";" << "x2=" << b << "-" << sqrt (d) / (2 * a) << "i" << endl;
        }
    }
    return 0;
}

