int main () {
    int n, k;
    cin >> k;
    for (n = 1; n <= k; n = n + 1) {
        float a, b, c;
        double x1, x2, x11, x22;
        cin >> a >> b >> c;
        if ((b * b - 4 * a * c) > 0) {
            x1 = (0 - b + sqrt (b * b - 4 * a * c)) / (2 * a);
            x2 = (0 - b - sqrt (b * b - 4 * a * c)) / (2 * a);
            cout << fixed;
            cout << "x1=" << setprecision (5) << x1 << ";" << "x2=" << setprecision (5) << x2 << endl;
        }
        else {
            if ((b * b - 4 * a * c) < 0) {
                x1 = x2 = (0 - b) / (2 * a);
                x11 = sqrt (-b * b + 4 * a * c) / (2 * a);
                x22 = -sqrt (-b * b + 4 * a * c) / (2 * a);
                cout << fixed;
                cout << "x1=" << setprecision (5) << x1 << "+" << setprecision (5) << x11 << "i" << ";" << "x2=" << setprecision (5) << x2 << setprecision (5) << x22 << "i" << endl;
            }
            else {
                x1 = x2 = (0 - b + sqrt (b * b - 4 * a * c)) / (2 * a);
                cout << fixed;
                cout << "x1=x2=" << setprecision (5) << x1 << endl;
            }
        }
    }
    return 0;
}

