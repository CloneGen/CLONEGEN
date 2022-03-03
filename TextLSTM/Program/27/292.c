int main () {
    int n;
    cin >> n;
    double a, b, c;
    for (int i = 0;
    i < n; i++) {
        double x1, x2;
        cin >> a >> b >> c;
        double dot = b * b - 4 * a * c;
        if (dot == 0) {
            x1 = x2 = -b / (2 * a);
            cout << fixed << setprecision (5) << "x1=x2=" << x1 << endl;
        }
        else {
            if (dot > 0) {
                x1 = (-b + sqrt (dot)) / (2 * a);
                x2 = (-b - sqrt (dot)) / (2 * a);
                cout << fixed << setprecision (5) << "x1=" << x1 << ";x2=" << x2 << endl;
            }
            else {
                if (-b / (2 * a) != 0) {
                    cout << fixed << setprecision (5) << "x1=" << -b / (2 * a) << "+" << sqrt (-dot) / (2 * a) << "i;x2=" << -b / (2 * a) << "-" << sqrt (-dot) / (2 * a) << "i" << endl;
                }
                else {
                    cout << fixed << setprecision (5) << "x1=" << b / (2 * a) << "+" << sqrt (-dot) / (2 * a) << "i;x2=" << b / (2 * a) << "-" << sqrt (-dot) / (2 * a) << "i" << endl;
                }
            }
        }
    }
    return 0;
}

