int main () {
    int a, b, c, d, e, i;
    cin >> i;
    if (i / 10 == 0) {
        cout << i << endl;
    }
    if (i / 100 == 0 && i / 10 != 0) {
        a = i / 10;
        b = i - a * 10;
        cout << b << a << endl;
    }
    if (i / 1000 == 0 && i / 100 != 0) {
        a = i / 100;
        b = (i - a * 100) / 10;
        c = i - a * 100 - b * 10;
        cout << c << b << a << endl;
    }
    if (i / 10000 == 0 && i / 1000 != 0) {
        a = i / 1000;
        b = (i - a * 1000) / 100;
        c = (i - a * 1000 - b * 100) / 10;
        d = i - a * 1000 - b * 100 - c * 10;
        cout << d << c << b << a << endl;
    }
    if (i / 10000 != 0) {
        a = i / 10000;
        b = (i - a * 10000) / 1000;
        c = (i - a * 10000 - b * 1000) / 100;
        d = (i - a * 10000 - b * 1000 - c * 100) / 10;
        e = i - a * 10000 - b * 1000 - c * 100 - d * 10;
        cout << e << d << c << b << a << endl;
    }
    return 0;
}

