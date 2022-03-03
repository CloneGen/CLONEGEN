int main () {
    double a, b, c, delta, x1, x2;
    int n;
    cin >> n;
    for (int i = 1;
    i <= n; i++) {
        cin >> a >> b >> c;
        delta = b * b - 4 * a * c;
        cout << fixed << setprecision (5);
        if (delta == 0) {
            x1 = x2 = -b / (2 * a);
            cout << "x1=x2=" << x1 << endl;
        }
        else {
            if (delta > 0) {
                x1 = (-b + sqrt (delta)) / (2 * a);
                x2 = (-b - sqrt (delta)) / (2 * a);
                cout << "x1=" << x1 << ';' << "x2=" << x2 << endl;
            }
            else {
                x1 = x2 = -b / (2 * a);
                delta = sqrt (-delta) / (2 * a);
                if (abs (x1) < 1e-6)
                    x1 = x2 = 1e-7;
                cout << "x1=" << x1 << '+' << delta << 'i' << ';';
                cout << "x2=" << x2 << '-' << delta << 'i' << endl;
            }
        }
    }
    return 0;
}

