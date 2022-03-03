int main () {
    int m, a, b, i, n = 0;
    cin >> m;
    for (a = 3; a <= m / 2; a += 2) {
        for (i = 3; i <= sqrt (a); i++) {
            if (a % i == 0)
                n++;
        }
        if (n == 0) {
            b = m - a;
            for (i = 3; i <= sqrt (b); i++) {
                if (b % i == 0)
                    n++;
            }
            if (n == 0)
                cout << a << " " << b << endl;
        }
        n = 0;
    }
    return 0;
}

