int main () {
    int n, i = 1;
    double a, b, c, x1, x2, delta, m;
    cin >> n;
    while (i <= n) {
        cin >> a >> b >> c;
        delta = b * b - 4 * a * c;
        if (delta > 0) {
            x1 = (0 - b + sqrt (delta)) / (2 * a);
            x2 = (0 - b - sqrt (delta)) / (2 * a);
            cout << fixed;
            cout << setprecision (5) << "x1=" << x1 << ";" << "x2=" << x2 << endl;
        }
        else if (delta == 0) {
            m = (0 - b) / (2 * a);
            cout << fixed;
            cout << setprecision (5) << "x1=x2=" << m << endl;
        }
        else if (delta < 0) {
            m = (0 - b) / (2 * a);
            cout << fixed;
            cout << setprecision (5) << "x1=" << m << "+" << sqrt (-delta) / (2 * a) << "i" << ";";
            cout << setprecision (5) << "x2=" << m << "-" << sqrt (-delta) / (2 * a) << "i" << endl;
        }
        i++;
    }
    return 0;
}

