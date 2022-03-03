int main () {
    int n;
    cin >> n;
    for (; n > 0; n = n - 1) {
        double a, b, c, d, x1, x2, x1re, x1im, x2re, x2im;
        cin >> a >> b >> c;
        d = b * b - 4 * a * c;
        if (d >= 0) {
            if (b != 0) {
                x1 = (-b + sqrt (d)) / (2 * a);
                x2 = (-b - sqrt (d)) / (2 * a);
                if (x1 != x2) {
                    cout << fixed << setprecision (5) << "x1=" << x1;
                    cout << ";";
                    cout << fixed << setprecision (5) << "x2=" << x2 << endl;
                }
                else
                    cout << fixed << setprecision (5) << "x1=x2=" << x1 << endl;
            }
            else {
                x1 = (sqrt (d)) / (2 * a);
                x2 = (sqrt (d)) / (2 * a);
                if (x1 != x2) {
                    cout << fixed << setprecision (5) << "x1=" << x1;
                    cout << ";";
                    cout << fixed << setprecision (5) << "x2=" << x2 << endl;
                }
                else
                    cout << fixed << setprecision (5) << "x1=x2=" << x1 << endl;
            }
        }
        else {
            if (b != 0) {
                x1re = -b / (2 * a);
                x2re = -b / (2 * a);
                x1im = (sqrt (-d)) / (2 * a);
                x2im = -(sqrt (-d)) / (2 * a);
                cout << noshowpos << fixed << setprecision (5) << "x1=" << x1re << showpos << x1im << "i";
                cout << ";";
                cout << noshowpos << fixed << setprecision (5) << "x2=" << x2re << showpos << x2im << "i" << endl;
            }
            else {
                x1re = 0;
                x2re = 0;
                x1im = (sqrt (-d)) / (2 * a);
                x2im = -(sqrt (-d)) / (2 * a);
                cout << noshowpos << fixed << setprecision (5) << "x1=" << x1re << showpos << x1im << "i";
                cout << ";";
                cout << noshowpos << fixed << setprecision (5) << "x2=" << x2re << showpos << x2im << "i" << endl;
            }
        }
    }
    return 0;
}

