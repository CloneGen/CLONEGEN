int main () {
    int n, a, b, c, d, e, m;
    cin >> n;
    if (9999 < n & n <= 99999) {
        e = n / 10000;
        d = (n - e * 10000) / 1000;
        c = (n - e * 10000 - d * 1000) / 100;
        b = (n - e * 10000 - d * 1000 - c * 100) / 10;
        a = n - e * 10000 - d * 1000 - c * 100 - b * 10;
        m = e + 10 * d + 100 * c + 1000 * b + 10000 * a;
        cout << m;
    }
    else if (999 < n & n <= 9999) {
        d = n / 1000;
        c = (n - d * 1000) / 100;
        b = (n - d * 1000 - c * 100) / 10;
        a = n - d * 1000 - c * 100 - b * 10;
        m = d + 10 * c + 100 * b + 1000 * a;
        cout << m;
    }
    else if (99 < n & n <= 999) {
        c = n / 100;
        b = (n - c * 100) / 10;
        a = n - c * 100 - b * 10;
        m = c + 10 * b + 100 * a;
        cout << m;
    }
    else if (n <= 99 & n > 9) {
        b = n / 10;
        a = n - 10 * b;
        m = b + 10 * a;
        cout << m;
    }
    else if (n <= 9)
        cout << n;
    return 0;
}

