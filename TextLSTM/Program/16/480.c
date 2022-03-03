int main () {
    int a, b, c, d, e, x;
    cin >> x;
    a = x % 10;
    b = (x - a) % 100 / 10;
    c = (x - a - 10 * b) % 1000 / 100;
    d = (x - a - 10 * b - 100 * c) % 10000 / 1000;
    e = (x - a - 10 * b - 100 * c - 1000 * d) % 100000 / 10000;
    if (e == 1)
        cout << 1;
    else if (d != 0)
        cout << a << b << c << d;
    else if (d == 0 && c != 0)
        cout << a << b << c;
    else if (d == 0 && c == 0 && b != 0)
        cout << a << b;
    else if (d == 0 && c == 0 && b == 0)
        cout << a;
    return 0;
}

