int main () {
    int n, a, b, c, d;
    cin >> n;
    a = n / 1000;
    b = n / 100 - a * 10;
    c = n / 10 - a * 100 - b * 10;
    d = n % 10;
    cout << d;
    if (a != 0 || b != 0 || c != 0)
        cout << c;
    if (a != 0 || b != 0)
        cout << b;
    if (a != 0)
        cout << a;
    return 0;
}

