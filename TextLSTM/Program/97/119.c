int main () {
    int a, b, c, d, e, f, g, sum;
    cin >> sum;
    a = sum / 100;
    b = (sum - 100 * a) / 50;
    if (b < 0)
        b = 0;
    c = (sum - a * 100 - b * 50) / 20;
    if (c < 0)
        c = 0;
    d = (sum - a * 100 - b * 50 - c * 20) / 10;
    if (d < 0)
        d = 0;
    e = (sum - a * 100 - b * 50 - c * 20 - d * 10) / 5;
    if (e < 0)
        e = 0;
    f = sum - a * 100 - b * 50 - c * 20 - d * 10 - e * 5;
    if (f < 0)
        f = 0;
    cout << a << endl;
    cout << b << endl;
    cout << c << endl;
    cout << d << endl;
    cout << e << endl;
    cout << f << endl;
    return 0;
}

