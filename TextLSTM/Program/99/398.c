int main () {
    double k, m, n, x = 0.0, y = 0.0, z = 0.0, w = 0.0;
    double a, b, c, d;
    cin >> k;
    for (m = 1; m <= k; m = m + 1) {
        cin >> n;
        if (n <= 18) {
            x = x + 1;
        }
        if (n <= 35 && n >= 19) {
            y = y + 1;
        }
        if (n <= 60 && n >= 36) {
            z = z + 1;
        }
        if (n >= 61) {
            w = w + 1;
        }
    }
    a = x / k * 100;
    b = y / k * 100;
    c = z / k * 100;
    d = w / k * 100;
    cout << fixed;
    cout << setprecision (2) << "1-18: " << a << "%" << endl;
    cout << setprecision (2) << "19-35: " << b << "%" << endl;
    cout << setprecision (2) << "36-60: " << c << "%" << endl;
    cout << setprecision (2) << "60??: " << d << "%" << endl;
    return 0;
}

