int main () {
    int a = 0;
    int b = 0;
    int c = 0;
    int d = 0;
    int e = 0;
    int f = 0;
    int g = 0;
    cin >> a;
    b = a / 10000;
    c = (a - 10000 * b) / 1000;
    d = (a - 10000 * b - 1000 * c) / 100;
    e = (a - 10000 * b - 1000 * c - 100 * d) / 10;
    f = a - 10000 * b - 1000 * c - 100 * d - 10 * e;
    if (b != 0 & c != 0 & d != 0 & e != 0 & f != 0)
        g = f * 10000 + e * 1000 + d * 100 + c * 10 + b;
    if (b == 0 & c != 0 & d != 0 & e != 0 & f != 0)
        g = f * 1000 + e * 100 + d * 10 + c;
    if (b == 0 & c == 0 & d != 0 & e != 0 & f != 0)
        g = f * 100 + e * 10 + d;
    if (b == 0 & c == 0 & d == 0 & e != 0 & f != 0)
        g = f * 10 + e;
    if (b == 0 & c == 0 & d == 0 & e == 0 & f != 0)
        g = e;
    cout << g << endl;
    return 0;
}

