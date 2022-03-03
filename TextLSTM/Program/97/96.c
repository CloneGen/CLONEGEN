int main () {
    int n, a = 0, b = 0, c = 0, d = 0, e = 0, f = 0;
    cin >> n;
    if (n >= 100) {
        a = n / 100;
        n = n - a * 100;
    }
    if (n >= 50) {
        b = n / 50;
        n = n - b * 50;
    }
    if (n >= 20) {
        c = n / 20;
        n = n - c * 20;
    }
    if (n >= 10) {
        d = n / 10;
        n = n - d * 10;
    }
    if (n >= 5) {
        e = n / 5;
        n = n - e * 5;
    }
    f = n;
    cout << a << endl;
    cout << b << endl;
    cout << c << endl;
    cout << d << endl;
    cout << e << endl;
    cout << f << endl;
    return 0;
}

