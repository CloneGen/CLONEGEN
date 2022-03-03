int main () {
    int m, a, b, i, j1 = 0, j2 = 0;
    cin >> m;
    for (a = 3; a <= m / 2; a++) {
        b = m - a;
        for (i = 1; i <= a; i++) {
            if (a % i == 0) {
                j1 = j1 + 1;
            }
        }
        for (i = 1; i <= b; i++) {
            if (b % i == 0) {
                j2 = j2 + 1;
            }
        }
        if (j1 == 2 && j2 == 2) {
            cout << a << " " << b << endl;
        }
        j1 = 0;
        j2 = 0;
    }
    return 0;
}

