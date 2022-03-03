int main () {
    int m, n, i, j, b;
    cin >> m;
    for (n = 3; n <= m / 2; n = n + 2) {
        for (i = 2; i <= n - 1; i++) {
            if (n % i == 0)
                break;
        }
        if (i == n) {
            b = m - n;
            for (j = 2; j <= b - 1; j++) {
                if (b % j == 0)
                    break;
            }
            if (j == b)
                cout << n << " " << b << endl;
        }
    }
    return 0;
}

