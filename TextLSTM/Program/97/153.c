int main () {
    int n, a = 0, b = 0, c = 0, d = 0, e = 0, f = 0;
    cin >> n;
    a = n / 100;
    if (n % 100 != 0) {
        b = ((n % 100) / 50);
        if ((n - 100 * a) % 50 != 0) {
            c = (((n - 100 * a - 50 * b) % 50) / 20);
            if ((n - 100 * a - 50 * b) % 20 != 0) {
                d = (((n - 100 * a - 50 * b) % 20) / 10);
                if ((n - 100 * a - 50 * b - 20 * c) % 10 != 0)
                    e = ((n - a * 100 - 50 * b - 20 * c - 10 * d) % 10) / 5;
                {
                    if ((n - 100 * a - 50 * b - 20 * c - 10 * d) % 5 != 0)
                        f = (((n - 100 * a - 50 * b - 20 * c - 10 * d - 5 * e) % 5) / 1);
                }
            }
        }
    }
    cout << a << endl;
    cout << b << endl;
    cout << c << endl;
    cout << d << endl;
    cout << e << endl;
    cout << f << endl;
    return 0;
}

