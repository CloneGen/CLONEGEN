int main () {
    int n, a, b, c, d, e, m;
    cin >> n;
    a = n / 10000;
    b = (n - a * 10000) / 1000;
    c = (n - a * 10000 - b * 1000) / 100;
    d = (n - a * 10000 - b * 1000 - c * 100) / 10;
    e = n % 10;
    if (a != 0) {
        m = e * 10000 + d * 1000 + c * 100 + b * 10 + a;
    }
    else if (b != 0) {
        m = e * 1000 + d * 100 + c * 10 + b;
    }
    else if (c != 0) {
        m = e * 100 + d * 10 + c;
    }
    else if (d != 0) {
        m = e * 10 + d;
    }
    else {
        m = e;
    }
    cout << m << endl;
    return 0;
}

