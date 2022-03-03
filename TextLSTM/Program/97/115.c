int main () {
    int n, i, a, b, c, d, e, f;
    cin >> n;
    i = n % 100;
    a = (n - i) / 100;
    n = i;
    i = n % 50;
    b = (n - i) / 50;
    n = i;
    i = n % 20;
    c = (n - i) / 20;
    n = i;
    i = n % 10;
    d = (n - i) / 10;
    n = i;
    i = n % 5;
    e = (n - i) / 5;
    f = i;
    cout << a << endl;
    cout << b << endl;
    cout << c << endl;
    cout << d << endl;
    cout << e << endl;
    cout << f << endl;
    return 0;
}

