int main () {
    int a, b, c, d, e, f;
    cin >> a;
    b = a / 1000;
    c = (a - 1000 * b) / 100;
    d = (a - 1000 * b - 100 * c) / 10;
    e = a - 1000 * b - 100 * c - 10 * d;
    if (b > 0)
        cout << e << d << c << b;
    else if (b == 0 && c > 0)
        cout << e << d << c;
    else if (b == c == 0 && d > 0)
        cout << e << d;
    else
        cout << e << endl;
    return 0;
}

