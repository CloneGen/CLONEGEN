int main () {
    int n, i, q, p, k;
    cin >> n;
    for (k = 6; k <= n; k = k + 2) {
        for (i = 2; i <= sqrt ((double) (k - 2)); i++) {
            if ((k - 2) % i == 0) {
                break;
            }
        }
        if (i > sqrt ((double) (k - 2))) {
            cout << k << "=2+" << k - 2 << endl;
        }
        for (i = 3; i <= k / 2; i = i + 2) {
            for (q = 2; q <= sqrt ((double) i); q++) {
                if (i % q == 0) {
                    break;
                }
            }
            if (q > sqrt ((double) i)) {
                for (p = 2; p <= sqrt ((double) (k - i)); p++) {
                    if ((k - i) % p == 0) {
                        break;
                    }
                }
                if (p > sqrt ((double) (k - i))) {
                    cout << k << "=" << i << "+" << (k - i) << endl;
                    break;
                }
            }
        }
    }
    return 0;
}

