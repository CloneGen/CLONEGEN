int m, n;

int f (int a, int b) {
    while (a >= 2 * b) {
        a = a / 2;
    }
    while (b >= 2 * a) {
        b = b / 2;
    }
    if (a > b) {
        while (a != b && a / 2 != b) {
            a = a / 2;
            b = b / 2;
        }
        return b;
    }
    if (b > a) {
        while (a != b && a != b / 2) {
            a = a / 2;
            b = b / 2;
        }
        return a;
    }
    if (a == b)
        return a;
}

int main () {
    cin >> m >> n;
    cout << f (m, n) << endl;
    return 0;
}

