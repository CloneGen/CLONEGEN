int main () {
    int n, i;
    double a, b, c, x1, x2, x3, x;
    cin >> n;
    for (i = 1; i <= n; i++) {
        cin >> a >> b >> c;
        x1 = (-b + sqrt (b * b - 4 * a * c)) / (2 * a);
        x2 = (-b - sqrt (b * b - 4 * a * c)) / (2 * a);
        if ((b * b - 4 * a * c) >= 0) {
            if (x1 == x2) {
                cout << fixed;
                cout << setprecision (5) << "x1=x2=" << x1 << endl;
            }
            if (x1 != x2) {
                cout << fixed;
                cout << setprecision (5) << "x1=" << x1 << ";" << "x2=" << x2 << endl;
            }
        }
        else {
            x3 = (+sqrt (4 * a * c - b * b)) / (2 * a);
            x = -b / (2 * a);
            if (x == -0) {
                x = -x;
            }
            cout << fixed;
            cout << setprecision (5) << "x1=" << x << "+" << x3 << "i" << ";" << "x2=" << x << "-" << x3 << "i" << endl;
        }
    }
    return 0;
}

