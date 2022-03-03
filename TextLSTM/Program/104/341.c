int main () {
    int x, y;
    cin >> x >> y;
    int gen (int, int);
    cout << gen (x, y);
    return 0;
}

int up (int a) {
    int line, k, m;
    m = a;
    for (line = 0; m != 0; line++)
        m /= 2;
    k = pow (2.0, line - 2) + (a - pow (2.0, line - 1)) / 2;
    return k;
}

int gen (int a, int b) {
    if (a == b)
        return a;
    if (a > b) {
        a = up (a);
        return gen (a, b);
    }
    if (a < b) {
        b = up (b);
        return gen (a, b);
    }
}

