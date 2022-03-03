int main () {
    int m, p, x, i;
    cin >> m;
    if (m % 2 == 0 && m >= 6 && m <= 10000) {
        for (p = 3; p <= (m / 2); p = p + 2) {
            x = 1;
            for (i = 2; i <= sqrt (p); i++) {
                if (p % i == 0) {
                    x = 0;
                    break;
                }
            }
            for (i = 2; i <= sqrt (m - p); i++) {
                if ((m - p) % i == 0) {
                    x = 0;
                    break;
                }
            }
            if (x == 1)
                cout << p << " " << m - p << endl;
        }
    }
    return 0;
}

