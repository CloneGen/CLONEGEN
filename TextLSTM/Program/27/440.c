int main () {
    int n;
    double x1, x2;
    double a, b, c, delta;
    cin >> n;
    for (int i = 0;
    i < n; i++) {
        cin >> a >> b >> c;
        delta = b * b - 4 * a * c;
        if (delta > 0) {
            x1 = 0 + (-b + sqrt (delta)) / (2 * a);
            x2 = 0 + (-b - sqrt (delta)) / (2 * a);
            cout << fixed << setprecision (5);
            cout << "x1=" << x1 << ";x2=" << x2 << endl;
        }
        else if (delta < 0) {
            x1 = 0 + (-b) / (2 * a);
            x2 = fabs (sqrt (-delta) / (2 * a));
            cout << fixed << setprecision (5);
            cout << "x1=" << x1 << "+" << x2 << "i;";
            cout << "x2=" << x1 << "-" << x2 << "i" << endl;
        }
        else {
            x1 = 0 + (-b) / (2 * a);
            cout << fixed << setprecision (5);
            cout << "x1=x2=" << x1 << endl;
        }
    }
    return 0;
}

