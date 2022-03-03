int main () {
    int n;
    double a, b, c, x1, x2, d, p, q;
    char i;
    cin >> n;
    for (i = 1; i <= n; i++) {
        cin >> a >> b >> c;
        d = b * b - 4 * a * c;
        if (d > 0) {
            if (b != 0) {
                b = -b;
            }
            x1 = (b + sqrt (d)) / (2 * a);
            x2 = (b - sqrt (d)) / (2 * a);
            cout << fixed;
            cout << "x1=" << setprecision (5) << x1 << ";";
            cout << "x2=" << setprecision (5) << x2 << endl;
        }
        else if (d < 0) {
            if (b != 0) {
                b = -b;
            }
            p = b / (2 * a);
            q = sqrt (-d) / (2 * a);
            cout << fixed;
            cout << "x1=" << setprecision (5) << p;
            cout << "+" << setprecision (5) << q;
            cout << 'i' << ";" << "x2=" << setprecision (5) << p;
            cout << "-" << setprecision (5) << q << 'i' << endl;
        }
        else {
            if (b != 0) {
                b = -b;
            }
            x1 = b / (2 * a);
            x2 = b / (2 * a);
            cout << "x1=x2=";
            cout << fixed;
            cout << setprecision (5) << x1 << endl;
        }
    }
    return 0;
}

